#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) { // Menambahkan pembuka kurung kurawal { di for
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    return 0;
}
