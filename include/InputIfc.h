#ifndef INPUTIFC_H_
#define INPUTIFC_H_

#include <string>

class InputIfc
{
public:
	virtual ~InputIfc() {}

	virtual std::string getPlayerCommand() = 0;
};


#endif /* INPUTIFC_H_ */
