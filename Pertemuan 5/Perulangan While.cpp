#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris:";
    cin >> n;

    // Menggunakan perulangan while
    int i = n;
    while (i > 0) {
        int j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}
