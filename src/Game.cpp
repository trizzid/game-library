#include "../include/Game.h"
#include "../include/InputIfc.h"
#include "../include/OutputIfc.h"
#include "../include/CommandFactoryIfc.h"
#include "../include/PlayerCommandIfc.h"
#include "../include/ModelIfc.h"

Game::Game( InputIfc* i, OutputIfc* o, CommandFactoryIfc* c, ModelIfc* m ) :
	isGameOver( false ), playerInput( i ), gameOutput( o ), commandFactory( c ), model( m )
{
}

Game::~Game(){}

void Game::start()
{
	gameOutput->tellPlayer( model->getWelcomeMsg() );
	do
	{
		std::string input = playerInput->getInput();
		PlayerCommandIfc* command = commandFactory->getCommand( input );
		command->action( gameOutput );
		if( command->isGameOver() )
			isGameOver = true;
		commandFactory->destroyCommand( command );
	}while( !isGameOver );
}
