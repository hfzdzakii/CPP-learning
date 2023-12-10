#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <array>
#include <algorithm>
#include <bitset>
#include <fstream> //punya 3 anak. ofstream, ifstream, fstream
//                                 output    input     gabungan mereka
/*include -> file iostream di dalam OS windows diperintahkan copy sana, masukkan ke sini. Karena C++ itu langsung menargetkan ke program OS.
Lalu, ditampilkan ke CMD untuk di Windows.
*/

using namespace std;//std berhubungan dengan iostream

//FORMAT FUNGSI DENGAN KEMBALIAN
//tipe-data nama-fungsi(daerah-input){
//  daerah body
//  perhitungan bisa, statemen bisa, dll;   //DAERAH-INPUT AKAN MASUK STATEMENT
//  return hasil;                           //RETURN HASIL AKAN MASUK KE NAMA-FUNGSI
//}
//INTINE, NEK WIS BERES, FOKUS WAE === NING NAMA-FUNGSI() ===

int kuadrat(int aj){
    int ak;
    ak = aj*aj;
    return ak;
}

int tambah(int an, int ao){
    int ap;
    ap = an + ao;
    return ap;
}

//FORMAT FUNGSI TANPA KEMBALIAN aka VOID
//void nama-fungsi(daerah-input){
//  daerah body
//  perhitungan bisa, statemen bisa, dll;   //DAERAH-INPUT AKAN MASUK STATEMENT
//}
//INTINE, NEK WIS BERES, FOKUS WAE === NING NAMA-FUNGSI() ===
//VOID, TANPA MELAKUKAN PERHITUNGAN

void tampilkan(int aT){
    cout << aT << endl;
}

int persamaan(int au){
    int ax;
    //2x^2 + 5x + C
    ax = 2*pow(au,2) + 5*au + 3;
    return ax;
}

int awok = 15; //INI ADALAH GLOBAL SCOPE
//KARENA BISA DIAKSES DARI MANA SAJA
int panggilGlobal(){
    return awok;
}

//FUNGSI REKURSIF FINITE 1
int rekursifTerbatas(int ba=1, int bb=1){
    int a = ba;
    for(int i=1; i<bb; i++){
        a = a * ba;
    }
    return a;
}
//FUNGSI REKURSIF FINITE 2
int pangkatRekursif(int be=1, int bf=1){
    if(bf <= 1){
        return be;
    }else {
        return be * pangkatRekursif(be,(bf-1));
    }
}

//FUNGSI MENGGUNAKAN POINTER, BISA LEBIH HEMAT MEMORI
void fungsiPtr(int *bm){
    cout << " Nilai dari bk : " << *bm << endl;
    cout << "Alamat dari bk : " << bm << endl;
}
void kuadratPtr(int *valPtr){
    *valPtr = (*valPtr)*(*valPtr);
    cout << " Nilai kuadrat dari bk : " << *valPtr << endl;
    cout << "Alamat kuadrat dari bk : " << valPtr << endl;
}

//FUNGSI MENGGUNAKAN REFERENCE, BISA LEBIH RAPI
void fungsiRfc(int &bn){
    cout << " Nilai dari bn : " << bn << endl;
    cout << "ALamat dari bn : " << &bn << endl;
}
void kuadratRfc(int &valRfc){
    valRfc = valRfc * valRfc;
    cout << " Nilai kuadrat dari bo : " << valRfc << endl;
    cout << "Alamat kuadrat dari bo : " << &valRfc << endl;
}

//MENGGUNAKAN FUNGSI UNTUK MENAMPILKAN ARRAY MULTIDIMENSI
void arrayMD(int *arrayPTR, int baris, int kolom){
    int indeks = 0;
    for(int i=0; i<baris; i++){
        for(int j=0; j<kolom; j++){
            cout << *(arrayPTR + indeks) << " ";
            indeks++;
        }
        cout << endl;
    }
}

//MENGGUNAKAN FUNGSI UNTUK MENAMPILKAN ARRAY MULTIDIMENSI 2
const int barriss = 3;
const int kollomm = 2;
void arrayMD2(array<array<int,kollomm>,barriss>bw){
    for(array<int,kollomm>vectorBaris : bw){
        for(int nilaiKolom : vectorBaris){
            cout << nilaiKolom << " ";
        }
    cout << endl;
    }
}

//BANTUAN MENGPRINT ARRAY 1 DIMENSI
const size_t isi = 10;
void printArray(array<int,isi>angka){
    cout << "Array : ";
    for(int a:angka){
        cout << a << " ";
    }
    cout << endl;
}
void printArray(array<char,isi>huruf){
    cout << "Char  : ";
    for(char a:huruf){
        cout << a << " ";
    }
    cout << endl;
}

//STRUCT NIHH
struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

//NESTING STRUCT NIHH
struct aktor{
    string nama;
    int tahun_lahir;
};
struct film{
    string judul;
    string genre;
    int tahun;
    //LETAKKAN STRUCT NEST DI SINI
    aktor pemeran_1;
    aktor pemeran_2;
};

//UNION SEKARANG
union data{
    int a;
    char b[4];
};

//ENUM -> NILAI FIKS KITA YANG MENJABARKAN
enum warna{merah, putih, hitam, coklat=6, kuning, biru};

//BITWISE NIH BOSSS
void printBiner(unsigned short val, string nama){
    cout << nama << " = " << bitset<8>(val) << endl;
}

