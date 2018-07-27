
// ExitDeanRpg.cpp : Defines the entry point for the console application.
//display menu
// enter your name
// cout story
// cout choices
// cint choices
// cout story
// pick up
//have 13 zombies 8 you fight 5 you get away from 
//inventory
// classes(3){weapons,player,enemy}



#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void Initialize(const string* container[], int capacity);
bool isFull(const string* const container[], int capacity);
bool isEmpty(const string* const container[], int capacity);
bool Contains(const string* const pItem, const string* container[], int capacity);
void Display(const string* const container[], int capacity);
void Add(const string* const pItem, const string* container[], int capacity);
void Remove(const string* const pItem, const string* container[], int capacity);
void welcome();
int m2();
int m1();
int m();
int m3();
int m4();
int m5();
int m6();
int m7();
int m8();
int m9();
void checkInput();

vector<string> items;
bool isRunning = true;
void quit();
string name;
string Enter;
void Resume();
int Choice;
char Choices;
void EnterYourName();
void MainMenuChoice(int number);
void GameChoice(char character);
void GetInput();
void Getinput();
void dialogPart1();
void dialogPart2();
void dialogPart3();
void dialogPart4();
void dialogPart5();
void dialogPart6();
void dialogPart7();
void dialogPart8();
void dialogPart8a();
void dialogPart9();
void dialogPart9a();
void dialogPart10();
void dialogPart10a();
void dialogPart10b();
void ZombieBattle1();
void ZombieBattle2();
bool HasKey = false;
int RandomNumber();


int ShowEnemyHP(int enemyhp, int attack);
int ShowHP(int hp, int enemyattack);
int ShowEnemyHP2(int enemyhp, int attack);
int ShowHP2(int hp, int enemyattack);


int choose();
int Choose2();
int Choose3();
int Choose4();
int Choose5();


class Player
{
public:
	Player();
	int m_Health;
	int m_Attack;

};
Player::Player() {
	m_Health = 200;
	m_Attack = 25;
}
Player playerOne;
class Enemy
{
public:
	Enemy();
	int m_Health;
	int m_Attack;

};
Enemy::Enemy() {
	m_Health = 100;
	m_Attack = 5;
}
Enemy EnemyOne;
class Pistol
{
public:
	Pistol();
	int m_Ammo;
};
Pistol::Pistol() {
	m_Ammo = 20;
}
Pistol pistolOne;
class Axe
{
public:
	Axe();
	int m_blows;

};
Axe::Axe()
{
	m_blows = 5;
}
Axe AxeOne;


