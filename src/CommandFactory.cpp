#include "../include/CommandFactory.h"
#include "../include/ExitCommand.h"
#include "../include/DescribeCommand.h"
#include "../include/HelpCommand.h"
#include "../include/NullCommand.h"

CommandFactory::CommandFactory(){}
CommandFactory::~CommandFactory(){}

PlayerCommandIfc* CommandFactory::getCommand( const std::string& s )
{
	if(s == "exit" )
		return new ExitCommand;
	else if( s == "describe" )
		return new DescribeCommand;
	else if ( s == "help" )
		return new HelpCommand;

	return new NullCommand;
}
