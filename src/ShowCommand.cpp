#include "ShowCommand.h"
#include "OutputIfc.h"
#include "ModelIfc.h"

ShowCommand::ShowCommand() : Command( CommandIfc::SHOW ) {}
ShowCommand::~ShowCommand(){}

void ShowCommand::action( OutputIfc* out, ModelIfc* model )
{
	out->tellPlayer( model->getShowMsg() );
}
