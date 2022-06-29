#include <iostream>

using namespace std;

int main()
{
    int suhu_040;

    cout << "Masukkan suhu: ";
    cin >> suhu_040;

    if (suhu_040 <= 0 ) {
        cout << "Pada suhu " << suhu_040 << " derajat Celcius, air berwujud padat (es)" << endl;
    }
        else if (suhu_040 > 0 && suhu_040 < 100 ) {
            cout << "Pada suhu " << suhu_040 << " derajat Celcius, air berwujud cair" << endl;
        }
            else if (suhu_040 >= 100) {
            cout << "Pada suhu " << suhu_040 << " derajat Celcius, air berwujud gas" << endl;
        }
    return 0;
}
