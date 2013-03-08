#ifndef PLAYERCOMMANDIFC_H_
#define PLAYERCOMMANDIFC_H_

#include <string>
class OutputIfc;

class PlayerCommandIfc
{
public:
	virtual ~PlayerCommandIfc() {}
	virtual void action( OutputIfc* ) = 0;
	virtual bool isGameOver() { return false; }
};


#endif /* PLAYERCOMMANDIFC_H_ */
