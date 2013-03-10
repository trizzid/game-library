#include "ExitCommand.h"
#include "OutputIfc.h"
#include "ModelIfc.h"

ExitCommand::ExitCommand() : Command( CommandIfc::EXIT ) {}
ExitCommand::~ExitCommand(){}

void ExitCommand::action( OutputIfc* out, ModelIfc* model )
{
	out->tellPlayer( model->getExitMsg() );
}

bool ExitCommand::isGameOver() const
{
	return true;
}
