// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "D:\Calculator_P\Calculator_P\Include\Calculator.h"
#include <unordered_map>


extern "C" __declspec(dllexport)




int main()
{
	Menu.show();

};

void menu::show()
{
	
	bIsinMenu = true; 
	std::cout << "				  #######################################\n";
	std::cout << "				  Welcome to Dillion Huston calacutor \n";
	std::cout << "				  #######################################\n";
	std::cout << "\n", "\n";

	
	
	
	std::cout <<" Select One of the following options: \n";
	std::cout <<"  1.Add\n";
	std::cout <<"  2.Mulitply\n";
	std::cout <<"  3.Division\n";
	std::cout <<"  4.Subtraction\n";

	getoption(option);
}


 void getoption(int option)
{
	std::cin >> option;


	switch (option)
	{
	case'1':
		Add.add();

	case'2':
		mulitplication.mutiply();

	case'3':
		division.Divide();

	case'4':
		subtraction.Subtract();

	default:
		std::cout << "ERROR, wrong selection";
		break;

	}

}

void Addition::add()
{
	

	std::cout << "Enter first number: ", std::cin >> num1; // scanf is better if we are handling "Big" numbers
	std::cout << "Enter second number:", std::cin >> num2; // scanf 
	Add.answer = num1 + num2;
	std::cout << "Answer: " << Add.answer;
	std::cout << "\n";

	std::cout << "Press ENTER to return to menu: ";
	std::cin.get();


	if (std::cin.get() == '\n') {
		system("cls");
		Menu.show();
	}else{

		std::cout << "Please Press ENTER!!";
	};
	
};


void Multipication::mutiply()  // add scanf 
{
	std::cout << "Enter first number: ", std::cin >> num1;
	std::cout << "Enter second number:", std::cin >> num2;
	mulitplication.answer = num1 * num2;
	std::cout << "Answer:" << mulitplication.answer;
	std::cout << "\n";
	std::cin.get();


	if (std::cin.get() == '\n') {
		system("cls");
		Menu.show();
	}
	else{
		std::cout << "Please Press ENTER!!";
	};

};

void Division::Divide() // scanf
{
	

	std::cout << "Enter first number", std::cin >> num1; // scanf 
	std::cout << "Enter second number",std::cin >> num2; //scanf
    division.answer =  num1 / num2;

	std::cout << "Answer:" << division.answer;
	std::cout << "\n";
	std::cin.get();

	//return to menu input
	if (std::cin.get() == '\n') {

		system("cls");
		Menu.show();
	}
	else {

		std::cout << "Please Press ENTER!!";
	};
}

void Subtraction::Subtract()
{
	std::cout << "Enter first number: ", std::cin >> num1;
	std::cout << "Enter second number:", std::cin >> num2;
	

	subtraction.answer = num1 - num2;
	std::cout << "Answer: " << subtraction.answer;
	std::cout << "\n";
	std::cin.get();
	
	// Get return to menu input
	if (std::cin.get() == '\n') {

		system("cls");
		Menu.show();
	}
	else {

		std::cout << "Please Press ENTER!!";
	};

}
