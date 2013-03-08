#ifndef EXITCOMMAND_H_
#define EXITCOMMAND_H_

#include "PlayerCommandIfc.h"
#include "OutputIfc.h"

class ExitCommand : public PlayerCommandIfc
{
public:
	ExitCommand(){}
	virtual ~ExitCommand(){}
	void action( OutputIfc* out )
	{
		out->tellPlayer( "Goodbye." );
	}
	virtual bool isGameOver() { return true; }
};


#endif /* EXITCOMMAND_H_ */
