/*
 * CommandFactoryIfc.h
 *
 *  Created on: 8 Mar 2013
 *      Author: trizzid
 */

#ifndef COMMANDFACTORYIFC_H_
#define COMMANDFACTORYIFC_H_

#include <string>
class PlayerCommandIfc;

class CommandFactoryIfc
{
public:
	virtual ~CommandFactoryIfc(){}

	virtual PlayerCommandIfc* getCommand( const std::string& s ) = 0;
};


#endif /* COMMANDFACTORYIFC_H_ */
