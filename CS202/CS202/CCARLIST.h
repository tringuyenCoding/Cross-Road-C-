#pragma once
#include "Light.h"
#include "CCAR.h"
#include <deque>
#include <random>
enum CARTYPE { car1, car, truck, truck1, LASTTYPE }; // LASTTYPE is to determine the number of cartypes.

enum CARDIR { TOLEFT, TORIGHT, LASTDIR }; // LASTDIR is to determine the number of CARDIR

class CCARLIST {
private:
	deque<COBJECT*> carlist;
	CARTYPE type;
	CARDIR dir;
	bool playing;
public:
	
	
};
