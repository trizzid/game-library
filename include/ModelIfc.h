#ifndef MODELIFC_H_
#define MODELIFC_H_

#include <string>

class ModelIfc
{
public:
	virtual ~ModelIfc(){}
	virtual std::string getWelcomeMsg() = 0;
	virtual std::string getExitMsg() = 0;
	virtual std::string getHelpMsg() = 0;
	virtual std::string getShowMsg() = 0;
};


#endif /* MODELIFC_H_ */
