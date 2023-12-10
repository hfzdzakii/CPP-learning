#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char arit;

    cout << "Masukkan nilai pertama : ";
    cin >> a;
    cout << "Masukkan operator aritmatika (+,-,*,/) : ";
    cin >> arit;
    cout << "Masukkan nilai kedua : ";
    cin >> b;

    if (arit == '+') {
        hasil = a + b;
        cout << a << " " << arit << " " << b << " = " << hasil << endl;
    } else if (arit == '-') {
        hasil = a - b;
        cout << a << " " << arit << " " << b << " = " << hasil << endl;
    } else if (arit == '*') {
        hasil = a * b;
        cout << a << " " << arit << " " << b << " = " << hasil << endl;
    } else if (arit == '/') {
        hasil = a / b;
        cout << a << " " << arit << " " << b << " = " << hasil << endl;
    } else {
        cout << arit << " bukan operator aritmatika" << endl;
        cout << "Perhitungan error. Code: 4I0XDL" << endl;
    }
    return 0;
}
