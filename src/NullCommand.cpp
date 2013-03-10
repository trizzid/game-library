#include "NullCommand.h"
#include "OutputIfc.h"

NullCommand::NullCommand() : Command( CommandIfc::UNKNOWN ) {}
NullCommand::~NullCommand(){}

void NullCommand::action( OutputIfc* out, ModelIfc* model )
{
	out->tellPlayer( "You cannot do that yet." );
}
