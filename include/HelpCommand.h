#ifndef HELPCOMMAND_H_
#define HELPCOMMAND_H_

#include "PlayerCommandIfc.h"
#include "OutputIfc.h"

class HelpCommand : public PlayerCommandIfc
{
public:
	HelpCommand(){}
	virtual ~HelpCommand(){}
	void action( OutputIfc* out )
	{
		out->tellPlayer( "exit, describe, help" );
	}
};


#endif /* HELPCOMMAND_H_ */
