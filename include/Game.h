#ifndef GAME_H_
#define GAME_H_

#include "GameIfc.h"
#include <iostream>

class InputIfc;
class OutputIfc;
class CommandFactoryIfc;

class Game : public GameIfc
{
public:
	Game( InputIfc*, OutputIfc*, CommandFactoryIfc* );
	virtual ~Game();
	void start();

	bool isGameOver;
	InputIfc* playerInput;
	OutputIfc* gameOutput;
	CommandFactoryIfc* commandFactory;
};


#endif /* GAME_H_ */
