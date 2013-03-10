#ifndef PLAYERCOMMANDIFC_H_
#define PLAYERCOMMANDIFC_H_

#include <string>
class OutputIfc;
class ModelIfc;

class CommandIfc
{
public:
	enum eType { UNKNOWN = 0, EXIT, SHOW, HELP };

	virtual ~CommandIfc() {}
	virtual void action( OutputIfc*, ModelIfc* ) = 0;
	virtual bool isGameOver() const = 0;
	virtual eType getType() const = 0;
};


#endif /* PLAYERCOMMANDIFC_H_ */
