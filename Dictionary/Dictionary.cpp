// Dictionary.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Display.cpp"
#include "Input.cpp"
using namespace std;

int main()
{
	Instructions display;
	mainInput mainInput;
	int menuFlag=0;
	//------------------------
	display.getGreeting();
	display.getMenu();
	menuFlag=mainInput.getMenuValue(menuFlag);
	//------------------------
	do {
		switch (menuFlag) {
		case 1:
			cout << "case 1 test";
			return 0;
			break;
		default:
			display.getWarningMsg(1);
			menuFlag = mainInput.getMenuValue(menuFlag);
			break;

		}
	} while (true);
}

