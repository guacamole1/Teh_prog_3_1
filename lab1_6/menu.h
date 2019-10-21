#pragma once

#include "keeper.h"
#include "factory.h"
#include "furniture.h"
#include "mashines.h"
#include "workers.h"
#include <iostream>

using namespace std;

template <typename T>
void menu(T &obj, string line) {
	int c;
	int i;
	bool flag = true;

	while (flag) {
		system("cls");
		cout << "Select operation:  " << endl << endl;
		cout << "1 - Add object" << endl;
		cout << "2 - Delete object" << endl;
		cout << "3 - Print object" << endl;
		cout << "4 - Edit data" << endl;
		cout << "5 - Save in file" << endl;
		cout << "6 - Recover from file  " << endl;
		cout << "7 - Exit to the menu" << endl << endl;
		cout << "Select operation: ";
		cin >> c;
		if (cin.fail() || c < 0 || c > 7) {
			c = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		system("cls");
		switch (c) {
		case 1:
			obj.push(); 
			system("pause");
			break;
		case 2: obj.display(); 
			cout << "Which el need to delite: "; 
			cin >> i;
			obj.pop(i);
			system("pause"); break;
		case 3: 
			obj.display();
			system("pause");
			break;
		case 4: 
			obj.display();
			cout << "Which el need to edit: ";
			cin >> i;
			obj.edit(i);
			system("pause");
			break;
		case 5: 
			obj.writef(line);
			system("pause"); 
			break;
		case 6: 
			obj.readf(line);
			system("pause"); 
			break;
		case 7:
			flag = false; 
			break;
		default:
			cout << "Please, enter a number from 1 to 7:" << endl << endl;
			system("pause"); break;
		}
	}
}