#ifndef DESCRIBECOMMAND_H_
#define DESCRIBECOMMAND_H_

#include "PlayerCommandIfc.h"
#include "OutputIfc.h"

class DescribeCommand : public PlayerCommandIfc
{
public:
	DescribeCommand(){}
	virtual ~DescribeCommand(){}
	void action( OutputIfc* out )
	{
		out->tellPlayer( "You are alone in darkness." );
	}
};


#endif /* DESCRIBECOMMAND_H_ */