int main()
{

	while (isRunning == true)
	{

		welcome();
		//Resume();
		system("cls");
		dialogPart1();
		choose();
		m();
		system("pause");
		system("cls");
		dialogPart2();
		Choose2();
		m1();
		system("pause");
		system("cls");
		dialogPart3();
		ZombieBattle1();
		system("pause");
		system("cls");
		dialogPart4();
		m2();
		system("pause");
		system("cls");
		dialogPart5();

		Choose3();
		m3();
		system("pause");
		system("cls");
		dialogPart6();
		Choose4();
		system("pause");
		ZombieBattle2();
		system("pause");
		system("cls");
		dialogPart7();
		m7();
		Choose5();
		system("pause");
		m8();
		system("cls");
		dialogPart8();
		m9();
		system("cls");
		dialogPart8a();
		ZombieBattle2();
		system("pause");
		system("cls");
		dialogPart9();
		ZombieBattle2();
		system("pause");
		system("cls");
		dialogPart9a();
		ZombieBattle2();
		system("pause");
		system("cls");
		dialogPart10();
		system("pause");
		m6();
		system("pause");
		system("cls");
		dialogPart10a();
		system("pause");
		ZombieBattle2();
		system("pause");
		system("cls");
		dialogPart10b();
	}

	return 0;
}
int m() {
	cout << "\t Welcome To Your Inventory " << endl;
	const int NUM_ITEMS = 1;
	const string items[NUM_ITEMS] = {

		"Key"

	};

	const int INVENTORY_CAPACITY = 1;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list " << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			//cout << "Good-bye." << endl;
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m1() {


	const int NUM_ITEMS = 1;
	const string items[NUM_ITEMS] = {
		"Axe",


	};

	const int INVENTORY_CAPACITY = 2;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list " << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Items:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m2() {

	const int NUM_ITEMS = 2;
	const string items[NUM_ITEMS] = {
		"Axe",
		"Pistol",



	};

	const int INVENTORY_CAPACITY = 2;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list" << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m3() {


	const int NUM_ITEMS = 3;
	const string items[NUM_ITEMS] = {
		"Axe",
		"Pistol",
		"microphone"


	};

	const int INVENTORY_CAPACITY = 2;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list" << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*	cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m8() {


	const int NUM_ITEMS = 3;
	const string items[NUM_ITEMS] = {

		"Pistol",
		"microphone",
		"key"


	};

	const int INVENTORY_CAPACITY = 2;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list " << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*	cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m7() {


	const int NUM_ITEMS = 3;
	const string items[NUM_ITEMS] = {
		"key",
		"Pistol",
		"microphone"


	};

	const int INVENTORY_CAPACITY = 2;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list " << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*	cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m4() {


	const int NUM_ITEMS = 4;
	const string items[NUM_ITEMS] = {
		"Axe",
		"Pistol",
		"microphone",
		"key"


	};

	const int INVENTORY_CAPACITY = 3;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Intems list " << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m5() {

	const int NUM_ITEMS = 5;
	const string items[NUM_ITEMS] = {
		"Headset",
		"Pistol",
		"Key",
		"microphone",
		"ammo"

	};

	const int INVENTORY_CAPACITY = 4;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list " << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*	cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m9() {

	const int NUM_ITEMS = 4;
	const string items[NUM_ITEMS] = {
		"Axe",
		"Pistol",
		"Headset",
		"microphone"

	};

	const int INVENTORY_CAPACITY = 4;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list" << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}
int m6() {

	const int NUM_ITEMS = 4;
	const string items[NUM_ITEMS] = {

		"Pistol",
		"headset",
		"microphone",
		"transmitter"

	};

	const int INVENTORY_CAPACITY = 4;
	const string* inventory[INVENTORY_CAPACITY];
	Initialize(inventory, INVENTORY_CAPACITY);

	int choice;
	int itemNumber;

	do {
		cout << endl << "  Items list" << endl;
		cout << "----------------" << endl << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Display items in the inventory";
		cout << endl;
		cout << "2 - Add an item to the inventory";
		cout << endl;
		cout << "3 - Remove an item from the inventory";
		cout << endl;
		cout << endl << "Choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			/*cout << "Good-bye." << endl;*/
			break;

		case 1:
			cout << "Item:" << endl;
			Display(inventory, INVENTORY_CAPACITY);
			break;

		case 2:
			for (int i = 0; i < NUM_ITEMS; ++i) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to add: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Add(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		case 3:
			for (int i = 0; i < NUM_ITEMS; i++) {
				cout << i << " - " << items[i] << endl;
			}

			do {
				cout << "Enter the number of the item to remove: ";
				cin >> itemNumber;
			} while (itemNumber < 0 || itemNumber >= NUM_ITEMS);

			Remove(&items[itemNumber], inventory, INVENTORY_CAPACITY);
			break;

		default:
			cout << "Sorry, " << choice;
			cout << " isn't a valid choice." << endl;
		}
	} while (choice != 0);

	return 0;
}


void Initialize(const string* container[], int capacity) {
	for (int i = 0; i < capacity; i++) {
		container[i] = NULL;
	}
}

bool isFull(const string* const container[], int capacity) {
	bool full = true;
	int i = 0;
	while (full && i < capacity) {
		if (container[i] == NULL) {
			full = false;
		}
		++i;
	}
	return full;
}

bool isEmpty(const string* const container[], int capacity) {
	bool empty = true;
	int i = 0;

	while (empty && i < capacity) {
		if (container[i] != NULL) {
			empty = false;
		}

		++i;
	}

	return empty;
}

bool Contains(const string* const pItem, const string* container[], int capacity) {
	bool has = false;
	int i = 0;

	while (!has && i < capacity) {
		if (container[i] == pItem) {
			has = true;
		}

		++i;
	}

	return has;
}

void Display(const string* const container[], int capacity) {
	if (isEmpty(container, capacity)) {
		cout << "<Empty>" << endl;
		return;
	}

	for (int i = 0; i < capacity; ++i) {
		if (container[i] != NULL) {
			cout << *(container[i]) << endl;
		}
	}
}

void Add(const string* const pItem, const string* container[], int capacity) {
	if (pItem == NULL) {
		return;
	}

	if (Contains(pItem, container, capacity)) {
		cout << "Item already present. Can't add.";
		cout << endl;
		return;
	}

	if (isFull(container, capacity)) {
		cout << "Container full. Can't add." << endl;
		return;
	}

	bool found = false;
	int i = 0;

	while (!found && i < capacity) {
		if (container[i] == NULL) {
			container[i] = pItem;
			found = true;
		}

		++i;
	}
}

void Remove(const string* const pItem, const string* container[], int capacity) {
	if (pItem == NULL) {
		return;
	}

	bool found = false;
	int i = 0;

	while (!found && i < capacity) {
		if (container[i] == pItem) {
			container[i] = NULL;
			found = true;
		}

		++i;
	}

	if (!found) {
		cout << "Item not found. Can't remove." << endl;
	}
}


void welcome() {

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);

	//system("COLOR 97");
	cout << "WELCOME TO EXIT: A ZOMBIE APOCALYPSE SURVIVAL GAME  \n" << endl << endl;
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);

	//system("pause");
	//system("color 0b");
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "instructions:" << endl;


	cout << "Enter '1' Key Start your journey to HELL!!!!" << endl << endl;


	//system("color 0f");
	//SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	//cout << "enter '2' to quit" << endl << endl;
	////system("pause");
	//cin >> Choice;
	GetInput();
	MainMenuChoice(Choice);
}

