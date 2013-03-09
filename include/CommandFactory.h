
#ifndef COMMANDFACTORY_H_
#define COMMANDFACTORY_H_

#include "CommandFactoryIfc.h"

class CommandFactory : public CommandFactoryIfc
{
public:
	CommandFactory();
	virtual ~CommandFactory();
	PlayerCommandIfc* getCommand( const std::string& s );
	void destroyCommand( PlayerCommandIfc* c );
};

#endif /* COMMANDFACTORY_H_ */
