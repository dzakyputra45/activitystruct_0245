#include <iostream>
using namespace std;

struct DetailAlamat {
    string Desa;
    string Kota;
};

struct Mahasiswa {
    string NIM;
    string Nama;
    DetailAlamat Alamat;
    int umur;
};

int main()
{
    Mahasiswa Mhs;
    cout << "Nomor Mahasiswa : ";
    getline (cin, Mhs.NIM);
    cout << "Nama Mahasiswa : ";
    getline (cin, Mhs.Nama);


    cout << "Alamat Mahasiswa : " << endl;
    cout << "\t Nama Desa : ";
    cin >> Mhs.Alamat.Desa;
    cout << "\t Nama Kota : ";
    cin >> Mhs.Alamat.Kota;

    cout << "Umur Mahasiswa :";
    cin >> Mhs.umur;
}