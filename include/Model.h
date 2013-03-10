#ifndef MODEL_H_
#define MODEL_H_

#include "ModelIfc.h"

class Model : public ModelIfc
{
public:
	Model();
	~Model();
	std::string getWelcomeMsg();
	std::string getExitMsg();
	std::string getHelpMsg();
	std::string getShowMsg();

private:
	int state;
};


#endif /* MODEL_H_ */
