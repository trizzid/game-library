#include "../include/Game.h"
#include "../include/InputIfc.h"
#include "../include/OutputIfc.h"
#include "../include/CommandFactoryIfc.h"
#include "../include/PlayerCommandIfc.h"

Game::Game( InputIfc* i, OutputIfc* o, CommandFactoryIfc* c ) :
	isGameOver( false ), playerInput( i ), gameOutput( o ), commandFactory( c )
{
}

Game::~Game(){}

void Game::start()
{
	gameOutput->tellPlayer( "Welcome..\nEnter 'exit' to end the game.\n" );
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