int main() //int main() -> main body,tempat semua kode ditulis :(
{

    //PRINTING COUT SEKALIAN CIN
    //cout = console out | print :/ endl = mengakhiri baris.
    //cin = console input
    cout << "Hello world!" << endl; //endl : mengakhiri kalimat, bikin baris baru.

    cout << "Halo Halo"; //tidak ada endl, nyambung di sebelah.
    cout << " Bandung" << endl; //"spasi" juga akan diprint.

    //Penggunaan Karakter
    cout << "Topi saya \n"; // 1. \n : membuat baris baru, tanpa endl.
    cout << "bundar\n";

    cout << "Bintang\0 kecil di langit " << endl; // 2. \0 : karakter kosong gak bisa buat lagi setelahnya.
    cout << "\0 Bintang kecil di langit" << endl; //         Bikin jadi kosong deh.

    cout << "Aku mendapat \"hadiah spesial\" dan \'salam spesial\'" <<endl; // 3. \" dan \' biar gak rancu sama deklrasi variabel string kasih "\"
    cout << "Coba ini? \? \\/sama  \\ \n" << endl; // yabegitulah \? dan \\ biar gak rancu

    //VARIABEL DAN DEKLARASI
    int a1 = 1; //Deklarasi variabel a dengan kategori integer berisi nilai 1.
    cout << a1 << endl;

    int a2; //Cara lain untuk mendeklarasi sebuah pernyataan.
    a2 = 2;
    cout << "\n" << a2 << "\n" << endl;

    //Cara lain deklarasi
    int b;
    cout << "Masukkan nilai : "; //Pakai "cin" console input
    //cin >> b;
    cout << "Nilai yang anda masukkan adalah : " << b << endl;

    string ac;
    cout << "Siapa namamu?" << endl;
    //getline(cin, ac);
    cout << "Halo, " << ac << endl;

    //TIPE DATA FUNDAMENTAL

    //INTEGER (BILANGAN BULAT)
    int c = 999;
    cout << "\nContoh Integer : " << c << endl;
    cout << "Nilai dari Integer di atas = " << sizeof(c) << " Byte" << endl;
    cout << "Ukuran dari Integer di atas = " << sizeof(c)*8 << " Bit" << endl;
    cout << "Nilai maksimal Integer = "<< numeric_limits<int>::max() <<endl;
    cout << "Nilai minimum Integer = "<< numeric_limits<int>::min() <<endl;

    //LONG (BILANGAN BULAT)
    long long d = 123;
    cout << "\nContoh Long : " << d << endl;
    cout << "Nilai dari Long di atas = " << sizeof(d) << " Byte" << endl;
    cout << "Ukuran dari Long di atas = " << sizeof(d)*8 << " Bit" << endl;
    cout << "Nilai maksimal Long = "<< numeric_limits<long long>::max() << endl;
    cout << "Nilai minimum Long = "<< numeric_limits<long long>::min() << endl;

    //SHORT (BILANGAN BULAT)
    short e = 321;
    cout << "\nContoh Short : " << e << endl;
    cout << "Nilai dari Short di atas = " << sizeof(e) << " Byte" << endl;
    cout << "Ukuran dari Short di atas = " << sizeof(e)*8 << " Bit" << endl;
    cout << "Nilai maksimal Short = "<< numeric_limits<short>::max() << endl;
    cout << "Nilai minimum Short = "<< numeric_limits<short>::min() << endl;

    //FLOAT (BILANGAN DESIMAL)
    float f = 13.54;
    cout << "\nContoh Float : " << f << endl;
    cout << "Nilai dari Float di atas = " << sizeof(f) << " Byte" << endl;
    cout << "Ukuran dari Float di atas = " << sizeof(f)*8 << " Bit" << endl;
    cout << "Nilai maksimal Float = "<< numeric_limits<float>::max() << endl;
    cout << "Nilai minimum Float = "<< numeric_limits<float>::min() << endl;

    //DOUBLE (BILNGAN DESIMAL)
    double g = 3.94;
    cout << "\nContoh Double : " << g << endl;
    cout << "Nilai dari Double di atas = " << sizeof(g) << " Byte" << endl;
    cout << "Ukuran dari Double di atas = " << sizeof(g)*8 << " Bit" << endl;
    cout << "Nilai maksimal Double = "<< numeric_limits<double>::max() << endl;
    cout << "Nilai minimum Double = "<< numeric_limits<double>::min() << endl;

    //CHARACTER (STRING)
    char h = 'z';
    cout << "\nContoh Char : " << h << endl;
    cout << "Nilai dari Char di atas = " << sizeof(h) << " Byte" << endl;
    cout << "Ukuran dari Char di atas = " << sizeof(h)*8 << " Bit" << endl;
    cout << "Nilai maksimal Char = "<< numeric_limits<char>::max() << endl;
    cout << "Nilai minimum Char = "<< numeric_limits<char>::min() << endl;

    //BOOLEAN (TRUE OR FALSE)
    bool i = true;
    cout << "\nContoh Boolean : " << i << endl;
    cout << "Nilai dari Boolean di atas = " << sizeof(i) << " Byte" << endl;
    cout << "Ukuran dari Boolean di atas = " << sizeof(i)*8 << " Bit" << endl;
    cout << "Nilai maksimal Bolean = "<< numeric_limits<bool>::max() << endl;
    cout << "Nilai minimum Boolean = "<< numeric_limits<bool>::min() << endl;

    string j = "Halo!!";
    cout << "\nContoh String : " << j << endl;
    cout << "Nilai dari String di atas = " << sizeof(j) << " Byte" << endl;
    cout << "Ukuran dari String di atas = " << sizeof(j)*8 << " Bit" << endl;
    cout << "Nilai maksimal String = " << numeric_limits<string>::max() << endl;
    cout << "Nilai minimum String = " << numeric_limits<string>::min() << endl;

    //ARITMATIKA
    short k = 5;
    short l = 6;
    short hasil;

    float kq = (float)k;
    float hasilq = (float)hasil;

    //OPERATOR ARITMATIKA | + | - | * | / | % |
    cout << "\nOPERATOR ARITMATIKA" << endl;

    //PENJUMLAHAN
    hasil = k+l;
    cout << "Contoh Operator Penjumlahan : " << endl;
    cout << k << " + " << l << " = " << hasil << endl;

    //PENGURANGAN
    hasil = k-l;
    cout << "Contoh Operator Pengurangan : " << endl;
    cout << k << " - " << l << " = " << hasil << endl;

    //PERKALIAN
    hasil = k*l;
    cout << "Contoh Operator Perkalian : " << endl;
    cout << k << " * " << l << " = " << hasil << endl;

    //PEMBAGIAN
    hasilq = kq/l;
    cout << "Contoh Operator Pembagian : " << endl;
    cout << kq << " / " << l << " = " << hasilq << endl;

    //MODULUS
    hasil = l%k;
    cout << "Contoh Operator Modulus : " << endl;
    cout << l << " % " << k << " = " << hasil << "\n" << endl;

    //ALUR PERHITUNGAN MATEMATIKA
    //SESUAI () -> * -> / -> + -> -
    //KURUNG, KALI BAGI, TAMBAH KURANG

    //KOMPARASI DAN RELASI
    short m = 90;
    short n = 90;
    short o = 80;
    bool hasil1, hasil2;

    //KOMPARASI SEBANDING
    cout << (m==n) << endl; //Tanda "==" artinya, sebanding.
    //Kode diatas menghasilkan output nilai 1. Dalam Boolean, 1 menandakan nilai tertinggi, yang artinya "TRUE"
    cout << (m==o) << "\n" << endl;
    //Kode diatas menghasilkan output nilai 0. Dalam Boolean, 0 menandakan nilai minimum, yang artinya "FALSE"

    //KOMPARASI TIDAK SEBANDING
    cout << (m!=n) << endl; //Tanda "!=" artinya, tidak sebanding
    //Kode diatas menghasilkan output nilai 0. Dalam Boolean, 0 menandakan nilai minimum, yang artinya "FALSE"
    cout << (n!=o) << "\n" << endl;
    //Kode diatas menghasilkan output nilai 1. Dalam Boolean, 1 menandakan nilai tertinggi, yang artinya "TRUE"

    //YABEGITULAH
    //LEBIH DARI (>)    |   LEBIH DARI SAMA DENGAN (>=)
    //KURANG DARI (<)   |   KURANG DARI SAMA DENGAN (<=)

    //OPERATOR LOGIKA.
    //NOT | AND | OR

    short p = 4;
    short q = 7;


    bool r1 = (p==4);
    cout << r1 << endl;
    //OPERATOR LOGIKA NOT DIKENAL JUGA DENGAN NEGASI
    bool r2 = !(p==4);
    cout << r2 << "\n" << endl;

    //OPERATOR LOGIKA AND
    //Kalau AND, semua pernyataan harus "Benar" agar mendapat nilai "True"
    cout << "Dalam Logika AND, didapatkan :" << endl;
    bool r3;
    r3 = (p==4) && (q==7); //Operator logika AND bisa digunakan "&&" atau "and"
    cout << "1. Dengan pernyataan \"True and True\", akan menghasilkan nilai " << r3 << endl;
    r3 = (p==1) && (q==7);
    cout << "1. Dengan pernyataan \"False and True\", akan menghasilkan nilai " << r3 << endl;
    r3 = (p==4) && (q==1);
    cout << "1. Dengan pernyataan \"True and False\", akan menghasilkan nilai " << r3 << endl;
    r3 = (p==2) && (q==5);
    cout << "1. Dengan pernyataan \"False and False\", akan menghasilkan nilai " << r3 << endl;

    //OPERATOR LOGIKA OR
    //Kalau OR, minimal salah satu pernyataan harus "benar" agar mendapat nilai "True"
    cout << "\nDalam Logika OR, didapatkan :" << endl;
    bool r4;
    r4 = (p==4) || (q==7); //Operator logika OR bisa digunakan "||" atau "or"
    cout << "1. Dengan pernyataan \"True and True\", akan menghasilkan nilai " << r4 << endl;
    r4 = (p==1) || (q==7);
    cout << "1. Dengan pernyataan \"False and True\", akan menghasilkan nilai " << r4 << endl;
    r4 = (p==4) || (q==1);
    cout << "1. Dengan pernyataan \"True and False\", akan menghasilkan nilai " << r4 << endl;
    r4 = (p==2) || (q==5);
    cout << "1. Dengan pernyataan \"False and False\", akan menghasilkan nilai " << r4 << endl;

    //IF STATEMENT
    //Statement JIKA
    short s;
    short t;

    //cout << "\nMasukkan angka pertama : ";
    //cin >> s;
    //if (s == 3) {//(kondisi, jika true, maka menjalankan statement. Jika false. tidak menjalankan) Operator logika bisa digunakan disini
                 //Pakai <, >, <=, >=, ==, !=, dll
        //Di dalam kurung kurawal, isi dengan Statement
        //cout << "True, ngisi angka " << s << endl;
    //} //else {//ELSE | Statemant KALAU | Dilakukan apabila IF == false
        //cout << "False, ngisi angka " << s << endl;
    //}

    //cout << "\nMasukkan angka kedua : ";
    //cin >> t;
    //if (t == 4) {
        //cout << "True, ngisi angka " << t << endl;
    //} else if (t == 5) { //Di ELSE IF, boleh diisi dengan kondisi lain. Arinya sama kaya nambah IF
        //cout << "True, ngisi angka " << t << endl;
    //} else if (t==6) {
        //cout << "True, ngisi angka " << t << endl;
    //} //else {//ELSE | Statemant KALAU | Dilakukan apabila IF == false
        //cout << "Bukan 4, 5, 6" << endl;
    //}

    cout << "\nSelesai\n" << endl;

    //SWITCH CASE -> Percabangan selain IF Statement
    int u;

//    cout << "Masukkan nilai : ";
//    cin >> u;
//
//    switch (u) {
        //yang di dalam kurung bisa suatu kondisi / variabel. Tapi mending variabel. Soalnya, kalo kondisi, mending pakai IF Statement
        //Cara kerja switch case, kalau 1 benar, maka akan dijalankan semuanya kebawahnya
        //Kalau tidak ada yang True dalam switch, maka langsung berakhir.
        //case 5:
        //Kondisinya bisa disesuaikan dengan case nya
//            cout << "Benar itu adalah 5" << endl;
//            break; //Break, akan menghentikan switch case, langsung masuk akhir program | CONTROL FLOW
//        case 4:
//            cout << "Benar itu adalah 4" << endl;
//        case 3:
//            cout << "Benar itu adalah 3" << endl;
//        case 2:
//            cout << "Benar itu adalah 2" << endl;
//        case 1:
//            cout << "Benar itu adalah 1" << endl;
//            break;
//        case 0:
//            cout << "Benar itu adalah 0" << endl;
//        default : //Istilah "ELSE" dalam Switch Case
//            //ingat, kalau ditaruh bawah, akan tetep ter print kalau atasnya benar
//            cout << "Kamu nulis " << u << endl;
//    }

    cout << "\nSelesai\n" << endl;

    //OPERATOR ASSIGNMENT

    //Contoh assignment standar
    int v = 1;

    //Contoh manpulasi variabel
    //variabel = variabel operator ekspresi
    //   v     =     v       +        9

    //cara di atas, bisa dibuat lebih tricky dengan cara:
    //variabel operator= ekspresi
    //   v            +=    9

    cout << "Nilai awal v = " << v << endl;
    v += 9;
    cout << "Setelah v dimanipulasi, nilai v menjadi ";
    cout << v << "\n" << endl;

    cout << "Nilai awal v = " << v << endl;
    v -= 9;
    cout << "Setelah v dimanipulasi, nilai v menjadi ";
    cout << v << "\n" << endl;

    cout << "Nilai awal v = " << v << endl;
    v *= 9;
    cout << "Setelah v dimanipulasi, nilai v menjadi ";
    cout << v << "\n" << endl;

    cout << "Nilai awal v = " << v << endl;
    v /= 9;
    cout << "Setelah v dimanipulasi, nilai v menjadi ";
    cout << v << "\n" << endl;

    cout << "Nilai awal v = " << v << endl;
    v %= 9;
    cout << "Setelah v dimanipulasi, nilai v menjadi ";
    cout << v << "\n" << endl;

    //INCREMENT DAN DECREMENT

    //PRE INCREMENT & POST INCREMENT
    // SEBELUM & SESUDAH
    int w = 5;
    int x = 5;

    //POST INCREMENT
    cout << "Nilai awal w adalah " << w << endl;
    //w = w + 1 | Tapi bisa disingkat menjadi
    cout << w++ << endl; //print dulu, baru ditambah 1
    cout << "Setelah di-PostIncrement, nilai w menjadi " << w << endl << endl;
    //Kalau POST DECREMENT | w--

    //PRE INCREMENT
    cout << "Nilai awal x adalah " << x << endl;
    cout << ++x << endl; //ditambah dulu, baru print
    cout << "Setelah di-PreIncrement, nilai x menjadi\n" << x << "\n" << endl;
    //Kalau PRE DECREMENT | --w

    //LOOPING
    //WHILE LOOPING -> Cek syarat dulu, baru lakukan aksi
    int y = 1;
    while (y <= 3) {
        //Dalam kurung adalah syarat dalam bentuk boolean
        //Dalam kurung kurawal isi aksi
        cout << "hore " << y << endl;
        y++;
        //Selama tidak ada yang membatasi, akan looping terus
    }
    cout << "Selesai\n" << endl;

    //DO WHILE LOOPING -> Lakukan aksi dulu, baru cek syarat
    int z = 1;
    do {
        //Aksi masukan kurung kurawal
        //Buat syarat False agar looping berhenti
        cout << "Hore " << z << endl;
        z++;
    } while (z <= 3);
          //Syarat masukkan di dalam kurung
    cout << "Selesai\n" << endl;

    //FOR LOOPING -> paling umum dipake lah
    cout << "Looping ini menggunakan Increment:" << endl;
    for (int aa = 1; aa <=3; aa++) {
        //Format dalam kurung (inisialisasi; loop kondisi; increment/decrement/assignment operator)
        //Aksi di dalam kurung kurawal
        cout << "Hore" << aa << endl;
    }
    cout << "Looping ini menggunakan Assignment Operator" << endl;
    for (int ab = 2; ab <=6; ab+=2) {
        //Format dalam kurung (inisialisasi; loop kondisi; increment/decrement/assignment operator)
        //Aksi di dalam kurung kurawal
        cout << "Hore" << ab << endl;
    }
    cout << "Looping ini menggunakan Decrement" << endl;
    for (int ac = 10; ac > 7; ac--) {
        //Format dalam kurung (inisialisasi; loop kondisi; increment/decrement/assignment operator/compound(optional))
        //Aksi di dalam kurung kurawal
        cout << "Hore" << ac << endl;
    }
    cout << "Loop ini memiliki Compund" << endl;
    int konz = 1;
    for (int ad = 1; ad <= 3; ad++, konz-=ad) {
        //Format dalam kurung (inisialisasi; loop kondisi; increment/decrement/assignment operator,compound(optional))
        //Aksi di dalam kurung kurawal
        cout << "Hore" << ad << " || " << konz <<endl;
    }
    cout << "Selesai\n" << endl;

    //BREAK AND CONTINUE / CONTROL FLOW
    cout << "Loop ini menggunakan BREAK" << endl;
    cout << "BREAK akan menghentikan loop" << endl;
    for (int ae = 1; ae <= 10; ae++){
        if (ae==5) {
            break; //BREAK akan menghentikan loop.
        }
        cout << "Hoho " << ae << endl;
    }
    cout << "Selesai\n" << endl;

    cout << "Loop ini menggunakan BREAK" << endl;
    cout << "CONTINUE akan menskip kondisi if" << endl;
    for (int ae = 1; ae <= 10; ae++){
        if (ae==5) {
            continue; //CONTINUE akan menskip kondisi if
        }
        cout << "Hoho " << ae << endl;
    }
    cout << "Selesai\n" << endl;

    //Coba CONTROL FLOW menggunakan WHILE LOOP
    int af = 1;
    while (af <= 10) {
        af++; //Hati hati karena tricky di Increment-nya
        if (af==5){
            continue;
        }
        cout << "Hihi " << af << endl;
    }
    cout << "Selesai\n" << endl;

    //FUNGSI / FUNCTION / METHOD
    //Menggunakan standart memory
    //Conoh, <iostream>, <cmath>
    cout << "Mencoba menggunakan library <cmath>" << endl;
    int ag = 144, ah = 2, ai = 90;
    cout << "Akar dari " << ag << " adalah " << sqrt(ag) << endl;
    cout << "Nilai dari "<< ah << " pangkat 5 adalah " << pow(ah,5) << endl;
    cout << "Nilai dari Sin " << ai << " adalah " << sin(ai) << " dan Cos " << ai << " adalah " << cos(ai) << endl << endl;

    //FUNGSI DENGAN KEMBALIAN (RETURN)
    //CARA MEMBUAT FUNGSI (NEK NING PYTHON KAE JENENGE DEF), ITU BERADA DI ATAS INT MAIN
    //DI DALAM IN MAINT BISA, TAPI ADA CARANYA
    int al,am,aq,ar,as;
    cout << "Nilai kuadrat dari : ";
    //cin >> al;
    am = kuadrat(al);
    cout << am << endl;

    cout << "Nilai tambah dari : ";
    //cin >> aq >> ar;
    as = tambah(aq,ar);
    cout << as << endl << endl;

    //FUNGSI TANPA KEMBALIAN (TANPA RETURN) AKA VOID
    //KONSEPNYA SAMA KAYA RETURN
    int ax,ay;
    cout << "Nilai dari persamaan (2x^2 + 5x + 3) : ";
    //cin >> ax ;
    ay = persamaan(ax);
    tampilkan(ay);

    //PROTORYPE FUNGSI

    //GLOBAL LOKAL BLOCK SCOPING{}
    //GLOBAL SCOPE
    //GLOBAL SCOPE BERADA DI LUAR INT MAIN
    cout << endl << "1. Variabel ini berada di Global Scope : " << awok << endl; //AWOK INI BERADA DI GLOBAL SCOPE
    //INI VARIABEL LOKAL MAIN, BERADA DI DALAM INT MAIN()
    int awok = 8;
    cout << "2. Variabel ini berada di Local Scope : " << awok << endl; //AWOK INI DAPAT TER-RE-DEKLARASI KARENA ADA VARIABEL LOKAL DI MAIN
    //UNTUK MEMANGGIL AWOK YANG GLOBAL SCOPE, MAKA PERLU FUNCTION RETURN ATAU ::(nama_variabel)
    cout << "Memanggil Global Scope dapat menggunakan Function Return" << endl;
    cout << "3. Memanggil Global Scope yang telah ter-re-deklarasi oleh Local Scope : ";
    cout << panggilGlobal() << endl;
    cout << "4. Memanggil Local Scope lagi : " << awok << endl;
    //MEREKA, LOCAL DAN GLOBAL TIDAK SALING MERUBAH, MENIMPA, ATAU MENG-REDEKLARASI 1 SAMA LAIN
    //BLOCK SCOPE MENGGUNAKAN KURUNG KURAWAL {}
    cout << "5. Memanggil Block Scope tapi di luar atas Block Scope : " << awok << endl;
    {
        //INI ADALAH BLOCK SCOPE
        int awok = 5;
        cout << "6. Memanggil Block Scope tapi di didalam Block Scope : " << awok << endl;
        cout << "7. Sanz masih bisa ambil Global Scope di dalam Block Scope : " << ::awok << endl;
    }
    cout << "8. Memanggil Block Scope tapi di luar bawah Block Scope : " << awok << endl;

    //OVERLOADING FUNCTION
    //DEFAULT VALUE FUNCTION

    //FUNGSI REKURSIF / RECURSION FUNCTION (MENGULANG SI FUNGSI)
    int bc=1, bd=1;
    cout << "\nMasukkan angka : ";
    //cin >> bc;
    cout << "Masukkan pangkat : ";
    //cin >> bd;
    cout << "Hasil perpangkatan adalah " << rekursifTerbatas(bc,bd) << endl;
    cout << "Cara lain, Hasil perpangkatan adalah " << pangkatRekursif(bc,bd) << endl;

    //POINTER
    //KALO PAKE FUNCTIONN, AKAN MEMAKAN LEBIH BANYAK MEMORI
    int bg = 101;
    int bh;
    //POINTERNYA NIH
    int *bgPtr = &bg;
    int *bhPtr = nullptr;
    cout << "\nNilai dari bg : " << bg << endl;
    //DENGAN PAKE &VARIABEL, BISA TAHU PENGALAMATAN VARIABEL DI DALAM MEMORI
    cout << "Alamat dari bg : " << &bg << endl;
    cout << "Menggunakan pointer, alamat bg : " << bgPtr << endl;
    //NYARI ALAMAT KOSONG NIH
    cout << "Alamat milik *bhPtr adalah kosong : " << bhPtr << endl;
    //BISA NARUH ALAMAT KE ALAMAT KOSONG
    bhPtr = &bg;
    cout << "Alamat *bhPtr setelah ditempati oleh bg sekarang adalah : " << bhPtr << endl;
    //MENGAMBIL NILAI DARI ALAMAT
    cout << "Nilai dari alamat *bhPtr adalah : " << *bhPtr << endl << endl;

    //REFERENCE
    //MEMBUAT VARIABEL YANG MENUNJUK ALAMAT VARIABEL LAIN
    int bi = 5;
    cout << " Nilai dari bi adalah " << bi << endl;
    cout << "Alamat dari bi adalah " << &bi << endl;
    //MENG-REFERENCE AGAR BJ MENUNJUK ALAMAT MILIK BI
    int &bj = bi;
    cout << " Nilai dari bj setelah reference adalah " << bj << endl;
    cout << "Alamat dari bj setelah reference adalah " << &bj << endl;
    //KARENA SUDAH DI-REFERENCE, MAKA NILAI BJ DAN BI SUDAH CONNECT
    //APABILA SALAH SATU VARIABEL BERUBAH NILAI, MAKA YANG LAIN IKUT BERUBAHH NILAINYA
    bj=90;
    cout << "Nilai dari bi dan bj setelah ganti nilai adalah " << bi << " dan " << bj << endl;
    cout << "Alamat dari bi dan bj adalah " << &bi << " dan " << &bj << endl << endl;

    //FUNGSI MENGGUNAKAN POINTER
    int bk = 10;
    cout << " Nilai dari bk : " << bk << endl;
    cout << "Alamat dari bk : " << &bk << endl;
    cout << "=== Menggunakan Fungsi Pointer ===" << endl;
    fungsiPtr(&bk);//KARENA POINTER, KITA MAINNYA ALAMAT
    cout << "=== Mencoba Fungsi Kuadrat Pointer ===" << endl;
    kuadratPtr(&bk);

    //FUNGSI MENGGUNAKAN REFERENCE
    //LEBIH RAPI NIH
    int bl = 9;
    cout << "\n Nilai dari bl : " << bl << endl;
    cout << "Alamat dari bl : " << &bl << endl;
    int &bm = bl;
    cout << "=== Setelah Melakukan Reference ===" << endl;
    cout << " Nilai dari bm : " << bm << endl;
    cout << "ALamat dari bm : " << &bm << endl;
    cout << "=== Setelah Fungsi Reference ===" << endl;
    fungsiRfc(bl);
    cout << "=== Mencoba Fungsi Kuadrat Reference ===" << endl;
    kuadratRfc(bl);

    //ARRAY YEEEE
    //MEMBUAT ARRAY ADA 2 CARA:
    //1. MENDEKLARASI ARRAY
    int bp[5];
    bp[0] = 1;
    bp[1] = 2;
    bp[2] = 3;
    bp[3] = 4;
    bp[4] = 5;
    cout << "\nIni semua adalah array berisi 5 buah data :" << endl;
    cout << &bp[0] << " nilainya " << bp[0] << endl;
    cout << &bp[1] << " nilainya " << bp[1] <<endl;
    cout << &bp[2] << " nilainya " << bp[2] <<endl;
    cout << &bp[3] << " nilainya " << bp[3] <<endl;
    cout << &bp[4] << " nilainya " << bp[4] <<endl;
    cout << "Ukuran Array Integer adalah " << sizeof(bp) << " byte" << endl;
    cout << "Jumlah member Array Integer adalah " << sizeof(bp)/sizeof(int) << " buah" << endl;

    //2.MENG-ASSIGNMENT ARRAY
    char bq[5] = {'a','b','c','d','e'};
    cout << "\nIni semua adalah array berisi 5 buah data :" << endl;
    cout << &bq[0] << " nilainya " << bq[0] << endl;
    cout << &bq[1] << " nilainya " << bq[1] <<endl;
    cout << &bq[2] << " nilainya " << bq[2] <<endl;
    cout << &bq[3] << " nilainya " << bq[3] <<endl;
    cout << &bq[4] << " nilainya " << bq[4] <<endl;
    cout << "Ukuran Array Char adalah " << sizeof(bq) << " byte" << endl;
    cout << "Jumlah member Array Char adalah " << sizeof(bq)/sizeof(char) << " buah" << endl << endl;

    //MEMBUAT ARRAY DENGAN STANDARD LIBRARY
    //FORMATNYA:
    //array<tipe data, jumlah array> nama array
    array<int,5>br;
    for(int i=1;i<=5;i++){
        br[i]=i;
        cout << i << " " << &br[i] << " " << br[i] << endl;
    }
    //UKURAN ARRAY
    cout << "Ukuran Array br : " << br.size() << endl;
    //ADDRESS AWAL ARRAY
    cout << "Address awal Array br : " << br.begin() << endl;
    //ADDRESS AKHIR ARRAY
    cout << "Address awal Array br : " << br.end() << endl;
    //NILAI DENGAN INDEX X
    cout << "Nilai index ke-4 Array br : " << br.at(4) << endl << endl;
    //SISANYA GOOGLE SENDIRI
    //C++ NO SORTING ARRAY

    //LOOPING ARRAY KHUSUS UNTUK C++ 11 KE ATAS
    array<int,5>bs = {11,22,33,44,55};
    //deklarasi variabel yang nanti bisa dipanggil : nama variabel arraynya yang mau diloop
    for(int bt : bs){
        // perintah statement
        cout << "Adrress : " << &bt << ", nilainya : " << bt << endl;
    }
    cout << "Alamat di atas adalah alamat milik Array. Oleh karena itu kita tidak bisa memanipulasi isi dari Array." << endl;
    cout << endl;
    //CARA MEMANIPULASI ARRAY
    cout<< "Agar bisa memanipulasi isi Array, maka deklarasi variabel harus di Referensikan" << endl;
    for(int &btRef : bs){
        cout << "Alamatnya : " << &btRef << ", nilainya : " << btRef << endl;
    }
    cout << "Array di atas sudah Direferensikan. Sehingga, bila kita ingin mengubah semua isi +4 sekarang memungkinkan." << endl;
    for(int &btRef : bs){
        btRef += 4;
        cout << btRef << endl;
    }
    cout << endl;

    //MULTIDIMENTIONAL ARRAY (BUILT IN)
    //int nama_array[baris][kolom] = {1,2,3.4};
    const int barris = 3;
    const int kollom = 5;
    //DALAM ARRAY UNTUK MEMANGGIL VARIBEL HARUS KONSTAN DEMI MENCEGAH RANTAI ERROR
    int bu[barris][kollom] = {1,2,3,4,5,6,7,8,1,2,9,8,4,5,6};
    //OUTPUTNYA BAKAL KAYA MATRIKS
    /*
        [1 2 3 4 5  INDEX   00 01 02 03 04
         6 7 8 1 2          10 11 12 13 14
         9 8 4 5 6]         20 21 22 23 24
    */
    cout << bu[0][0] << " " << bu[0][1] << " " << bu[0][2] << " " << bu[0][3] << " " << bu[0][4] << endl;
    cout << bu[1][0] << " " << bu[1][1] << " " << bu[1][2] << " " << bu[1][3] << " " << bu[1][4] <<endl;
    cout << bu[2][0] << " " << bu[2][1] << " " << bu[2][2] << " " << bu[2][3] << " " << bu[2][4] <<endl;
    cout << "Ribet kan?? Maka, kalau gak pakai standard library Array, harus teliti tur lama. Pakailah fungsi" << endl;
    cout << "Yang dibawah ini mengunakan Fungsi :" << endl;
    arrayMD(*bu,3,5);
    cout << endl;
    //MULTIDIMENTIONAL ARRAY (STANDARD LIBRARY ARRAY)
    const int bariss = 3;
    const int kolomm = 2;
    array<array<int, kolomm>, bariss>bv = {1,2,3,4,5,6};
    cout << bv[0][0] << " " << bv[0][1] << endl;
    cout << bv[1][0] << " " << bv[1][1] << endl;
    cout << bv[2][0] << " " << bv[2][1] << endl;
    cout << "Seperti biasa, bisa menggunakan fungsi" << endl;
    cout << "Ini fungsinya:" << endl;
    arrayMD2(bv);
    cout << endl;

    //SORTING ARRAYYY
    array<int,isi>angka = {1,0,2,9,3,8,4,7,5,6};
    array<char,isi>huruf = {'l','k','j','h','g','f','d','s','a','c'};
    printArray(angka);
    printArray(huruf);
    cout << "Menggunakan Library Algorithm, kita bisa pakai sort" << endl;
    //FORMATNYA:
    //sort(namaArray.begin(),namaArray.end())
    sort(angka.begin(),angka.end());
    printArray(angka);
    sort(huruf.begin(),huruf.end());
    printArray(huruf);
    cout << "Mantab sih, pakai sort. Easyy :b" << endl << endl;

    //SEARCH ARRAY
    //SEARCHING MEMBER DARI SEBUAH ARRAY
    array<int,isi>angka1 = {1,0,2,9,3,8,4,7,5,6};
    printArray(angka1);
    int cariAngka=30;
    bool ketemu;
    //SORT DULU -> SEARCH (BINARY_SEARCH)
    cout << "Mencari angka dalam Array : ";
    //cin >> cariAngka;
    sort(angka1.begin(),angka1.end());
    ketemu = binary_search(angka1.begin(),angka1.end(),cariAngka);
    if(ketemu){
        cout << "Ketemu" << endl;
    }else{
        cout << "Tidak ketemu" << endl;
    }
    cout << endl;

    //STRING NIH BOZZ
    //STRING SEBENARNYA ADALAH KUMPULAN SEBUAH KARAKTER
    char kakak[5] = {'k','a','k','a','k'};
    cout << kakak << endl;
    array<char,4>adik = {'a','d','i','k'};
    for(char bw : adik){
        cout << bw;
    }
    cout << endl;
    //KALAU 1 PARAGRAF KAN TEPARR, MAKANYA PAKAI STANDARD LIBRARY
    string ibu = "Ibu";
    string bapak("Bapak");
    cout << ibu << " dan " << bapak << endl;
    cout << endl;

    //OPERASI PADA STRING
    string suara = "Meong!";
    //MENAMPILKAN
    cout << suara << endl;
    //MENGAMBIL HURUF BERDASARKAN INDEKS
    cout << "Huruf ke-1 adalah " << suara[0] << endl;
    cout << "Huruf ke-2 adalah " << suara[1] << endl;
    cout << "Huruf ke-3 adalah " << suara[2] << endl;
    cout << "Huruf ke-4 adalah " << suara[3] << endl;
    cout << "Huruf ke-5 adalah " << suara[4] << endl;
    cout << "Huruf ke-6 adalah " << suara[5] << endl;
    //MERUBAH KARAKTER BERDASARKAN INDEKS
    suara[1] = 'i';
    cout << suara << endl;
    //MENYAMBUNG / CONCATENATION
    string suara1 = suara + " Pus!"; //BISA GINI
    cout << suara1 << endl;
    string suara2 = " lucuu";
    suara1.append(suara2); //ATAU PAKAI APPEND
    cout << suara1 << endl;
    string suara3 = "Eheee";
    suara1 += " " + suara3; //ATAU KAYA PERTAMBAHAN
    cout << suara1 << endl << endl;;

    //PERBANDINGAN STRING
    char name[4] = {'u','c','u','p'};
    //KITA TIDAK BISA MEMBANDINGKAN ARRAY DENGAN KATA
    //TIDAK ERROR, NAMUN TIDAK AKAN MUNCUL APA APA
    //MAKANYA, ADA STRING
    string name2 = "ucup";
    //NAH, BARU SEKARANG BISA
    if(name2 == "ucup"){
        cout << "Benar sama" << endl;
    }

    //AKSES SUBSTRING -> NGAMBIL KOMPONEN STRING DI TENGAH TENGAH DAN POSISI DIMANA?
    string kalimat_1 = "Bangun tidur ku terus mandi";
    string kalimat_2 = "Tidak lupa menggosok gigi";
    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;
    //SUBSTRING
    //substr(index,panjang)
    cout << kalimat_1.substr(7,5) << endl; //MENGAMBIL KATA "TIDUR"
    cout << kalimat_2.substr(21,4) << endl; //MENGAMBIL KATA "GIGI"
    //KEBALIKANNYA, MENCARI POSISI DARI SUBSTRING
    //find("kata-nya")
    cout << "Posisi kata tidur : " << kalimat_1.find("tidur") << endl; //KATA TIDUR ADA DI POSISI INDEKS BERAPA?
    cout << "Posisi kata gigi : " << kalimat_2.find("gigi") << endl; //KATA GIGI ADA DI POSISI INDEKS BERAPA?
    //COBA YANG DUPLIKAT
    cout << "Kata b(an)gun : " << kalimat_1.find("an") << endl; //TERNYATA, YANG TAMPIL DI TERMINAL = YANG DI KATA B'AN'GUN BUKAN M'AN'DI
    //MAU CARI YANG MANDI?
    int bx = kalimat_1.find("an");
    cout << "Kata m(an)di : " << kalimat_1.find("an",bx+1) << endl;
                                        //MAKSUDNYA, MULAI SEARCHING DARI INDEKS AN PERTAMA + 1
    cout << "Kata m(an)di : " << kalimat_1.find("an",(kalimat_1.find("an"))+1) << endl;
    //MENCARI POSISI DARI BELAKANG
    //rfind() MISAL GIGI DI KALIMAT 2
    cout << "Posisi kata gi : " << kalimat_2.find("gi") << " tapi dari depan" << endl;
    cout << "Posisi kata gi : " << kalimat_2.rfind("gi") << " tapi dari belakang" << endl << endl;

    //SUBSTITUSI STRING
    string kalimat1 = "sejak kapan aku kamu dia mereka menjadi kita";
    string kalimat2 = "wakanda forevah";
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl << endl;

    //SWAP STRING, MENUKAR KALIMAT
    cout << "Swap String :" << endl;
    kalimat1.swap(kalimat2);
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl << endl;

    //REPLACE STRING, MENGGANTI STRING
    cout << "Replace String :" << endl;
    kalimat2.replace(12,3,"Bambang");
    int posisi = kalimat1.find("ah");
    kalimat1.replace(posisi,2,"er");
    cout << kalimat2 << endl;
    cout << kalimat1 << endl << endl;

    //INSERT STRING
    cout << "Insert String :" << endl;
    kalimat1.insert(7," dan Hatiku");
    cout << kalimat1 << endl << endl;

    //GETLINE CONSOLE STRING
    //INPUT 1 KALIMAT
    string kalimatInput;
    cout << "Masukkan kalimat :";
    //getline(cin,kalimatInput); <---- KI CARANE
    cout << "Input Anda : " << kalimatInput << endl;

    //JUMLAH KATA DARI INPUT
    int posisii = 0, jumlahh = 0;
    while(true){
        posisii = kalimatInput.find(" ",posisii + 1);
        jumlahh++;
        if(posisii<0){
            break;
        }
    }
    cout << "Terdapat " << jumlahh << " kata" << endl << endl;

    //STRUCT
    //SEBUAH DATA YANG DIBENTUK OLEH BEBERAPA DATA
    //DITARUH DI ATAS INT MAIN --CA--
    buah jeruk;
    jeruk.warna = "oren";
    jeruk.berat = 140.34;
    jeruk.harga = 15000;
    jeruk.rasa = "manis";
    cout << jeruk.warna << endl;
    cout << jeruk.berat << endl;
    cout << jeruk.harga << endl;
    cout << jeruk.rasa << endl << endl;

    //NESTING STRUCT
    //STRUCT DI DALAM STRUCT
    aktor aktor1,aktor2;
    film film1;
    //BUAT AKTOR 1
    aktor1.nama = "Jijin Kan";
    aktor1.tahun_lahir = 1999;
    //BUAT AKTOR 2
    aktor2.nama = "Otong Suhito";
    aktor2.tahun_lahir = 1989;
    //BUAT FILM
    film1.judul = "Perahu Karet";
    film1.genre = "Romance";
    film1.tahun = 2023;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    cout << film1.judul << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_1.tahun_lahir << endl;
    cout << film1.pemeran_2.nama << endl;
    cout << film1.pemeran_2.tahun_lahir << endl << endl;

    //UNION -> MENGALOKASIKAN BEBERAPA TIPE DATA DALAM 1 BAGIAN MEMORY
    //SAMA KAYA STRUCT FORMATNYA
    data data_union;
    data_union.a = 10234532;
    cout << "Data a : " << sizeof(data_union.a) << " Value : " << data_union.a << endl;
    cout << "Data b : " << sizeof(data_union.b) << " Value : " << data_union.b << endl;
    data_union.b[0] = 'a';
    data_union.b[1] = 's';
    data_union.b[2] = 'd';
    data_union.b[3] = 'f';
    cout << "Baru, Data a : " << sizeof(data_union.a) << " Value : " << data_union.a << endl;
    cout << "Baru, Data b : " << sizeof(data_union.b) << " Value : " << data_union.b << endl << endl;
    //MEREKA MENJADI 1 KESATUAN. 1 BERUBAH, LAIN BERUBAH

    //ENUM
    warna kain,kain2,kain3;
    kain = merah;
    cout << kain << endl;
    //MENGHASILKAN INDEKS POSISI SI KEYWRORD DI DALAM ENUMNYA
    kain2 = coklat;
    kain3 = kuning;
    cout << kain2 << endl;
    cout << kain3 << endl << endl;
    //JIKA DI DEFINISIKAN NILAI, NANTI AKAN IKUT NILAI, INDEKS SELANJUTNYA BAKAL LANJUTIN

    //TERNARY OPERATOR
    //KONDISI ? HASIL1 : HASIL2
    //JIKA KONDISI TRUE, MAKA AMBIL HASIL1
    //JIKA KONDISI FALSE, MAKA AMBIL HASIL2
    int cc,cd;
    string result1,result2,outp;
    result1 = "benar";
    result2 = "salah";
    cc = 5;
    cd = 7;
    //outp = (kondisi) ? hasil1 : hasil2
    // HARUS DALAM BENTUK LOGIKA
    cout << "Apakah " << cc << " lebih besar daripada " << cd << " ?" << endl;
    outp = (cc < cd) ? result1 : result2;
    cout << outp << endl << endl;

    //COMMA OPERATOR
    //(EXPRESSION1, EKSPRESSION2)
    //NORMALNYA
    int ce,cf,cg;
    cf = 1;
    cg = 2;
    ce = cf + cg;
    cout << "Nilai ce normal : " << ce << endl;
    cout << "Nilai cf normal : " << cf << endl;
    cout << "Nilai cg normal : " << cg << endl;
    //NAMUN, BISA DIERSINGKAT DENGAN MENGGUNAKAN COMMA OPERATOR
    int cE,cF,cG;
    cE = (cF=1, cG=2, (cF+cG));
    cout << "Nilai cE comma operator : " <<  cE << endl;
    cout << "Nilai cF comma operator : " <<  cF << endl;
    cout << "Nilai cG comma operator : " <<  cG << endl << endl;

    //BITWISE OPERATOR
    // &    AND bitwise AND
    // |    OR bitwise inclusive OR
    // ^    XOR bitwise exclusive OR
    // ~    NOT
    // <<   SHL shift bits left
    // >>   SHR shift bits right
    //TENTANG TABEL KEBENARAN INI GAEZZ
    unsigned short ch = 6;
    unsigned short ci = 10;
    unsigned short cj;
    //cout << bitset<8>(ch) << endl; //KELUARNYA BINER GAEZ
    //printBiner(ch,"ch");
    cout << "& = bitwise AND" << endl;
    cj = ch & ci;
    printBiner(ch,"ch");
    printBiner(ci,"ci");
    printBiner(cj,"cj");
    cout << "cj = " << cj << endl;

    cout << "\n| = bitwise OR" << endl;
    cj = ch | ci;
    printBiner(ch,"ch");
    printBiner(ci,"ci");
    printBiner(cj,"cj");
    cout << "cj = " << cj << endl;

    cout << "\n^ = bitwise XOR" << endl;
    cj = ch ^ ci;
    printBiner(ch,"ch");
    printBiner(ci,"ci");
    printBiner(cj,"cj");
    cout << "cj = " << cj << endl;

    cout << "\n~ = bitwise NOT" << endl;
    cj = ~ch;
    printBiner(ch,"ch");
    printBiner(cj,"cj");
    cout << "cj = " << cj << endl;

    cout << "\n<< = bitwise SHIFT LEFT" << endl;
    cj = ch << 2;
    printBiner(ch,"ch");
    printBiner(cj,"cj");
    cout << "cj = " << cj << endl;

    cout << "\n>> = bitwise SHIFT right" << endl;
    cj = ch >> 1;
    printBiner(ch,"ch");
    printBiner(cj,"cj");
    cout << "cj = " << cj << endl << endl;

    //CASTING OPERATOR
    int ck = 5;
    float cl = 6.67f;
    char cm = 'z';
    cout << "Hasil akan berbentuk float, karena ada casting dibackground " << ck + cl << endl;
    int hasill = ck + cl;
    cout << "Hasil akan berbentuk int, karena kita membuat variabel dalam bentuk int " << hasill << endl;
    float hasill2 = ck + cl;
    cout << "Hasil akan berbentuk float, setelah membuat variabel dalam bentuk float " << hasill2 << endl;
    //UNTUK MENG-CASTING, BISA DILAKUKAN SEPERTI INI:
    cout << "Penggunaan casting agar hasil yang diharapkan int, meski variabel float " << ck + (int)cl << endl;
    //SEHINGGA, AGAR BISA MEMBUAT OPERASI HITUNG DENGAN CHAR, BISA DIGUNAKAN CASTING KEPADA CHAR TERSEBUT
    cout << "Nilai cm tanpa CASTING : " << cm << endl;
    cout << "Nilai cm SETELAH CASTING : " << (int)cm << endl;
    cout << "Sehingga, bisa dilakukan operasi hitung : " << (int)cm + ck + cl << endl;
    cout << "Bisa dilakukan CASTING menjadi char : " << (char)(cm + ck + cl) << endl;

    //MENULIS DATA KE EXTERNAL FILE (fstream)
    //Well, buat file baru aja.



    return 0; //return 0, anggep aja harus ada. Tidak ada yang gagal
}
