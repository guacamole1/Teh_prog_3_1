#include "keeper.h"
#include "factory.h"
#include "furniture.h"
#include "mashines.h"
#include "menu.h"
#include "workers.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	Keeper <Furniture> furniture;
	Keeper <Mashines> mashines;
	Keeper <Workers> workers;


	int button;
	bool flag = true;
	while (flag) {
		system("cls");
		cout << "Menu: " << endl << endl;
		cout << "1 - Furniture" << endl;
		cout << "2 - Mashine" << endl;
		cout << "3 - Workers" << endl;
		cout << "4 - Exit from the program" << endl << endl;
		cout << "Select operation: ";
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}

		switch (button) {
		case 1: 
			menu(furniture, "furniture");
			break;
		case 2:
			menu(mashines, "mashines");
			break;
		case 3:
			menu(workers, "workers");
			break;
		case 4: 
			flag = false;
			cout << "\n THE END" << endl;
			break;
		default: 
			cout << endl << "Wrong data, try again!" << endl << endl;
			system("pause");
			break;
		}
	}
	return 0;
}