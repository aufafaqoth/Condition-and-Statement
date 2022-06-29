#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float pembilang_040, penyebut, hasil;

    cout << "Masukkan bilangan yang akan dibagi: ";
    cin >> pembilang_040;

    cout << "Masukkan bilangan pembagi: ";
    cin >> penyebut;

    hasil = pembilang_040 / penyebut;

   if (pembilang_040 != 0 && penyebut != 0){
        cout << setiosflags (ios::fixed);
        cout << "Hasil bagi : " << setprecision (2) << hasil << endl;
   } else if (pembilang_040 != 0 && penyebut == 0 || pembilang_040 == 0 && penyebut != 0 ){
        cout << "Hasil bagi :  \n\n'Bilangan yang dimasukkan tidak boleh 0'" << endl;
   }
    return 0;
}
