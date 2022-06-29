#include <iostream>

using namespace std;

int main()
{
    int bilangan_040;

    cout << "Masukkan bilangan: ";
    cin >> bilangan_040;

    if (bilangan_040 > 0) {
        cout << "Bilangan " << bilangan_040
             << " adalah bilangan positif" << endl;
    } else if (bilangan_040) {
        cout << "Bilangan " << bilangan_040
             << " adalah bilangan negatif " << endl;

    } else if (bilangan_040 == 0) {
        cout << "Bilangan nol"  << endl;

    }
    /*
        > --> lebih dari
        < --> kurang dari
        >= --> lebih dari sma dengan
        <= --> kurang dari sma dengan
        == --> sama dengan  --> pengecekan apakah nilai sama?
        != --> tidk sama dengan

        x = 1 -> mengisi nilai ke var
        x == 1 -> apakah x bernilai 1?
    */

    return 0;
}
