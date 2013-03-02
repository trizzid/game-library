/*
 * PlayerCommand.h
 *
 *  Created on: 2 Mar 2013
 *      Author: trizzid
 */

#ifndef PLAYERCOMMAND_H_
#define PLAYERCOMMAND_H_

class PlayerCommand
{
public:
	enum eType { HELP = 0, DESCRIBE, EXIT, UNKNOWN };

	PlayerCommand();
	virtual ~PlayerCommand();
	eType type;
};


#endif /* PLAYERCOMMAND_H_ */