void quit()
{
	isRunning = false;
}
void Resume()
{
	cout << "Press Enter";
	cin >> Enter;
	if (Enter == "")
	{
		system("cls");

	}
	else
	{
		system("cls");
		Resume();
	}

}
void MainMenuChoice(int number)
{
	switch (number)
	{
	case 1:
		//Resume();
		system("cls");
		EnterYourName();

		break;
	case 2:

		break;
	}
}
void GameChoice(char character)
{
	switch (character)

	{
	case 1:
		//Resume();
		system("cls");

		break;
	case 2:

		break;
	case 3:
		system("cls");
		break;
	}
}
void EnterYourName()
{
	cout << "enter your name";
	cin >> name;
	system("cls");
}
void GetInput()
{
	cin >> Choice;
}
void Getinput()
{
	cin >> Choices;

}
void dialogPart1()
{
	cout << "Narrator: Its the year 2098 in a small town called 'DEANVILLE' your in a coma on a hospital bed" << endl << endl;
	//Getinput();
	cout << name << ": Where am i whats going on? wheres my wife and kids? " << endl << endl;
	//Getinput();
	cout << "Narrator: You have a look around " << endl << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}
int choose()
{
	int CHoice;
	cout << "Your given a choice:" "\n\n";
	cout << "Investigate" << endl;
	cout << "1 - door\n";
	cout << "2 - drawer\n";
	cout << "3 - TV\n\n";

	cout << "Choice: ";
	cin >> CHoice;

	switch (CHoice)
	{
	case 1:
		/*if (HasKey == false) {

		}
		*/
		cout << "door is locked" << endl;
		cout << "Wrong Choice choose again" << endl;
		choose();


		break;
	case 2:
		cout << "sweet a key \n";


		break;
	case 3:
		cout << " DKG NEWS: the DK Virus has broken out turning everyone into a zombies weather its by contact or air borne erveryone is affected\n";
		cout << "Wrong Choice chose again" << endl;
		choose();
		break;
	default:
		cout << "Your choice is invalid.\n";
		CHoice = 0; //this will signal error
	}
	return CHoice;
}
//
//int _tmain(int argc, _tchar* argv[])
//{
//	int choice = 0;
//	while (choice == 0) { choice = choose(); };
//	system("pause");
//	return 0;
//}
int Choose2()

