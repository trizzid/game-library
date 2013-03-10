#ifndef DESCRIBECOMMAND_H_
#define DESCRIBECOMMAND_H_

#include "Command.h"

class ShowCommand : public Command
{
public:
	ShowCommand();
	virtual ~ShowCommand();
	void action( OutputIfc* out );
};


#endif /* DESCRIBECOMMAND_H_ */
