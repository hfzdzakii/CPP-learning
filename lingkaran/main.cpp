#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1,y1,x2,y2,jarak,koorx,koory,pers;
    cout << "Masukkan koordinat pertama : ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat kedua : ";
    cin >> x2 >> y2;

    jarak = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    koorx = (x1+x2)/2;
    koory = (y1+y2)/2;
    //pers =

    cout << "\nJarak antara 2 koordinat tersebut adalah " << jarak << endl;
    cout << "Koordinat titik tengah adalah " << koorx << " , " << koory << endl;
    //cout << showpos << "Persamaan lingkaran adalah (x" << koorx << ")^2 + (y" << koory << ")^2 = " << jarak/2 << "^2" << endl;
    if (koorx>0 && koory>0){
        cout << "Persamaan lingkaran adalah (x-" << koorx << ")^2 + (y-" << koory << ")^2 = " << jarak/2 << "^2" << endl;
    }else if (koorx==0 && koory ==0) {
        cout << "x^2 + y^2 = " << jarak/2 << "^2" << endl;
    }
    //std::cout << a << "x^2" << b >= 0? "+" : "" << b<< "x";
    return 0;
}
