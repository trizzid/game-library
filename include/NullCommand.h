#ifndef PLAYERCOMMAND_H_
#define PLAYERCOMMAND_H_

#include "PlayerCommandIfc.h"
#include "OutputIfc.h"

class NullCommand : public PlayerCommandIfc
{
public:
	NullCommand(){}
	virtual ~NullCommand(){}
	void action( OutputIfc* out )
	{
		out->tellPlayer( "You cannot do that yet." );
	}
};


#endif /* PLAYERCOMMAND_H_ */
