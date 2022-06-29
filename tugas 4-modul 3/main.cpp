#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string tujuan_040;
    float berat;
    int Surabaya, Yogyakarta;

    cout << "MASUKKAN BERAT BARANG : ";
    cin >> berat;
    berat = ceil (berat);

    cout << "MASUKKAN KOTA TUJUAN: ";
    cin >> tujuan_040;

    Yogyakarta = 18000;
    Surabaya = 19000;
    Yogyakarta = berat * Yogyakarta;
    Surabaya = berat * Surabaya;

    if (tujuan_040 == "YOGYAKARTA") {
        cout << "Biaya yang dikeluarkan : Rp " << Yogyakarta << endl;
    } else if (tujuan_040 == "SURABAYA") {
        cout << "Biaya yang dikeluarkan : Rp " << Surabaya << endl;

    } else {
         cout << "Kota tidak ditemukan, silahkan coba lagi" << endl;
    }
    return 0;
}
