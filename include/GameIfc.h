#ifndef GAMEIFC_H_
#define GAMEIFC_H_

#include <string>

class GameIfc
{
public:
	virtual ~GameIfc() {}
	virtual void start() = 0;
};


#endif /* GAMEIFC_H_ */
