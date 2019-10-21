#include "mashines.h"
#include <iostream>
#include <string>

using namespace std;

Mashines::Mashines() {
	cout << "Defoult constructor Mashines" << endl << endl;

	marka = "kek";
	model = "kek";
	state_number = "kek";
}

Mashines::Mashines(const Mashines & other) {
	cout << "Constructor for copy Mashines" << endl << endl;
	*this = other;
}

Mashines::~Mashines() {
	cout << "Destructor Mashines" << endl << endl;
}

void Mashines::setVal() {
	cin >> *this;
}
Mashines & Mashines::operator=(const Mashines & other) {
	this->marka = other.marka;
	this->model = other.model;
	this->state_number = other.state_number;
	return *this;
}

ofstream & operator<<(ofstream & fout, Mashines & obj) {
	fout << obj.marka << " " << obj.model << " " << obj.state_number << " ";
	fout << endl;
	return fout;
}

ifstream & operator>>(ifstream & fin, Mashines & obj) {
	fin >> obj.marka >> obj.model >> obj.state_number;
	return fin;
}

ostream & operator<<(ostream & out, Mashines & obj) {
	out << "Marka: " << obj.marka << endl;
	out << "Model: " << obj.model << endl;
	out << "State_number: " << obj.state_number << endl;
	out << "____________________________________________________________________________";
	return out;
}

istream & operator>>(istream & in, Mashines & obj) {
	cout << "Input data:" << endl << endl;
	cout << "Marka: ";
	cin >> obj.marka;
	cout << "Model: ";
	cin >> obj.model;
	cout << "State_number: ";
	cin >> obj.state_number;

	return in;
}
