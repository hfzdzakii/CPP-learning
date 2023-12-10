#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream myFile; // <========== PENTING KI

    //ios::out = operasi output, DEFAULT
    //ios::app = menulis pada akhir baris
    //ios::trunc = membuat file jika tidak ada, kalau ada, bakal dihapus, dibuat baru, DEFAULT

    //DIBUKA DENGAN OPEN
    //DEFAULT ios::out
    myFile.open("data1.txt"); //ISI DALAM KURUNG DENGAN NAMAFILE.EXTENSION
    myFile << "Apa? Aku bisa nulis di File External?"; //UNTUK NULIS KE FILE DATA1
    //TAPI INGAT, SETIAP DICOMPILE, FILE AKAN DI-TIMPA, SESUAI PERINTAH DI SINI
    myFile.close();
    //JANGAN LUPA DITUTUP DENGAN CLOSE

    //OFSTREAM
    //MENULIS FILE
    int a = 12345;
    myFile.open("data2.txt", ios::app);
    myFile << "Baris baru tulisan pada data2" << endl; // MASUKIN DATA
    myFile << a << endl;
    myFile.close();
/*
    //IFSTREAM
    ifstream myFilee;
    //MEMBACA FILE
    string data,buffer;

    myFilee.open("data3.txt");
    //myFilee >> data; // AMBIL DATA DARI FILE TAPI 1 1 ITU SUSAH
    // NAMUN, YANG TERAMBIL HANYA 1 KATA PERTAMA.
    // SEHINGGA, JIKA MAU AMBIL KALIMAT, PAKAI :
    getline(myFilee,buffer); //AMBIL BARIS PERTAMA
    data.append(buffer);
    getline(myFilee,buffer); //AMBIL BARIS KEDUA
    data.append("\n" + buffer);
    cout << data;

    //MAU COBA AMBIL FULL
    string output,bufferr;
    bool isData = true;

    while(isData){
        getline(myFilee,bufferr);
        output.append("\n" + bufferr);
        if(bufferr=="5    Egi"){
            break;
        }
    }
    cout << output << endl;
*/
    //ios::in = DEFAULT
    //ios::ate = membaca tapi mulai di akhir file
    //ios::binary = pakaifile baru aja
    //data.eof()
    //eof = end of file

    //MENULIS BINARY FILE
    //MEMASUKKAN DATA KEDALAM FLE YANG MEMILIKI STRUKTUR MEMORI
    fstream myFile3;
    int number = 123451121;
    myFile3.open("data.txt", ios::out | ios::binary);
    myFile3.write(reinterpret_cast<char*>(&number),sizeof(number));
    myFile3.close();


    //MEMBACA BINARY FILE
    fstream myFile4;
    int hasil;
    myFile4.open("data.txt", ios::in | ios::binary);
    myFile4.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));
    cout << "Besar integer adalah " << sizeof(hasil) << endl;
    cout << hasil << endl;

    return 0;
}


