#include "furniture.h"
#include <iostream>
#include <string>

using namespace std;

Furniture::Furniture() {
	cout << "Defoult constructor Furniture" << endl << endl;

	type = "kek";
	color = "kek";
	material = "kek";
	cost = 0;
	hight = 0;
	weight = 0;
	deep = 0;
}

Furniture::Furniture(const Furniture & obj2) {
	cout << "Constructor for copy Furniture" << endl << endl;
	*this = obj2;
}

Furniture::~Furniture() {
	cout << "Destructor Furniture" << endl << endl;
}

void Furniture::setVal() {
	cin >> *this;
}

Furniture & Furniture::operator=(const Furniture & other) {
	this->type = other.type;
	this->color = other.color;
	this->material = other.material;
	this->cost = other.cost;
	this->hight = other.hight;
	this->weight = other.weight;
	this->deep = other.deep;
	return *this;
}

ofstream & operator<<(ofstream & fout, Furniture & el) {
	fout << el.type << " " << endl;
	fout << el.color << " " << endl;
	fout << el.material << " " << endl;
	fout << el.cost << " " << endl;
	fout << el.hight << " " << endl;
	fout << el.weight << " " << endl;
	fout << el.deep << " " << endl;
	fout << endl;
	return fout;
}

ifstream & operator>>(ifstream & fin, Furniture & el) {
	fin >> el.type >> el.color >> el.material >> el.cost >> el.hight >> el.weight >> el.deep;
	return fin;
}

ostream & operator<<(ostream & out, Furniture & el) {
	out << "Type: " << el.type << endl;
	out << "Color: " << el.color << endl;
	out << "Material: " << el.material << endl;
	out << "Cost: " << el.cost << endl;
	out << "Hight: " << el.hight << endl;
	out << "Width: " << el.weight << endl;
	out << "Deep: " << el.deep << endl;
	out << "____________________________________________________________________________";
	return out;
}

istream & operator>>(istream & in, Furniture & el) {
	cout << "Input data:" << endl << endl;
	cout << "Type: ";
	cin >> el.type;
	cout << "Color: ";
	cin >> el.color;
	cout << "Material: ";
	cin >> el.material;

	while (1) {
		cout << "Cost: ";
		cin >> el.cost;
		if (cin.fail() || el.cost < 0) {
			cout << "Wrong data,please,try again:" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "Hight: ";
		cin >> el.hight;
		if (cin.fail() || el.hight < 0) {
			cout << "Wrong data,please,try again:" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "Width: ";
		cin >> el.weight;
		if (cin.fail() || el.weight < 0) {
			cout << "Wrong data,please,try again:" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "Deep: ";
		cin >> el.deep;
		if (cin.fail() || el.deep < 0) {
			cout << "Wrong data,please,try again:" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	return in;
}
