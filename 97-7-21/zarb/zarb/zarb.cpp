// zarb.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
using namespace std;
void main(){

	int a, b;
	int i, j;
	cout << "enter first number :";
	cin >> a;
	cout << "enter second number :";
	cin >> b;
	for (i = 1; i <= a; i++){
	
		for (j = 1; j <= b; j++){
			cout << i*j << "\t";
		
		}
		cout << endl;
	}
	cin.get();
	cin.get();
}

