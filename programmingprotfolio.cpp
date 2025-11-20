#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "---- Calculator ----\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Square Root\n7. Exit\n";

    cout << "Choose: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cin >> a >> b;
            cout << a + b;
            break;

        case 2:
            cin >> a >> b;
            cout << a - b;
            break;

        case 3:
            cin >> a >> b;
            cout << a * b;
            break;

        case 4:
            cin >> a >> b;
            if (b == 0) cout << "Error";
            else cout << a / b;
            break;

        case 5:
            cin >> a >> b;
            cout << pow(a, b);
            break;

        case 6:
            cin >> a;
            if (a < 0) cout << "Error";
            else cout << sqrt(a);
            break;

        case 7:
            cout << "Exiting...";
            return 0;

        default:
            cout << "Invalid";
    }

    return 0;
}