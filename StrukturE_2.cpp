#include <iostream>
using namespace std;

struct DetailAlamat{
    string Desa;
    string Kota;
};

struct Mahasiswa {
    string NIM;
    string Nama;
    DetailAlamat Alamat;
    int umur;
};

int main(){
    Mahasiswa Mhs;
    cout << "Nomor Mahasiswa : " ;
    cin >> Mhs.NIM;
    cout << "Nama Mahasiswa : ";
    cin >> Mhs.Nama;

    cout << "Alamat Mahasiswa : " << endl;
    cout << "\t Nama Desa : ";
    cin >> Mhs.Alamat.Desa;
    cout << "\t Nama Kota : ";
    cin >> Mhs.Alamat.Kota;

    cout << "Umur Mahasiswa :";
    cin >> Mhs.umur;


    cout << endl;
    cout << "\n NIM : " << Mhs.NIM;
    cout << "\n Nama : " << Mhs.Nama;
    cout << "\n Alamat : "; 
    cout << "\n \t Desa : " << Mhs.Alamat.Desa;
    cout << "\n \t Kota : " << Mhs.Alamat.Kota;
    cout << "\n Umur : " << Mhs.umur;
}