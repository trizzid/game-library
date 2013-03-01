#include "../include/Game.h"
#include "../include/InputIfc.h"
#include "../include/OutputIfc.h"

Game::Game( InputIfc* i, OutputIfc* o ) : isGameOver( false ), playerInput( i ), gameOutput( o )
{
}

Game::~Game(){}

void Game::start()
{
	gameOutput->tellPlayer( "Welcome..\nEnter 'exit' to end the game.\n" );
	do
	{
		std::string playersCommand = playerInput->getPlayerCommand();
		if( playersCommand == "exit" )
		{
			isGameOver = true;
			gameOutput->tellPlayer( "Goodbye." );
		}
		else if( playersCommand == "describe" )
		{
			gameOutput->tellPlayer( "You are alone in darkness." );
		}
		else if ( playersCommand == "help" )
		{
			gameOutput->tellPlayer( "exit, describe, help" );
		}
		else
		{
			gameOutput->tellPlayer( "You cannot do that yet." );
		}
	}while( !isGameOver );
}