{
	int CHoice;
	cout << " Your given a choice:" "\n\n";

	cout << "1 - pick up axe\n";
	cout << "2 - dont pick up axe\n";


	cout << "Choice: ";
	cin >> CHoice;

	switch (CHoice)
	{
	case 1:
		cout << "perfect an axe i can use this on my journey\n";
		break;
	case 2:
		cout << "i should have pick up the axe\n";
		cout << "Wrong Choice choose again" << endl;
		Choose2();
		break;

	default:
		cout << "Your choice is invalid.\n";
		CHoice = 0; //this will signal error
	}
	return CHoice;
}

//int _TMAIN(int argc, _TCHAR* argv[])
//{
//	int choice = 0;
//	while (choice == 0) { choice = choose(); };
//	system("pause");
//	return 0;
//}

int Choose3()
{
	int CHoice;
	cout << "Your given a choice:" "\n\n";
	cout << "Investigate" << endl;
	cout << "1 - shelf\n";
	cout << "2 - desk\n";


	cout << "Choice: ";
	cin >> CHoice;

	switch (CHoice)
	{
	case 1:
		cout << "nothing in here\n";
		cout << "Wrong Choice choose again" << endl;
		Choose3();
		break;
	case 2:
		cout << " Groovy a microphone i can use this to assemble a comunication device\n";
		break;

	default:
		cout << "Your choice is invalid.\n";
		CHoice = 0; //this will signal error
	}
	return CHoice;
}

//int _TMAIN333(int argc, _TCHAR* argv[])
//{
//	int choice = 0;
//	while (choice == 0) { choice = choose(); };
//	system("pause");
//	return 0;
//}
int Choose4()
{
	int CHoice;
	cout << " Your given a choice:" "\n\n";
	cout << "Investigate" << endl;
	cout << "1 - upstairs\n";
	cout << "2 - downstairs\n";


	cout << "Choice: ";
	cin >> CHoice;

	switch (CHoice)
	{
	case 1:
		cout << "rats i need a key to open one of the rooms upstairs!!!\n";
		cout << "Wrong Choice choose again" << endl;
		Choose4();
		break;
	case 2:
		cout << " you walk down some steps and right there are two zombies waiting for you and now you have no choice but to fight so you pull gun\n";
		break;

	default:
		cout << "Your choice is invalid.\n";
		CHoice = 0; //this will signal error
	}
	return CHoice;
}

//int _TMAIN33(int argc, _TCHAR* argv[])
//{
//	int choice = 0;
//	while (choice == 0) { choice = choose(); };
//	system("pause");
//	return 0;
//}
int Choose5()
{
	int CHoice;
	cout << "Your given a choice:" "\n\n";
	cout << "Investigate" << endl;
	cout << "1 - Room1\n";
	cout << "2 - Room2\n";


	cout << "Choice: ";
	cin >> CHoice;

	switch (CHoice)
	{
	case 1:
		cout << "door is locked i need to go to the other room its open\n";
		cout << "Wrong Choice choose again" << endl;
		Choose5();
		break;
	case 2:
		cout << " you enter inside the room and retieve another key from a jewelery box  that unlocks room 1  \n";
		break;

	default:
		cout << "Your choice is invalid.\n";
		CHoice = 0; //this will signal error
	}
	return CHoice;
}

