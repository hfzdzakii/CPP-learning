#include <iostream>
#include <cmath>

using namespace std;

const float phi = 3.14;

float luas_lingkaran(float jari){
    float hasil;
    hasil = phi * pow(jari,2);
    return hasil;
}
float keliling_lingkaran(float jari){
    float hasil;
    hasil = phi * 2 * jari;
    return hasil;
}

void print_luas(float jari){
    cout << "Luas Lingkaran adalah " << luas_lingkaran(jari) << endl;;
}
void print_keliling(float jari){
    cout << "Keliling lingkaran adalah " << keliling_lingkaran(jari) << endl;
}

int main()
{
    float jarii;
    cout << "Rumus mencari luas dan keliling lingkaran" << endl;
    cout << "masukkan jari - jari lingkaran : ";
    cin >> jarii;

    print_luas(jarii);
    print_keliling(jarii);

    return 0;
}
