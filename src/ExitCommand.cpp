#include "ExitCommand.h"
#include "OutputIfc.h"

ExitCommand::ExitCommand() : Command( CommandIfc::EXIT ) {}
ExitCommand::~ExitCommand(){}

void ExitCommand::action( OutputIfc* out )
{
	out->tellPlayer( "Goodbye." );
}

bool ExitCommand::isGameOver() const
{
	return true;
}
