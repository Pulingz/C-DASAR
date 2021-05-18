#include <iostream>

using namespace std;

int main() {
    int nilai_n, i = 0, j = 0, k = 0;
    int pilihan;

    cout << "Program Piramida Bintang" << endl;
    cout << "========================" << endl;
    cout << "Menu:" << endl;
    cout << "[1] Piramida iterasi for" << endl;
    cout << "[2] Piramida iterasi while" << endl;
    cout << "[3] Piramida iterasi do-while" << endl;
    cout << endl;
    cout << "[k] keluar" << endl;
    cout << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;


    cout << endl << endl;

    if (pilihan == 1) {
        cout << "Piramida iterasi for" << endl;
        cout << "====================" << endl << endl;
        cout << "Masukkan nilai N: ";
        cin >> nilai_n;
        for (int i = 0; i < nilai_n + 1; i++) {
            for (int j = 0; j < nilai_n - i; j++) {
                cout << " ";
            }
            for (int k = 0; k < i; k++) {
                cout << " *";
            }
            cout << endl;
        }
        cout << endl << endl;
        cout << "Terima Kasih";
    } else if (pilihan == 2) {
        cout << "Piramida iterasi while" << endl;
        cout << "======================" << endl << endl;
        cout << "Masukkan nilai N: ";
        cin >> nilai_n;
        while ( i < nilai_n + 1) {
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
        }
        cout << endl << endl;
        cout << "Terima Kasih";
    } else if (pilihan == 3) {
        cout << "Piramida iterasi do-while" << endl;
        cout << "=========================" << endl << endl;
        cout << "Masukkan nilai N: ";
        cin >> nilai_n;
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
        cout << endl << endl;
        cout << "Terima Kasih";
    } else {
        cout << "Terima Kasih";
        return 0;
    }

    return 0;
}
