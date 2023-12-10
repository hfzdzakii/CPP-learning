#include <iostream>
using namespace std;

int fibonacci(int a){
    int n=1,n1=1,n2=0;
    for(int i=1; i<a; i++){
        cout << n << " ";
        n = n1 + n2;
        n2 = n1;
        n1 = n;
    }
    return n;
}

int fibonaccc(int b){
    if(b<=1){
        return b;
    }else{
        cout << b << " ";
        return 1 + fibonaccc(b-1);
    }
}

int main()
{
    cout << "=== SELAMAT DATANG DI PROGRAM FIBONACCI 2.0 ===" << endl;
    int n;
    cout << "Masukkan deret fibonacci ke-n : ";
    cin >> n;
    cout << fibonacci(n) << endl;
    cout << fibonaccc(n) << endl;


    return 0;
}
