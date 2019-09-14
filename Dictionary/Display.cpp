#include <iostream>
using namespace std;


class Instructions{
public:
		void getGreeting() {
			cout << "Welcome to dictionary!\n";
		}
		void getMenu() {
			cout << "this is get menu. Need  fill\n";
		}
		void getGoodbye() {
			cout << "Close programm";
		}
		void getWarningMsg(int code) {
			switch (code) {
			case 1:
				cout << "Incorrect data input.\nTry again\n";
			}
		}
};