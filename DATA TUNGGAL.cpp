#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {                                  
	std::cout << "====================================================="<<endl;
	std::cout << "== TUGAS BESAR PERANGKAT KOMPUTER DAN SOFTWARE II ==="<<endl;
    std::cout << "=======## MENGHITUNG DATA BILANGAN TUNGGAL ##========"<< endl;
    std::cout << "=======## MENGURUTKAN DATA , MEDIAN , MEAN ##========"<< endl;
    std::cout << "====================================================="<<endl;
    std::cout << "                                                     "<<endl;
    int data[10];
    double a, max, n;
    double i, j, k, swap, med, xbar, q1;
    double bilangan;
    
    do {
        std::cout << "SELAMAT DATANG DI DATA BILANGAN TUNGGAL" << endl;
        for (int i = 0; i <= 9; i++) {
            std::cout << "Masukan Bilangan ke- " << i + 1 << endl;
            cin >> data[i];
        }
        std::cout << "Data Bilangan = " << data[0] << "," << data[1] << "," << data[2] << "," << data[3] << "," << data[4] << "," << data[5] << "," << data[6] << "," << data[7] << "," << data[8] << "," << data[9] << endl;
        for (int j = 0; j <= 9; j++) {
            for (int k = j + 1; k <= 9; k++) {
                if (data[j] > data[k]) {
                    swap = data[j];
                    data[j] = data[k];
                    data[k] = swap;
                }
            }
        }
        std::cout << "Urutan Bilangan Terkecil-Terbesar = " << data[0] << "," << data[1] << "," << data[2] << "," << data[3] << "," << data[4] << "," << data[5] << "," << data[6] << "," << data[7] << "," << data[8] << "," << data[9] << endl;
        int hasil = (double) (data[4] + data[5]) / 2;
        std::cout << "Nilai Median Data Tersebut Berada di Angka " << data[4] << " dan " << data[5] << endl;
        std::cout << " Maka Nilai Median nya adalahh= " << hasil << endl;
        int xbar = (double) (data[0] + data[1] + data[2] + data[3] + data[4] + data[5] + data[6] + data[7] + data[8] + data[9]) / 2;
        std::cout << "Nilai rata rata nya adalah= " << hasil << endl;
        std::cout << "Terimakasih Telah Bermain:)" << endl;
        std::cout << "Apakah Anda Ingin Bermain Lagi?" << endl;
        std::cout << "TEKAN 2 JIKA IYA" << endl;
        std::cout << "TEKAN 1 JIKA TIDAK" << endl;
        cin >> bilangan;
    } while (bilangan == 2);
    std::cout << "Sampai Jumpa Lagi" << endl;
    std::cout << " STAY HEALTHY AND HAPPY  " << endl;
    return 0;
}

