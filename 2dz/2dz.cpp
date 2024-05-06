#include <iostream>

using namespace std;

int sumInRange(int a, int b) {

    int sum = 0;

    for (int i = a; i <= b; i++) {

        sum += i;

    }

    return sum;

}

int main() {

    int a, b;

    cout << "Введіть перше число: ";

    cin >> a;

    cout << "Введіть друге число: ";

    cin >> b;

    cout << "Сума чисел у діапазоні між " << a << " та " << b << " дорівнює " << sumInRange(a, b) << endl;

    return 0;

}