#include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM;
    string Nama;
    string Alamat;
    int umur;
};

int main(){
    Mahasiswa Mhs;
    cout << "Nomor Mahasiswa : " ;
    cin >> Mhs.NIM;
    cout << "Nama Mahasiswa : ";
    cin >> Mhs.Nama;
    cout << "Alamat Mahasiswa : ";
    cin >> Mhs.Alamat;
    cout << "Umur Mahasiswa :";
    cin >> Mhs.umur;


    cout << endl;
    cout << "\n NIM : " << Mhs.NIM;
    cout << "\n Nama : " << Mhs.Nama;
    cout << "\n Alamat : " << Mhs.Alamat;
    cout << "\n Umur : " << Mhs.umur;
}