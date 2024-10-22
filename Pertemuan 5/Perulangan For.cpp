#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris:";
    cin >> n;

    // Menggunakan perulangan for
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++)
{
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
