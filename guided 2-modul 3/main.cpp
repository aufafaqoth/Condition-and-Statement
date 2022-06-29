#include <iostream>

using namespace std;

int main()
{
    int nomorHari_040;

    cout << "Masukkan hari (1..7) :";
    cin >>  nomorHari_040;

    switch (nomorHari_040) {
        case 1:
            cout << "Hari Senin" << endl;
            break;
        case 2:
            cout << "Hari Selasa" << endl;
            break;
        case 3:
            cout << "Hari Rabu" << endl;
            break;
        case 4:
            cout << "Hari Kamis" << endl;
            break;
        case 5:
            cout << "Hari Jum'at" << endl;
            break;
        case 6:
            cout << "Hari Sabtu" << endl;
            break;
        case 7:
            cout << "Hari Minggu" << endl;
            break;
        default:
            cout << "Hari tidak ditemukan" << endl;
            break;
        }
    return 0;
}
