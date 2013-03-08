#ifndef EXITCOMMAND_H_
#define EXITCOMMAND_H_

#include "PlayerCommandIfc.h"

class ExitCommand : public PlayerCommandIfc
{
public:
	ExitCommand(){}
	virtual ~ExitCommand(){}
	std::string action(){ return "Goodbye."; }
};


#endif /* EXITCOMMAND_H_ */
