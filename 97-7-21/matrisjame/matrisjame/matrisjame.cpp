// matrisjame.cpp : Defines the entry point for the console application.
//97-8-21 shomal university

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
void main(){
	int a[2][2], b[2][2], i, j;

	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << "Enter Your Matrix 1th [" << i + 1 << "," << j + 1 << "] : ";
			cin >> a[i][j];
		}
	}
	cout << endl << endl;

	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << "Enter Your Matrix 29th [" << i + 1 << "," << j + 1 << "] : ";
			cin >> b[i][j];
		}
	}


	cout << "Result Matrix : " << endl;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout <<"\t\t"<< a[i][j] + b[i][j] << "\t";
		}
		cout << endl << endl;
	}

	cin.get();
	cin.get();


}


