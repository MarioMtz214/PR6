#pragma once

#include <iostream>
#include <windows.h>

class Ship {

private:
	//Ship
	std::string name;
	int distance;
	int speed;
	int nitro;
	int hp;
	int at;

public:
	//constructor
	Ship(std::string pName, int pDistance, int pSpeed, int pNitro, /*int pHp,*/ int pAt);

	//getters
	std::string getName();
	int getDistance();
	int getSpeed();
	int getNitro();
	//int getHp();
	int getAt();

	//setters
	void setName(std::string pName);
	void setDistance(int pDistance);
	void setSpeed(int pSpeed);
	void setNitro(int pNitro);
	//void setHp(int pHp);
	void setAt(int pAt);

	//METHODS
	void printStats();
	void calculateDistance();
	void tirarDado();
	void turdoPlayer();
	int attack();

};