#include <iostream>

using namespace std;

int main() {
    int nilai_n, i = 0, j = 0, k = 0;

    cout << "Masukkan nilai N: ";
    cin >> nilai_n;

    cout << endl;

    do {
        while (j < nilai_n - i) {
            cout << " ";
            j++;
        }
        j = 0;

        while (k < i * 2 - 1) {
            cout << "*";
            k++;
        }
        k = 0;
        i++;
        cout << endl;
    } while (i < nilai_n + 1);

    return 0;
}
