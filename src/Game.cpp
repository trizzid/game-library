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
		PlayerCommand command = playerInput->getPlayerCommand();
		switch( command.type )
		{
			case PlayerCommand::EXIT:
				isGameOver = true;
				gameOutput->tellPlayer( "Goodbye." );
				break;
			case PlayerCommand::DESCRIBE:
				gameOutput->tellPlayer( "You are alone in darkness." );
				break;
			case PlayerCommand::HELP:
				gameOutput->tellPlayer( "exit, describe, help" );
				break;
			default:
				gameOutput->tellPlayer( "You cannot do that yet." );
				break;
		}
	}while( !isGameOver );
}
