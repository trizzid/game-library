#ifndef INPUTIFC_H_
#define INPUTIFC_H_

class PlayerCommandIfc;

class InputIfc
{
public:
	virtual ~InputIfc() {}

	virtual PlayerCommandIfc* getCommand() = 0;
};


#endif /* INPUTIFC_H_ */
