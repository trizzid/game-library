#ifndef OUTPUTIFC_H_
#define OUTPUTIFC_H_

#include <string>

class OutputIfc
{
public:
	virtual ~OutputIfc() {}
	virtual void tellPlayer( const std::string& s ) = 0;
};


#endif /* OUTPUTIFC_H_ */
