#ifndef PLAYERCOMMAND_H_
#define PLAYERCOMMAND_H_

#include "Command.h"

class NullCommand : public Command
{
public:
	NullCommand();
	virtual ~NullCommand();
	void action( OutputIfc* out );
};


#endif /* PLAYERCOMMAND_H_ */
