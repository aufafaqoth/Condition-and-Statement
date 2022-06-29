#include <iostream>

using namespace std;

int main()
{
   int pilih_040;
   float s, r, tinggi, phi = 3.14;
   float volume_kubus, luas_lingkaran , volume_silinder;

    cout << "        <<<MENU<<<" << endl;

    cout << "1. Menghitung isi kubus" << endl;
    cout << "2. Menghitung Luas lingkaran" << endl;
    cout << "3. Menghitung isi silinder\n" << endl;
    cout << "Pilih nomor (1-3) :";
    cin >>  pilih_040;
    cout << endl;
     switch (pilih_040) {
        case 1:
            cout << "Panjang sisi kubus ? ";
            cin >> s;
            volume_kubus = s * s* s;
            cout << "Volume kubus = " << volume_kubus;
            break;
        case 2:
            cout << "Panjang jari-jari lingkaran ? ";
            cin >> r;
            luas_lingkaran = phi * r * r;
            cout << "Luas lingkaran = " << luas_lingkaran;
            break;
        case 3:
            cout << "Tinggi silinder ? ";
            cin >> tinggi;
            cout << "Panjang jari-jari silinder ? ";
            cin >> r;
            volume_silinder = tinggi * phi * r* r;
            cout << "Volume silinder = " << volume_silinder;
            break;
        default:
            cout << "Pilihan tidak ada" << endl;
     }

    return 0;
}
