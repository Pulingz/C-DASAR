#include <iostream>

using namespace std;

int main() {
    int nilai_n;

    cout << "Masukkan nilai N: ";
    cin >> nilai_n;

    cout << endl;

    for (int i = 0; i < nilai_n + 1; i++) {
        for (int j = 0; j < nilai_n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}
