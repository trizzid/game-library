/*
 * PlayerCommandIfc.h
 *
 *  Created on: 5 Mar 2013
 *      Author: trizzid
 */

#ifndef PLAYERCOMMANDIFC_H_
#define PLAYERCOMMANDIFC_H_

#include <string>

class PlayerCommandIfc
{
public:
	enum eType { HELP = 0, DESCRIBE, EXIT, UNKNOWN };

	virtual ~PlayerCommandIfc() {}
	virtual std::string action() = 0;
};


#endif /* PLAYERCOMMANDIFC_H_ */
