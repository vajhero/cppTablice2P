// Zadanie 3 Artur Karczewski

#include <iostream>
using namespace std;

int tab[10][10];

int main() {
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			if (x = y) {
				tab[x][y] = 1;
			}
			else {
				tab[x][y] = 0;
			}
		}
	}
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			cout << tab[x][y];
		}
		cout << endl;
	}
}