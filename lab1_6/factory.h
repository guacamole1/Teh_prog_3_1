#pragma once
#include <fstream>
#include "factory.h"
#include "Keeper.h"

using namespace std;

class Factory {
public:
	Factory();
	virtual ~Factory();
	virtual void setVal() = 0;
};
