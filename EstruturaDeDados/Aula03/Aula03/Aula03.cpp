#include "pch.h"
#include <iostream>
#include<locale.h>

using namespace std;

// numero primo - divisivel por 1 e por ele mesmo
//  11, 13, 17

int main() {
	
	int a;
	cout << "Digite um valor: \n";
	cin >> a; // 11 e 13
	
	int b = a % 2;
	int c = a % 3;
	int d = a % 5;
	
	// && ||

	if (b == 0 || c == 0 || d == 0 ){
		cout << "Numero não é primo";
	}else {
		cout << "numero primo";
	}
	   
}
