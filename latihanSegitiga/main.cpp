#include <iostream>

using namespace std;

int main()
{
    int panjang,x;

    cout << "Masukkan panjang pola: ";
    cin >> panjang;

    cout << "Pola 1\n";
    for (int i=1; i <= panjang ; i++) {
        for (int z=1; z <= i; z ++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 2\n";
    for (int i=1; i <=panjang ; i++) {
        for (int z=panjang; z >= i; z--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 3\n";
    for (int i=1; i <=panjang ; i++) {
        //spasi
        for (int y = 1;y<i;y++){
            cout << " ";
        }
        for(int z=panjang; z >= i; z--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 4\n";
    for (int i=1; i <=panjang ; i++) {
        //spasi
        for (int spasi = panjang ;spasi>i;spasi--){
            cout << " ";
        }
        for(int bintang=1; bintang <= i; bintang++){
            cout << "*";
        }
        cout << endl;;
    }

    cout << "\nPola 5\n";
    for (int i=1; i <=panjang ; i++) {
        //spasi
        for (int spasi = 1 ;spasi<i;spasi++){
            cout << " ";
        }
        //           3              1            3
        for(int bintang=panjang; bintang >= (2*i-panjang); bintang--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 6\n";
    for (int i=1; i <=panjang ; i++) {
        //        spasi = 5         5 > 1
        for (int spasi = panjang ;spasi>i;spasi--){
            cout << " ";
        }
        for(int bintang=1; bintang <= (2*i-1); bintang++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 7.1";
    for (int i=1; i <=panjang ; i++) {
        //spasi
        for (int spasi = panjang+1 ;spasi>i;spasi--){
            cout << " ";
        }
        for(int bintang=2; bintang <= i; bintang++){
            cout << "*";
        }
        for(int bintang2=2; bintang2 <i; bintang2++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=1; i <=panjang ; i++) {
        //spasi
        for (int spasi = 1 ;spasi<i;spasi++){
            cout << " ";
        }
        for(int bintang=panjang; bintang >= i; bintang--){
            cout << "*";
        }
        for(int bintang2=panjang-1; bintang2 >=i; bintang2--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 7.2";
    for (int i=1; i <=panjang ; i++) {
        //         spasi = 6          6 > 3
        for (int spasi = panjang+1 ;spasi>i;spasi--){
            cout << " ";
        }
        //   bintang = 2          4 < 5
        for(int bintang=2; bintang < (2*i-1); bintang++){
            cout << "*";
        }
        cout << endl;
        }
        for (int i=1; i <=panjang ; i++) {
        //spasi
        for (int spasi = 1 ;spasi<i;spasi++){
            cout << " ";
        }
        //           3              1            3
        for(int bintang=panjang; bintang >= (2*i-panjang); bintang--){
            cout << "*";
        }
        cout << endl;
    }

//    int bintang, kecil;
//    cin >> bintang;
//    bintang = bintang*2-1;
//
//    cout << bintang << endl;

    return 0;
}
