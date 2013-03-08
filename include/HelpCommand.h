#ifndef HELPCOMMAND_H_
#define HELPCOMMAND_H_

#include "PlayerCommandIfc.h"

class HelpCommand : public PlayerCommandIfc
{
public:
	HelpCommand(){}
	virtual ~HelpCommand(){}
	std::string action(){ return "exit, describe, help"; }
};


#endif /* HELPCOMMAND_H_ */
