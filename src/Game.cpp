#include "../include/Game.h"
#include "../include/InputIfc.h"
#include "../include/OutputIfc.h"
#include "../include/PlayerCommand.h"
#include "../include/CommandFactoryIfc.h"

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

		std::string result = command->action();
		if( result == "Goodbye." )
			isGameOver = true;
		gameOutput->tellPlayer( result );
		delete command;
	}while( !isGameOver );
}
