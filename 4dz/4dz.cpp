#include <iostream>

#include <string>

using namespace std;

void printCard(string card) {

	cout << " _____ " << endl;

	cout << "|" << card.substr(0, 1) << "    |" << endl;

	cout << "| " << card.substr(1, 1) << "   |" << endl;

	cout << "|   " << card.substr(2, 1) << " |" << endl;

	cout << "|    " << card.substr(3, 1) << "|" << endl;

	cout << " ‾‾‾‾‾ " << endl;

}

int main() {

	string card = "KS";

	printCard(card);

	return 0;

}