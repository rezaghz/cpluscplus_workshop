// addad fard ta n.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

void main(){

	int n, i = 1, sum = 0, k=0;
	float ave;
	cout << "Please Your Number";
	cin >> n;
	for (i = 1; i < n; i = i+2){
		k = k + 1;
		sum = sum + i;
	}
	ave = sum / k;
	cout << "YouR Average is " << ave;
	cin.get();
	cin.get();

}