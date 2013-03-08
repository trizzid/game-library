#ifndef DESCRIBECOMMAND_H_
#define DESCRIBECOMMAND_H_

#include "PlayerCommandIfc.h"

class DescribeCommand : public PlayerCommandIfc
{
public:
	DescribeCommand(){}
	virtual ~DescribeCommand(){}

	std::string action(){ return "You are alone in darkness."; }
};


#endif /* DESCRIBECOMMAND_H_ */
