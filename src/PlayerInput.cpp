#include "../include/PlayerInput.h"
#include "../include/PlayerCommand.h"
#include <iostream>

PlayerInput::PlayerInput()
{
}

PlayerInput::~PlayerInput()
{
}

PlayerCommand PlayerInput::getPlayerCommand()
{
	std::string s;
	std::cin >> s;

	PlayerCommand command;
	if(s == "exit" )
		command.type = PlayerCommand::EXIT;
	else if( s == "describe" )
		command.type = PlayerCommand::DESCRIBE;
	else if ( s == "help" )
		command.type = PlayerCommand::HELP;

	return command;
}
