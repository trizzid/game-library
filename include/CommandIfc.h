#ifndef PLAYERCOMMANDIFC_H_
#define PLAYERCOMMANDIFC_H_

#include <string>
class OutputIfc;

class CommandIfc
{
public:
	enum eType { UNKNOWN = 0, EXIT, SHOW, HELP };

	virtual ~CommandIfc() {}
	virtual void action( OutputIfc* ) = 0;
	virtual bool isGameOver() const = 0;
	virtual eType getType() const = 0;
};


#endif /* PLAYERCOMMANDIFC_H_ */