//int _TMAIN3(int argc, _TCHAR* argv[])
//{
//	int choice = 0;
//	while (choice == 0) { choice = choose(); };
//	system("pause");
//	return 0;
//}

void dialogPart2()
{
	cout << "Narrator: You enter the" << endl;
	//Getinput();
	cout << "hallway its very creepy quiet every room is empty there's blood everywhere on the walls the floors and the ceilings " << endl;
	//Getinput();
	cout << "Now you enter the reception area " << endl;
	//Getinput();
	cout << name << ": Look like there's an axe on the wall by the paintings " << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();

}

void dialogPart3()
{
	cout << name << ": I can use this on my battle against the infected town of DEANVILLE. " << endl;
	//Getinput();
	cout << "Narrator: You leave the hospital you go down some steps and" << endl;
	//Getinput();
	cout << "all of a sudden two zombies rush and attack you " << endl;
	//Getinput();
	cout << name << ": Luckily i pick up the axe i can defeat you now " << endl;
	//Getinput();
	cout << "Zombies: i want your blood and soul" << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}

void dialogPart4()
{
	cout << "Narrator: Looks like you were rewarded for your efforts with a gun" << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}

void dialogPart5()
{
	cout << "Narrator: You come across an a abandoned house you choose to go inside it " << endl;
	//Getinput();
	cout << "hoping to salvage anything to help you on your journey to survive!!!!" << endl;
	//Getinput();
	cout << "you search the only room in the house " << endl;
	cout << "Enter any key to proceed" << endl;

	Getinput();
}

void dialogPart6()
{
	cout << "Narrator : Now back on your adventure to hell!!!" << endl;
	//Getinput();
	cout << "as you come across a forest you hear ghoulish sounds coming coming coming towards you!!!" << endl;
	//Getinput();
	cout << " BAM BAM 5 Zombies came out of no where you have no time to pull out your gun you start " << endl;
	//Getinput();
	cout << "running and try to find the nearest shelter" << endl;
	//Getinput();
	cout << name << " : Look like theres a path this way." << endl;
	cout << "Narrator: You found a shelter nearby a lake that you can take cover from just until" << endl;
	//Getinput();
	cout << "the zombies scurry away" << endl;
	//Getinput();
	cout << "you decided instead to explore this shelter " << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}

void dialogPart7()
{
	cout << "Narrator: You shoot the zombies dead you found a key that opens one of the doors upstairs" << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}

void dialogPart8()
{
	cout << " Narrator: You enter room 1 and find a........" << endl;
	//Getinput();
	cout << name << " : YES!!! A headset one more piece to complete my comunication device " << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();



}

void dialogPart8a() {
	cout << name << " : Great another zombie battle time to pull out my 'jammy'" << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}

void dialogPart9()
{
	cout << "Narrator: You leave the shelter after that hellish battle with the demons from hell you move on " << endl;
	//Getinput();
	cout << "now your walking down a hill its completely dark...... but then you see some lights up ahead " << endl;
	//Getinput();
	cout << "as you get closer you and closer and closer........" << endl;
	//Getinput();
	cout << name << " : Its a police station terrific maybe there some poilceman in there that can help me" << endl;
	//Getinput();
	cout << "Narrator: As you enter the facility " << endl;
	//Getinput();
	cout << "you find a cell and you start hoping to find medicine or ammo but instead you found someone in here you approach the indivisual" << endl;
	//Getinput();
	cout << name << ": Are you ok?" << endl;
	cout << "Narrator: You ask " << endl;
	//Getinput();
	cout << "Zombie: Kill me now before i turn completely" << endl;
	cout << "Narrator: Aggression just came over the zombie and started to attack you!!!!" << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}

