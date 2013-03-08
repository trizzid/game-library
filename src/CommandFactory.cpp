#include "../include/CommandFactory.h"
#include "../include/PlayerCommand.h"

CommandFactory::CommandFactory(){}
CommandFactory::~CommandFactory(){}

PlayerCommandIfc* CommandFactory::getCommand( const std::string& s )
{
	if(s == "exit" )
		return new PlayerCommand( PlayerCommandIfc::EXIT );
	else if( s == "describe" )
		return new PlayerCommand( PlayerCommandIfc::DESCRIBE );
	else if ( s == "help" )
		return new PlayerCommand( PlayerCommandIfc::HELP );

	return new PlayerCommand( PlayerCommandIfc::UNKNOWN );
}
