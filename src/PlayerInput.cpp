#include "../include/PlayerInput.h"
#include <iostream>

PlayerInput::PlayerInput()
{
}

PlayerInput::~PlayerInput()
{
}

std::string PlayerInput::getPlayerCommand()
{
	std::string s;
	std::cin >> s;
	return s;
}
