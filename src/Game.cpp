#include "Game.h"
#include "InputIfc.h"
#include "OutputIfc.h"
#include "CommandFactoryIfc.h"
#include "CommandIfc.h"
#include "ModelIfc.h"

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
		CommandIfc* command = commandFactory->getCommand( input );
		command->action( gameOutput );
		if( command->isGameOver() )
			isGameOver = true;
		commandFactory->destroyCommand( command );
	}while( !isGameOver );
}
