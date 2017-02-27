#pragma once
//Coin Class Specification File

#include <string>
#ifndef COIN_H
#define COIN_H

//Coin class declaration
class Coin
{
private:
	std::string sideUp;

public:
	Coin();
	std::string getSideUp();
	void toss();
};
#endif COIN_H