void dialogPart9a() {
	cout << "Narrator: You exit the police station just to find two more zombies to face" << endl;

	cout << name << ": When will this end im sick of all you just leave me alone" << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}







void dialogPart10() {

	cout << "Narrator: Now before we were so rudely interrupted " << endl;
	//Getinput();
	cout << " you proceed searching for one more pieace of equipment" << endl;
	//Getinput();
	cout << " what do you see up ahead" << endl;
	//Getinput();
	cout << name << ": Perfect just the store i need radio shack " << endl;
	//Getinput();
	cout << "Narrator: You enter the facility going down to each" << endl;
	//Getinput();
	cout << "isle searching for the last piece and then you found it at the bottom of the shelf a transmitter" << endl;
	//Getinput();
	cout << name << ": This is what i lastly need to call the military" << endl;
	cout << "Enter any key to proceed" << endl;
	//Getinput();

}
void dialogPart10a()
{
	cout << "Narrator: But theres one more problem you have all the pieaces" << endl;
	//Getinput();
	cout << "but it wont work without a power source and nearest one is at the abandon military base " << endl;
	//Getinput();
	cout << name << ": Its only 10 miles!!!!" << endl;
	//Getinput();
	cout << "Narrator: You leave the store back on your last adventure hopefully for the day " << endl;
	//Getinput();
	cout << name << ": I can see the light at the end of this very creepy dark tunnel " << endl;
	//Getinput();
	cout << " Narrator: You enter the facility and the only room that has the power to help you " << endl;
	//Getinput();
	cout << " you went inside the room you are  now surronded by zombies this is going to be the most diffcult part of the day but hey you came this far theres no turning back" << endl;
	//Getinput();
	cout << name << ": Its me and its you lets get it on " << endl;
	cout << "Enter any key to proceed" << endl;
	Getinput();
}


void dialogPart10b()
{


	//Getinput();
	cout << "Narrator: You defeated the zombies " << endl;
	//Getinput();
	cout << "Narator: You hookup the device and it works your dialing the military" << endl;
	//Getinput();
	cout << name << ": Is anybody on the otherline please say something if you hear me im trap in this god for saken rat hole you call a town" << endl;
	//Getinput();
	cout << "Military: Yes who is this" << endl;
	//Getinput();
	cout << name << ":My name is " << name << endl;
	//Getinput();
	cout << "Military: You are one brave son of bitch to survive as long as you did" << endl;
	//Getinput();
	cout << "and dont worry just wait on the top on top of " << endl;
	//Getinput();
	cout << "the roof and we will send the helicopters with paramedics to get you off the town and" << endl;
	//Getinput();
	cout << "treat you for any injuries you might have sustainded during in battle" << endl;
	//Getinput();
	cout << " Narrator: You hang up the phone" << endl;
	//Getinput();
	cout << name << ": Finaly some pieace of mind " << endl;
	//Getinput();
	cout << "Narrator: You go to the roof and just wait for 30 minutes " << endl;
	//Getinput();
	cout << "you see the helicpoter from a distance and it gets closer and closer it lands " << endl;
	//Getinput();
	cout << " you see paramedics jumping out of the helicopter rushiung to treat your wounds as they put bandages on you they notice" << endl;
	//Getinput();
	cout << "something werid underneath your shirt as they lift it and its what they were afraid of........." << endl;
	cout << "you have been.....  " << endl;
	//Getinput();
	cout << "......BITTEN....!!!" << endl;

	Getinput();
}

void checkInput()
{
	cin >> Choice;
	switch (Choice) {
	case 1:
		//addItem();

		break;

	case 2:
		//removeItem();

		break;

	case 3:


		break;
	case 4:
		quit();
		break;


	}
	welcome();
}



