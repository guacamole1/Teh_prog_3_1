#pragma once
#include <iostream>
#include <string>
#include <exception>

using namespace std;

template <class T>
class Keeper {
	T *ptr;						
	int size;					
public:
	Keeper();
	~Keeper();

	void push();				
	void pop(int);				

	void writef(string);		
	void readf(string);		

	void display();				
	void edit(int);			
};

template<class T>
Keeper<T>::Keeper() {
	cout << "Default constructor Keeper" << endl << endl;
	ptr = nullptr;
	size = 0;
}

template<class T>
Keeper<T>::~Keeper() {
	cout << "Destructor Keeper" << endl << endl;
	delete[] ptr;
}

template<class T>
void Keeper<T>::push() {
	T *tmp = new T[size + 1];			
	for (int i = 0; i < size; ++i) {	
		tmp[i] = ptr[i];
	}

	delete[] ptr;						
	ptr = tmp;							
	cin >> ptr[size];				
	++size;								
	cout << endl << endl << "New el add successfull" << endl << endl;
}

template<class T>
void Keeper<T>::pop(int num) {
	try {
		if (size == 0) {						
			exception err("EMPTY");
			throw err;
		}
		if (num < 0 || num >= size) {				
			exception ex("Wrong number");
			throw ex;
		}

		T *tmp = new T[size - 1];				
		ptr[num] = ptr[size - 1];				
		for (int i = 0; i < size - 1; ++i) {	
			tmp[i] = ptr[i];
		}
		delete[] ptr;							
		ptr = tmp;								
		--size;									
		cout << endl << endl << "El is add successfull" << endl << endl;
	}
	catch (exception &err) {
		cout << err.what() << endl << endl;		
	}
}

template<class T>
void Keeper<T>::display() {

	if (size == 0) {							
		cout << "EMPTY" << endl << endl;
	}
	else {
		for (int i = 0; i < size; ++i) {		
			cout << ptr[i] << endl;
		}
	}
}

template<class T>
void Keeper<T>::edit(int id) {
	try {
		if (size == 0) {						
			exception ex("EMPTY");
			throw ex;
		}
		if (id < 0 || id >= size) {				
			exception ex("Wrong number");
			throw ex;
		}
		cin >> ptr[id];							
	}
	catch (exception &ex) {
		cout << ex.what() << endl << endl;		
	}
}

	template<class T>
	void Keeper<T>::writef(string s) {
		ofstream fout(s, ios::out);

		try {
			if (size == 0) {
				exception ex("EMPTY");
				throw ex;
			}

			fout << size << endl;						
			for (int i = 0; i < size; ++i) {			
				fout << ptr[i] << endl;
			}
			fout.close();

			cout << "Record is successfull" << endl << endl;
		}
		catch (exception &ex) {
			cout << ex.what() << endl;
		}


	}

	template<class T>
	void Keeper<T>::readf(string s) {
		delete[] ptr;							

		ifstream fin(s, ios::in);

		fin >> size;								
		ptr = new T[size];							

		for (int i = 0; i < size; ++i) {			
			fin >> ptr[i];
		}

		fin.close();

		cout << "Read is successfull" << endl << endl;
	}


