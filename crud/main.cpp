#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

struct Mahasiswa{
    int pk;
    string NIM;
    string nama;
    string jurusan;
};

int getOption(){
    int input;
    //system("cls");

    cout << "\nProgram CRUD data mahasiswa" << endl;
    cout << "=============================" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Tampilkan data mahasiswa" << endl;
    cout << "3. Ubah data mahasiswa" << endl;
    cout << "4. Hapus data mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "=============================" << endl;
    cout << "Pilih (1-5)? : ";

    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    return input;
}

void cekDatabase(fstream &data){
    data.open("data.txt",ios::out | ios::in | ios::binary); //KALAU ADA/TIDAK, CUMA READ
    //CEK FILE ADA ATAU TIDAK
    if(data.is_open()){
        cout << "Database ditemukan" << endl;
    }else{
        cout << "Database tidak ditemukan, buat baru!" << endl;
        data.close();
        data.open("data.txt",ios::trunc | ios::out | ios::in | ios::binary); //KALAU GAK ADA/TIDAK, BAKAL DIBUATIN
    }
}

void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa){
    data.seekp((posisi - 1)*sizeof(Mahasiswa),ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}

void addDataMahasiswa(fstream &data){

    Mahasiswa inputMahasiswa;

    inputMahasiswa.pk = 1;
    cout << "Nama : ";
    getline(cin,inputMahasiswa.nama);
    cout << "Jurusan : ";
    getline(cin,inputMahasiswa.jurusan);
    cout << "NIM : ";
    getline(cin,inputMahasiswa.NIM);

    writeData(data, 1, inputMahasiswa);
}

int main()
{
    fstream data;

    cekDatabase(data);
    int pilihan = getOption();
    char lanjut;
    enum option{CREATE=1, READ, UPDATE, DELETE, FINISH};

    while(pilihan != FINISH){
        switch(pilihan){
            case CREATE:
                cout << "Menambah data mahasiswa" << endl;
                addDataMahasiswa(data);
                break;
            case READ:
                cout << "Tampilkan data mahasiswa" << endl;
                break;
            case UPDATE:
                cout << "Ubah data mahasiswa" << endl;
                break;
            case DELETE:
                cout << "Hapus data mahasiswa" << endl;
                break;
            default:
                cout << "Pilihan tidak ditemukan" << endl;
                break;
        }
        while(true){
            cout << "Lanjutkan? (y/n) : ";
            cin >> lanjut;
            if((lanjut=='y')||(lanjut=='Y')){
                pilihan = getOption();
                break;
            }else if((lanjut=='n')|(lanjut=='N')){
                exit(0);
            }else{
                cout << "Masukkan pilihan yang benar!" << endl;
            }
        }
    }
    cout << "akhir dari program" << endl;

    return 0;
}
