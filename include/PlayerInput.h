#ifndef PLAYERINPUT_H_
#define PLAYERINPUT_H_

#include "InputIfc.h"

class PlayerInput : public InputIfc
{
public:
	PlayerInput();
	~PlayerInput();
	std::string getInput();
};


#endif /* PLAYERINPUT_H_ */
