#include <iostream>

using namespace std;

bool isLucky(int n) {

    int sum = 0;

    while (n > 0) {

        sum += n % 10;

        n /= 10;

    }

    return sum == 21;

}

int main() {

    int n;

    cout << "Enter a six-digit number: ";

    cin >> n;

    if (isLucky(n)) {

        cout << n << " is a lucky number!" << endl;

    }
    else {

        cout << n << " is not a lucky number." << endl;

    }

    return 0;

}