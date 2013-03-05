#include "../include/PlayerInput.h"
#include "../include/PlayerCommand.h"
#include <iostream>

PlayerInput::PlayerInput()
{
}

PlayerInput::~PlayerInput()
{
}

PlayerCommandIfc* PlayerInput::getCommand()
{
	std::string s;
	std::cin >> s;

	PlayerCommand* command;
	if(s == "exit" )
		command = new PlayerCommand( PlayerCommandIfc::EXIT );
	else if( s == "describe" )
		command = new PlayerCommand( PlayerCommandIfc::DESCRIBE );
	else if ( s == "help" )
		command = new PlayerCommand( PlayerCommandIfc::HELP );
	else
		command = new PlayerCommand( PlayerCommandIfc::UNKNOWN );

	return command;
}
