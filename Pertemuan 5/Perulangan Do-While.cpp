#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris:";
    cin >> n;

    // Menggunakan perulangan do-while
    int i = n;
    do {
        int j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    } while (i < 0);

    return 0;
}

