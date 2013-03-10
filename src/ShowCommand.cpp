#include "ShowCommand.h"
#include "OutputIfc.h"

ShowCommand::ShowCommand() : Command( CommandIfc::SHOW ) {}
ShowCommand::~ShowCommand(){}

void ShowCommand::action( OutputIfc* out )
{
	out->tellPlayer( "You are alone in darkness." );
}
