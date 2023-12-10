#include <iostream>
#include <array>

using namespace std;
int main()
{
    cout << "PROGRAM MENAMPILKAN GRAFIK NILAI" << endl;
    array<int,10>nilai;
    cout << "Ukuran Array : " << nilai.size() << endl;

    for(int i=0;i<=nilai.size();i++){
        cout << "Siswa yang mendapat nilai " ;
        if(i!=10){
            cout << i*10 << " - " << i*10+9 << " : ";
        }else{
            cout << i*10 << " : ";
        }
        cin >> nilai[i];
    }

    cout << endl;
    for(int i=0;i<=nilai.size();i++){
        if(i!=10){
            cout << i*10 << " - " << i*10+9 << " : ";
        }else{
            cout << i*10 << "     : ";
        }
        for(int bintang=0;bintang<nilai[i];bintang++){
            cout << " *";
        }
        cout << endl;
    }
    cout << "Selesai" << endl;

    return 0;
}
