#include <iostream>

using namespace std;

bool isPerfect(int n) {

    int sum = 0;

    for (int i = 1; i < n; i++) {

        if (n % i == 0) {

            sum += i;

        }

    }

    return sum == n;

}

void findPerfectNumbers(int start, int end) {

    for (int i = start; i <= end; i++) {

        if (isPerfect(i)) {

            cout << i << " ";

        }

    }

}

int main() {

    int start, end;

    cout << "Enter start and end of the range: ";

    cin >> start >> end;

    cout << "Perfect numbers between " << start << " and " << end << ": ";

    findPerfectNumbers(start, end);

    return 0;

}