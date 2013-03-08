#ifndef PLAYERCOMMAND_H_
#define PLAYERCOMMAND_H_

#include "PlayerCommandIfc.h"

class NullCommand : public PlayerCommandIfc
{
public:
	NullCommand(){}
	virtual ~NullCommand(){}

	std::string action() { return "You cannot do that yet."; }
};


#endif /* PLAYERCOMMAND_H_ */
