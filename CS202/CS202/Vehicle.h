#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>

using namespace std;

class CVEHICLE {
private:
	int mX, mY;
	int speed;
public:
	virtual void move();
	virtual void draw(sf::RenderWindow& window);
	CVEHICLE();
	CVEHICLE(int x, int y, int sp);
	int getmX();
	int getmY();
	int getspeed();
};

class CCar :public CVEHICLE {
private:
public:
	CCar(int x, int y, int sp);
	void draw(sf::RenderWindow& window);
	void move();
};

class CTruck :public CVEHICLE {
private:
public:
	CTruck(int x, int y, int sp);
	void draw(sf::RenderWindow& window);
	void move();
};

class CANIMAL {
private:
	int mX, mY;
	int speed;
public:
	virtual void move();
	virtual void draw(sf::RenderWindow& window);
	virtual void tell(sf::SoundBuffer& Buffer, sf::Sound& S);
	
	CANIMAL();
	CANIMAL(int x, int y, int sp);
	int getmX();
	int getmY();
	int getspeed();
};

class CBIRD :public CANIMAL {
private:
public:
	void draw(sf::RenderWindow& window);
	void move();
	void tell(sf::SoundBuffer& Buffer, sf::Sound& S);
};

class CDINO :public CANIMAL {
private:
public:
	void draw(sf::RenderWindow& window);
	void move();
	void tell(sf::SoundBuffer& Buffer, sf::Sound& S);
	
};