void ZombieBattle1()
{
	Enemy Zombie1;

	int hitZombie;

	do
	{
		cout << "\n hit zombie with Axe?\n Yes = 1\n No = 2\n";
		cin >> hitZombie;
		RandomNumber();
		if (hitZombie == 1)
		{
			if (RandomNumber() == 3)
			{
				playerOne.m_Attack += 5;
				cout << "critical hit : " << playerOne.m_Attack << endl;
			}

			Zombie1.m_Health = ShowEnemyHP(Zombie1.m_Health, playerOne.m_Attack);
			playerOne.m_Health = ShowHP(playerOne.m_Health, Zombie1.m_Attack);
			AxeOne.m_blows--;
			cout << "\nYou have struck the Zombie.\n";
			cout << "you have this much more to use the axe:" << AxeOne.m_blows << endl;
			cout << "The Zombie now has " << Zombie1.m_Health << "HP left.\n\n";
			if (Zombie1.m_Health <= 0)
			{
				cout << "You won!\n";
			}
			else if (Zombie1.m_Health > 0)
			{
				cout << "The Zombie hit you back.\n";
				cout << "You now have " << playerOne.m_Health << "HP left.\n\n";
			}
		}
		else if (hitZombie == 2)
		{
			cout << "You chose not struck the Zombie so he hit you instead\n";
			cout << "You now have " << ShowHP(playerOne.m_Health, Zombie1.m_Attack) << "HP left.\n\n";
		}
		else
		{
			cout << "That is not a valid choice.\n\n";
			return ZombieBattle1();
		}

	} while (playerOne.m_Health > 0 && Zombie1.m_Health > 0);
}

int ShowEnemyHP(int enemyhp, int attack)
{
	enemyhp = enemyhp - attack;
	return enemyhp;
}
int ShowHP(int hp, int enemyattack)
{
	hp = hp - enemyattack;
	return hp;
}
void ZombieBattle2()
{
	Enemy Zombie1;

	int hitZombie;

	do
	{
		cout << "\nshoot zombie with pistol?\n Yes = 1\n No = 2\n";
		cin >> hitZombie;
		if (hitZombie == 1)
		{
			if (RandomNumber() == 5)
			{
				playerOne.m_Attack += 10;
				cout << "critical hit : " << playerOne.m_Attack << endl;
			}

			Zombie1.m_Health = ShowEnemyHP(Zombie1.m_Health, playerOne.m_Attack);
			playerOne.m_Health = ShowHP(playerOne.m_Health, Zombie1.m_Attack);
			pistolOne.m_Ammo--;

			cout << "\nYou shot the Zombie. \n";
			cout << "you have this much ammo: " << pistolOne.m_Ammo << endl;
			cout << "The Zombie now has " << Zombie1.m_Health << "HP left.\n\n";
			if (Zombie1.m_Health <= 0)
			{
				cout << "You won!\n";
			}
			else if (Zombie1.m_Health > 0)
			{
				cout << "The Zombie hit you back.\n";
				cout << "You now have " << playerOne.m_Health << "HP left.\n\n";
			}
		}
		else if (hitZombie == 2)
		{
			cout << "You chose not to shoot the Zombie so he hit you instead\n";
			cout << "You now have " << ShowHP(playerOne.m_Health, Zombie1.m_Attack) << "HP left.\n\n";
		}
		else
		{
			cout << "That is not a valid choice.\n\n";
			return ZombieBattle1();
		}

	} while (playerOne.m_Health > 0 && Zombie1.m_Health > 0);
}

int ShowEnemyHP2(int enemyhp, int attack)
{
	enemyhp = enemyhp - attack;
	return enemyhp;
}
int ShowHP2(int hp, int enemyattack)
{
	hp = hp - enemyattack;
	return hp;
}
int  RandomNumber()
{
	const int MAX_NUMBER = 10;

	srand(static_cast<unsigned int> (time(0)));

	int secretNumber = (rand() % MAX_NUMBER) + 1;
	//int secretNumber = 1;
	return secretNumber;
}

