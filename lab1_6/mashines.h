#pragma once
#include <fstream>
#include "factory.h"
#include "keeper.h"

using namespace std;

class Mashines : public Factory {
public:
	Mashines();
	Mashines(const Mashines&);
	~Mashines();
	void setVal() override;

	friend ofstream& operator << (ofstream &fout, Mashines& obj);
	friend ifstream& operator >> (ifstream &fin, Mashines& obj);

	friend ostream& operator << (ostream &out, Mashines& obj);
	friend istream& operator >> (istream &in, Mashines& obj);
	Mashines& operator =(const Mashines &other);
private:
	string marka;
	string model;
	string state_number;
};