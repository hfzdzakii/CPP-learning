#include <iostream>
using namespace std;

int faktorial(int a){
    if(a<=1){
        return a;
    }else{
        return faktorial(a-1) + faktorial((a-2));
    }
}

int main()
{
    cout << "== SELAMAT DATANG DI PROGRAM FAKTORIAL ==" << endl;
    int a;
    cout << "Masukkan bilangan faktorial : ";
    cin >> a;
    cout << "Nilai dari " << a << "\! adalah " << faktorial(a) << endl;
    return 0;
}
