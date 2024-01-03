// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
#include <unordered_map>




int main()
{

	Menu.show(); // call show menu function

};

void menu::show()
{

	
	bIsinMenu = true; 
	std::cout << "Welcome to Dillion Huston calacutor T.M\n";
	
	

	std::cout << "Select One of the following options\n";
	std::cout << "1. Add\n";
	std::cout << "2. Mulitply\n";
	std::cout << "3. Division\n";
	std::cout << "4. Subtraction\n";


	getoption(option);
	


}




 void getoption(int option)
{

	
	 system("color a");
	if (bIsinMenu == true) { 


		std::cin >> option;

		while (bIsinMenu == true) {
			if (option == 1) {
				Add.add();
			}
			else if (option == 2) {
				mulitplication.mutiply();
			}
			else if (option == 3) {
				division.Divide();
			}
			else if (option == 4) {
				subtraction.Subtract();
			}break;
		}
	}else(option >= 5);

	{
		;
		system("color a");
		std::cout << "error";
		

	};
};





void Addition::add()
{
	

	std::cout << "Enter first number\n";
	std::cin >> num1; // scanf is better if we are handling "Big" numbers
	std::cout << "Enter second number\n";
	std::cin >> num2; // add scanf
	Add.answer = num1 + num2;
	std::cout << Add.answer;

	system("cls"); // clear system console
	Menu.show();

	
};


void Multipication::mutiply()  // add scanf 
{
	std::cout << "Enter first number: ";
	std::cin >> num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;

	mulitplication.answer = num1 * num2;

	std::cout << mulitplication.answer;
	system("cls"); // clear system console
	Menu.show();

};

void Division::Divide() // scanf
{
	

	std::cout << "Enter first number";
	std::cin >> num1;
	std::cout << "Enter second number";
	std::cin >> num2;

	division.answer = num1 / num2;

	std::cout << division.answer;
	system("cls"); // clear system console
	Menu.show();

}

void Subtraction::Subtract()
{
	std::cout << "Enter first number: ";
	std::cin >> num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;

	subtraction.answer = num1 - num2;
	std::cout << answer;
	system("cls"); // clear system console
	Menu.show();
}
