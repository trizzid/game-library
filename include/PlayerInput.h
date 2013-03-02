#ifndef PLAYERINPUT_H_
#define PLAYERINPUT_H_

#include "InputIfc.h"

class PlayerInput : public InputIfc
{
public:
	PlayerInput();
	~PlayerInput();
	PlayerCommand getPlayerCommand();
};


#endif /* PLAYERINPUT_H_ */
