#include "Model.h"

Model::Model() : state( 0 ) {}

Model::~Model(){}

std::string Model::getWelcomeMsg()
{
	return "Welcome..\nEnter 'exit' to end the game.\n";
}

std::string Model::getExitMsg()
{
	return "Goodbye.";
}

std::string Model::getHelpMsg()
{
	return "exit, show, help";
}

std::string Model::getShowMsg()
{
	std::string s;
	if ( state == 0 )
		s = "You are alone in darkness.";
	else
		s = "You are still alone and it's still dark.";

	state++;
	return s;
}
