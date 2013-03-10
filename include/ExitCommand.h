#ifndef EXITCOMMAND_H_
#define EXITCOMMAND_H_

#include "Command.h"

class ExitCommand : public Command
{
public:
	ExitCommand();
	virtual ~ExitCommand();
	void action( OutputIfc* out, ModelIfc* model );
	bool isGameOver() const;
};


#endif /* EXITCOMMAND_H_ */
