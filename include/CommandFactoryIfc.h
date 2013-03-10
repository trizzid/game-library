#ifndef COMMANDFACTORYIFC_H_
#define COMMANDFACTORYIFC_H_

#include <string>
class CommandIfc;

class CommandFactoryIfc
{
public:
	virtual ~CommandFactoryIfc(){}

	virtual CommandIfc* getCommand( const std::string& s ) = 0;
	virtual void destroyCommand( CommandIfc* c ) = 0;
};


#endif /* COMMANDFACTORYIFC_H_ */
