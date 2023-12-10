#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pilihan;
    cout << "Selamat datang di Program Deret Fibonacci\n\n";
    cout << " _______   __   _______      ______     __    __     ____       _______     _______   __ " << endl;
    cout << "|   ____| |  | |   __  \\    /  __  \\   |  \\  |  |   /  _ \\     /  _____|   /  _____| |  |" << endl;
    cout << "|  |      |  | |  |  \\  \\  /  /  \\  \\  |   \\ |  |  /  /_\\ \\   /  /        /  /       |  |" << endl;
    cout << "|  |___   |  | |  |__/  / |  |    |  | |    \\|  | |        | |  |        |  |        |  |" << endl;
    cout << "|   ___|  |  | |   __  <  |  |    |  | |        | |   /\\   | |  |        |  |        |  |" << endl;
    cout << "|  |      |  | |  |  \\  \\ |  |    |  | |  |\\    | |  |  |  | |  |        |  |        |  |" << endl;
    cout << "|  |      |  | |  |__/  /  \\  \\__/  /  |  | \\   | |  |  |  |  \\  \\_____   \\  \\_____  |  |" << endl;
    cout << "|__|      |__| |_______/    \\______/   |__|  \\__| |__|  |__|   \\_______|   \\_______| |__|" << endl;
ulangi:
    cout << "Silahkan pilih metode Fibonacci\n";
    cout << "1. Menggunakan DO WHILE LOOP\n";
    cout << "2. Menggunakan FOR LOOP\n";
    cout << "3. KELUAR DARI PROGRAM\n";
    cout << "Masukkan pilihan Anda : "; cin >> pilihan;

    long long n,fn,fn1,fn2;

    fn = 1;
    fn1 = 1;
    fn2 = 0;

    if (pilihan==1) {
        cout << "\nAnda memilih DO WHILE LOOP!";
        ulangDO:
        cout << "\nMasukkan nilai n : "; cin >> n;
        int i = 1;
        do {
            cout << fn << " ";
            fn = fn1 + fn2;
            fn2 = fn1;
            fn1 = fn;
            i++;
        }while (i<=n);

        int x;
        cout << "\n\nProgram sukses dijalankan!\n";
        ulangpilDO:
        cout << "1. Ulangi\n";
        cout << "2. Keluar dari Program\n";
        cout << "Masukkan pilihan Anda : "; cin >> x;

        if (x==1){
            fn = 1;
            fn1 = 1;
            fn2 = 0;
            goto ulangDO;
        }else if (x==2){
            goto selesai;
        }else{
            cout << "\nNomor yang Anda masukkan salah!\n";
            goto ulangpilDO;
        }
    }else if (pilihan==2){
        cout << "\nAnda memilih FOR LOOP!";
        ulangFOR:
        cout << "\nMasukkan nilai n : "; cin >> n;

        for (int i=1;i<=n;i++){
            cout << fn << " ";
            fn = fn1 + fn2;
            fn2 = fn1;
            fn1 = fn;
        }
        int x;
        cout << "\n\nProgram sukses dijalankan!\n";
        ulangpilFOR:
        cout << "1. Ulangi\n";
        cout << "2. Keluar dari Program\n";
        cout << "Masukkan pilihan Anda : "; cin >> x;

        if (x==1){
            fn = 1;
            fn1 = 1;
            fn2 = 0;
            goto ulangFOR;
        }else if (x==2){
            goto selesai;
        }else{
            cout << "\nNomor yang Anda masukkan salah!\n";
            goto ulangpilFOR;
        }
    }else if (pilihan==3){
        goto selesai;
    }else {
        cout << "\nNomor yang Anda masukkan salah!\n";
        cout << "Silahkan ulangi pilihan!\n";
        cout << endl;
        goto ulangi;
    }
    selesai:
    cout << "\nAnda memilih KELUAR DARI PROGRAM";
    cout << "\nTerima Kasih telah menggunakan Program Saya";
//    cout << "Masukkan nilai n : ";
//    cin >> n;
//    //f(n)=f(n-1) + f(n-2)
//    fn =1 ;
//    fn1 = 1;
//    fn2 = 0;
//    //fn = fn1 + fn2;
//    cout << fn << " ";
//    for (int i=1; i<n; i++) {
//        fn = fn1 + fn2;
//        cout << fn << " ";
//        fn2=fn1;
//        fn1=fn;
//    }

    return 0;
}
