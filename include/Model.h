#ifndef MODEL_H_
#define MODEL_H_

#include "ModelIfc.h"

class Model : public ModelIfc
{
public:
	Model(){}
	~Model(){}
	std::string getWelcomeMsg(){ return "Welcome..\nEnter 'exit' to end the game.\n"; }
};


#endif /* MODEL_H_ */
