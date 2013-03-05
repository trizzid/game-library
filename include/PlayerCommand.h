/*
 * PlayerCommand.h
 *
 *  Created on: 2 Mar 2013
 *      Author: trizzid
 */

#ifndef PLAYERCOMMAND_H_
#define PLAYERCOMMAND_H_

#include "PlayerCommandIfc.h"

class PlayerCommand : public PlayerCommandIfc
{
public:
	PlayerCommand( const eType& type );
	virtual ~PlayerCommand();

	std::string action();

private:
	eType type;
};


#endif /* PLAYERCOMMAND_H_ */
