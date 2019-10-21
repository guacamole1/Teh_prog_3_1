#pragma once
#include <fstream>
#include "factory.h"
#include "keeper.h"

using namespace std;

class Workers : public Factory
{
public:
	Workers();
	Workers(const Workers&);
	~Workers();
	void setVal() override;
	friend ofstream& operator << (ofstream &fout, Workers& obj);
	friend ifstream& operator >> (ifstream &fin, Workers& obj);

	friend ostream& operator << (ostream &out, Workers& obj);
	friend istream& operator >> (istream &in, Workers& obj);
	Workers& operator =(const Workers &other);
private:
	string fio;
	string post;
	string addres;
	string phone;
	double pay;

};