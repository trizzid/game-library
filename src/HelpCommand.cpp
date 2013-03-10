#include "HelpCommand.h"
#include "OutputIfc.h"
#include "ModelIfc.h"

HelpCommand::HelpCommand() : Command( CommandIfc::HELP ) {}
HelpCommand::~HelpCommand(){}

void HelpCommand::action( OutputIfc* out, ModelIfc* model )
{
	out->tellPlayer( model->getHelpMsg() );
}
