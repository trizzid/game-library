#ifndef HELPCOMMAND_H_
#define HELPCOMMAND_H_

#include "Command.h"

class HelpCommand : public Command
{
public:
	HelpCommand();
	virtual ~HelpCommand();
	void action( OutputIfc* out, ModelIfc* model );
};


#endif /* HELPCOMMAND_H_ */
