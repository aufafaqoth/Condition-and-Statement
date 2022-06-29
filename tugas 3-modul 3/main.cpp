#include <iostream>

using namespace std;

int main()
{
    int kategori_040, mata, jantung;
    string katarak, Plus_Minus, Silinder;
    string Jantung_Koroner, Katup_jantung, Otot_Jantung;

    cout << "<< MENU MENGHITUNG BIAYA OPERASI >>" << endl;

    cout << "1. Hitung Biaya Operasi Mata\n";
    cout << "2. Hitung Biaya Operasi Jantung\n";
    cout << "\nMasukkan pilihan : ";
    cin >> kategori_040;

    if (kategori_040 == 1){
            cout << "\nJENIS PENYAKIT MATA\n";
            cout << "1. Katarak\n";
            cout << "2. plus/Minus\n";
            cout << "3. Silinder\n";
            cout << "\nMasukkan jenis penyakit mata : ";
            cin >> mata;

        katarak = "Rp 7.500.000";
        Plus_Minus = "Rp. 5.000.000";
        Silinder = "Rp. 4.000.000";

        switch (mata){
            case 1:
                cout << "Biaya Operasi Mata Katarak = " << katarak << endl;
                break;
            case 2:
                cout << "Biaya Operasi Mata Plus/Minus = "  << Plus_Minus << endl;
                break;
            case 3:
                cout << "Biaya Operasi Mata Silinder = " << Silinder << endl;
                break;
            default:
                cout << "---ERROR---" << endl;
    }

  }      else if (kategori_040 == 2){
                cout << "\nJENIS PENYAKIT JANTUNG\n";
                cout << "1. Jantung Koroner\n";
                cout << "2. Katup Jantung\n";
                cout << "3. Otot Jantung\n";
                cout << "\nMasukkan jenis penyakit jantung : ";
                cin >> jantung;

        Jantung_Koroner = "Rp. 500.000.000";
        Katup_jantung = "Rp. 350.000.000";
        Otot_Jantung = "Rp. 450.000.000";

        switch (jantung){
            case 1:
                cout << "Biaya Operasi Mata Jantung Koroner = " << Jantung_Koroner << endl;
                break;
            case 2:
                cout << "Biaya Operasi Mata Katup Jantung = "  << Katup_jantung << endl;
                break;
            case 3:
                cout << "Biaya Operasi Mata Otot Jantung = " << Otot_Jantung << endl;
                break;
            default:
                cout << "---ERROR---" << endl;
    }
   }    else {
            cout << "---ERROR---" << endl;
    }
    return 0;
}
