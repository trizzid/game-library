#ifndef COMMANDFACTORY_H_
#define COMMANDFACTORY_H_

#include "CommandFactoryIfc.h"

class CommandFactory : public CommandFactoryIfc
{
public:
	CommandFactory();
	virtual ~CommandFactory();
	CommandIfc* getCommand( const std::string& s );
	void destroyCommand( CommandIfc* c );
};

#endif /* COMMANDFACTORY_H_ */
