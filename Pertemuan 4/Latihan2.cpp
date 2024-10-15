#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        default:
            cout << "Other Number" << endl;
    }

    return 0; // Menambahkan titik koma ; setelah return 0
}
