#include "../include/Game.h"
#include "../include/InputIfc.h"
#include "../include/OutputIfc.h"
#include "../include/PlayerCommand.h"

Game::Game( InputIfc* i, OutputIfc* o ) : isGameOver( false ), playerInput( i ), gameOutput( o )
{
}

Game::~Game(){}

void Game::start()
{
	gameOutput->tellPlayer( "Welcome..\nEnter 'exit' to end the game.\n" );
	do
	{
		PlayerCommandIfc* command = playerInput->getCommand();
		std::string result = command->action();
		if( result == "Goodbye." )
			isGameOver = true;
		gameOutput->tellPlayer( result );
		delete command;
	}while( !isGameOver );
}
