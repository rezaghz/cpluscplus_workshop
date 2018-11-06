// nomre class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
void main() {

	float grade;
	cout << "Plaease Enter Your Grade :";
	cin >> grade;
	if (grade >= 17 && grade <= 20){
		cout << "Your Group is \t A";
	}
	else if (grade >= 13 && grade < 17){
		cout << "Your Group is \t B";
	}
	else if (grade >= 10 && grade < 13){
		cout << "Your Group is \t C";
	}
	else if (grade >= 0 && grade < 10){
		cout << "Your Group is \t D";
	}
	else {
		cout << "Error !!! Your Grade is out of range";
	}

	cin.get();
	cin.get();
}