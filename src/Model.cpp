#include "Model.h"

Model::Model(){}

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
	return "You are alone in darkness.";
}
