#pragma once
#include <fstream>
#include "keeper.h"
#include "factory.h"

using namespace std;

class Furniture : public Factory {
public:

private:
	string type;
	string color;
	string material;
	double hight;
	double weight;
	double deep;
	double cost;
public:
	Furniture();
	Furniture(const Furniture &other);
	~Furniture();
	void setVal() override;


	friend ofstream& operator << (ofstream &fout, Furniture& obj);
	friend ifstream& operator >> (ifstream &fin, Furniture& obj);

	friend ostream& operator << (ostream &out, Furniture& obj);
	friend istream& operator >> (istream &in, Furniture& obj);

	Furniture& operator =(const Furniture &other);
};