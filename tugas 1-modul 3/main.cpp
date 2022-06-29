#include <iostream>

using namespace std;

int main()
{
    char huruf_040;

    cout << "Masukkan Huruf : ";
    cin >> huruf_040;

    if (huruf_040 == 'a','i', 'u', 'e', 'o') {
        cout << huruf_040 << " adalah salah satu huruf vokal" << endl;
    }
    return 0;
}
