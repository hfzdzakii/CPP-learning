#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

int main()
{
    fstream myFile,myFilee;
    myFile.open("data.txt", ios::trunc | ios::in | ios::out | ios::binary);

    Mahasiswa mahasiswa1,mahasiswa2,mahasiswa3;

    mahasiswa1.NIM = 12345;
    mahasiswa1.nama = "ucup";
    mahasiswa1.jurusan = "memasak";

    mahasiswa2.NIM = 456;
    mahasiswa2.nama = "otong";
    mahasiswa2.jurusan = "tkj";

    mahasiswa3.NIM = 789;
    mahasiswa3.nama = "timin";
    mahasiswa3.jurusan = "menjahit";

    //MASUKKAN KE DALAM FILE
    myFile.write(reinterpret_cast<char*>(&mahasiswa1),sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa2),sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa3),sizeof(Mahasiswa));

    myFile.close();

    //TINGGAL DIBACA DI KONSOLE LEWAT FILENYA DEH
    myFilee.open("data.txt", ios::in | ios::binary);

    Mahasiswa dataBaca;

    myFilee.seekp(1*sizeof(Mahasiswa)); //=> BIAR LANGSUNG TAMPILIN DATA YANG KEDUA

    myFilee.read(reinterpret_cast<char*>(&dataBaca),sizeof(Mahasiswa));

    cout << dataBaca.NIM << endl;
    cout << dataBaca.nama << endl;
    cout << dataBaca.jurusan << endl;

    myFilee.close();
    return 0;
}
