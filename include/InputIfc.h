#ifndef INPUTIFC_H_
#define INPUTIFC_H_

#include <string>

class PlayerCommand;

class InputIfc
{
public:
	virtual ~InputIfc() {}

	virtual PlayerCommand getPlayerCommand() = 0;
};


#endif /* INPUTIFC_H_ */
