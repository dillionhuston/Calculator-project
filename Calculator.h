#pragma once
#define CALCULATOR_H_H

#include <cmath>
#include <cstdlib>
#include <vector>
#include <iostream>




	// variables 
	bool bIsinMenu;
	void getoption(int option);



	class menu{

	public:
		int option;
	void show();

};


	class Addition
	{
	public:

		int num1, num2;
		int answer;

		void add();

		Addition* addition;

	};


	class Multipication {

	public:
		unsigned int num1, num2;
		int answer;

		void mutiply();
	};


	class Division {

	public:
		unsigned int num1, num2;
		int answer;

		void Divide();
	};



	class Subtraction {

	public:
		unsigned int num1, num2;
		int answer;

		void Subtract();
	};

	//spawn object of class 
	menu Menu; // Menu class object
	Addition Add;
	Multipication mulitplication;
	Division division;
	Subtraction subtraction;













