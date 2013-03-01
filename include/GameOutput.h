/*
 * GameOutput.h
 *
 *  Created on: 28 Feb 2013
 *      Author: trizzid
 */

#ifndef GAMEOUTPUT_H_
#define GAMEOUTPUT_H_

#include "OutputIfc.h"
#include <iostream>

class GameOutput : public OutputIfc
{
public:
	GameOutput(){}
	~GameOutput(){}
	void tellPlayer( const std::string& s )
	{
		std::cout << s << std::endl;
	}
};


#endif /* GAMEOUTPUT_H_ */
