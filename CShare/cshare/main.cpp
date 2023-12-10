#include <iostream>
#include <string>

using namespace std;

int main()
{
    //char coba = 'a';
    //cout << coba << endl;

    //string hehe = "sdad";
    //cout << hehe << endl;

    //int hoho = 123;
    //int haha = 234;
    //int hasil;
    //hasil = hoho + haha;
    //cout << hasil;

    //int p,l,L,K;
    //cout << "Masukkan panjang : ";
    //cin >> p;
    //cout << "Maukkan lebar : ";
    //cin >> l;
    //L = p*l;
    //K = 2*(p+l);
    //cout << "Luas dari persegi panjang adalah " << L << endl;
    //cout << "Keliling dari persegi panjang adalah " << K << endl;

    int kecRata = 100; //km/jam
    int jarak;
    float jarakTot; //km
    float waktu;
    int jam,menit,detik; //jam menit detik / jarak/kecrata / satuan jam
    cout << "Kecepatan rata - rata : 100 km/jam" << endl;
    cout << "Masukkan jarak : ";
    cin >> jarak;
    // /10 -> +30 detik
    jarak = jarak /10;
    jarak = jarak * 30;
    jarakTot = jarak + jarakTot;
    waktu = jarakTot/kecRata;

    jam = (int)waktu;
    menit = (int)waktu % 60;
    detik = (int)waktu % 3600;

    cout << jam << " : " << menit << " : " << detik << endl;

    return 0;
}
