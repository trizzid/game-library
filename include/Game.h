#ifndef GAME_H_
#define GAME_H_

#include "GameIfc.h"
#include <iostream>

class InputIfc;
class OutputIfc;
class CommandFactoryIfc;
class ModelIfc;

class Game : public GameIfc
{
public:
	Game( InputIfc*, OutputIfc*, CommandFactoryIfc*, ModelIfc* );
	virtual ~Game();
	void start();

	bool isGameOver;
	InputIfc* playerInput;
	OutputIfc* gameOutput;
	CommandFactoryIfc* commandFactory;
	ModelIfc* model;
};


#endif /* GAME_H_ */
