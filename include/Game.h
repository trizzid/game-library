#ifndef GAME_H_
#define GAME_H_

#include "GameIfc.h"
#include <iostream>

class InputIfc;
class OutputIfc;

class Game : public GameIfc
{
public:
	Game( InputIfc*, OutputIfc* );
	virtual ~Game();
	void start();

	bool isGameOver;
	InputIfc* playerInput;
	OutputIfc* gameOutput;
};


#endif /* GAME_H_ */
