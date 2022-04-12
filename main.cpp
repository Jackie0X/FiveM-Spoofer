#include <iostream>
#include <Windows.h>
#include "basics.h"
#include "Spoofer.h"
#include "encryption.h"
#include "WEB.h"

int choice;
Encryption encryption = Encryption();
WEB webb = WEB();


int main()
{
	webb.CheckVersion("2.0");
	Spoofing spoofer = Spoofing();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	std::cout << " _______  _______  _______  _______  _______  _______  ______   " << std::endl;
	std::cout << "|       ||       ||       ||       ||       ||       ||    _ |  " << std::endl;
	std::cout << "|  _____||    _  ||   _   ||   _   ||    ___||    ___||   | ||  " << std::endl;
	std::cout << "| |_____ |   |_| ||  | |  ||  | |  ||   |___ |   |___ |   |_||_ " << std::endl;
	std::cout << "|_____  ||    ___||  |_|  ||  |_|  ||    ___||    ___||    __  |" << std::endl;
	std::cout << "|_____| ||   |    |       ||       ||   |    |   |___ |   |  | |" << std::endl;
	std::cout << "|_______||___|    |_______||_______||___|    |_______||___|  |_|" << std::endl;
	SetConsoleTextAttribute(hConsole, 14);
	std::cout << encryption.GetCredits().c_str() << std::endl;
	SetConsoleTextAttribute(hConsole, 15);
	system("pause");
	while (true) {
		system("cls");
		SetConsoleTextAttribute(hConsole, 12);
		std::cout << " _______  _______  _______  _______  _______  ___   __    _  _______             " << std::endl;
		std::cout << "|       ||       ||       ||       ||       ||   | |  |  | ||       |" << std::endl;
		std::cout << "|  _____||    _  ||   _   ||   _   ||    ___||   | |   |_| ||    ___|  " << std::endl;
		std::cout << "| |_____ |   |_| ||  | |  ||  | |  ||   |___ |   | |       ||   | __    " << std::endl;
		std::cout << "|_____  ||    ___||  |_|  ||  |_|  ||    ___||   | |  _    ||   ||  | ___   ___   ___  " << std::endl;
		std::cout << " _____| ||   |    |       ||       ||   |    |   | | | |   ||   |_| ||   | |   | |   | " << std::endl;
		std::cout << "|_______||___|    |_______||_______||___|    |___| |_|  |__||_______||___| |___| |___| " << std::endl;
		SetConsoleTextAttribute(hConsole, 10);
		std::cout << "\nVersion 2.0\n" << std::endl;
		std::cout << "\nSelect game that you want to spoof...\n" << std::endl;
		SetConsoleTextAttribute(hConsole, 15);
		std::cout << "[1] << \x1B[36mFiveM\033[0m\t\t" << std::endl;
		SetConsoleTextAttribute(hConsole, 15);
		std::cout << "[2] << \x1B[36msecond game\033[0m\t\t" << std::endl;
		SetConsoleTextAttribute(hConsole, 15);
		std::cin >> choice;
		if (choice && choice > 0 && choice <= 2) {
			switch (choice) {
			case 1: // fivem case
				spoofer.Initialize();
				system("pause");
				break;
			}
		}
	}

}