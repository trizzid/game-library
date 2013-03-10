#ifndef COMMAND_H_
#define COMMAND_H_

#include "CommandIfc.h"

class Command : public CommandIfc
{
public:
	bool isGameOver() const { return false; }
	eType getType() const { return type_; }

protected:
	Command( const eType& t) : type_( t ) {}
	virtual ~Command() {}

private:
	const eType type_;
};


#endif /* COMMAND_H_ */
