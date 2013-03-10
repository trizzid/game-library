#include "HelpCommand.h"
#include "OutputIfc.h"

HelpCommand::HelpCommand() : Command( CommandIfc::HELP ) {}
HelpCommand::~HelpCommand(){}

void HelpCommand::action( OutputIfc* out )
{
	out->tellPlayer( "exit, describe, help" );
}
