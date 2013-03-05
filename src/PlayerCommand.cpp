#include "../include/PlayerCommand.h"

PlayerCommand::PlayerCommand( const eType& t ) : type( t )
{
}

PlayerCommand::~PlayerCommand()
{
}

std::string PlayerCommand::action()
{
	std::string result;
	switch( type )
	{
		case PlayerCommand::EXIT:
			result = "Goodbye.";
			break;
		case PlayerCommand::DESCRIBE:
			result = "You are alone in darkness.";
			break;
		case PlayerCommand::HELP:
			result = "exit, describe, help";
			break;
		case PlayerCommand::UNKNOWN:
			result = "You cannot do that yet.";
			break;
	}
	return result;
}
