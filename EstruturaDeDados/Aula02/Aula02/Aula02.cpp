
#include "pch.h"
#include <iostream>

using namespace std;

void msgRecebida(char msg[]);

int main() {
	char vet[] = { 'c','l','e','r','i','s','t','o','n'};

	msgRecebida(vet);
	
}

void msgRecebida(char msg[]) {
	int tamanhoChar = strlen(msg);
	cout << tamanhoChar;

}