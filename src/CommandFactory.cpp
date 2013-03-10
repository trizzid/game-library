#include "CommandFactory.h"
#include "ExitCommand.h"
#include "ShowCommand.h"
#include "HelpCommand.h"
#include "NullCommand.h"

CommandFactory::CommandFactory(){}
CommandFactory::~CommandFactory(){}

CommandIfc* CommandFactory::getCommand( const std::string& s )
{
	if(s == "exit" )
		return new ExitCommand;
	else if( s == "show" )
		return new ShowCommand;
	else if ( s == "help" )
		return new HelpCommand;

	return new NullCommand;
}

void CommandFactory::destroyCommand( CommandIfc* c )
{
	delete c;
}
