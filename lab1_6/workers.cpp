#include "workers.h"
#include <iostream>
#include <string>

using namespace std;

Workers::Workers() {
	cout << "Defoult constructor Workers" << endl << endl;

	 fio = "kek";
	 post = "kek";
	 addres = "kek";
	 phone = "kek";
	 pay = 0;
}

Workers::Workers(const Workers & other) {
	cout << "Constructor for copy Workers" << endl << endl;
	*this = other;
}

Workers::~Workers() {
	cout << "Destructor Workers" << endl << endl;
}

void Workers::setVal() {
	cin >> *this;
}

Workers & Workers::operator=(const Workers & other) {
	this->fio = other.fio;
	this->post = other.post;
	this->addres = other.addres;
	this->phone = other.phone;
	this->pay = other.pay;
	return *this;
}

ofstream & operator<<(ofstream & fout, Workers & obj) {
	fout << obj.fio << " " << obj.post << " " << obj.addres << " " << obj.phone << " " << obj.pay << " " ;
	fout << endl;
	return fout;
}

ifstream & operator>>(ifstream & fin, Workers & obj) {
	fin >> obj.fio >> obj.post >> obj.addres >> obj.phone >> obj.pay;
	return fin;
}

ostream & operator<<(ostream & out, Workers & obj) {
	out << "FIO: " << obj.fio << endl;
	out << "Post: " << obj.post << endl;
	out << "Adress: " << obj.addres << endl;
	out << "Phone number: " << obj.phone << endl;
	out << "Pay: " << obj.pay << endl;
	out << "____________________________________________________________________________";
	return out;
}

istream & operator>>(istream & in, Workers & obj) {
	cout << "Input data" << endl << endl;
	cout << "FIO: ";
	cin >> obj.fio;
	cout << "Post: ";
	cin >> obj.post;
	cout << "Adress: ";
	cin >> obj.addres;
	cout << "Phone number: ";
	cin >> obj.phone;

	while (1) {
		cout << "Pay: ";
		cin >> obj.pay;
		if (cin.fail() || obj.pay < 0) {
			cout << "Wrong data,please,try again" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	return in;
}
