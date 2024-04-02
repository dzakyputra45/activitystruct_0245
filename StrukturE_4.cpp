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
    Mahasiswa Mhs[3];
    for (int i=0;i<3;i++){
        cout<<"Data ke-"<<(i+1)<<":"<<endl;
        cout << "Nomor Mahasiswa : ";
        getline (cin, Mhs[i].NIM);
        cout << "Nama Mahasiswa : ";
        getline (cin, Mhs[i].Nama);


        cout << "Alamat Mahasiswa : " << endl;
        cout << "\t Nama Desa : ";
        cin >> Mhs[i].Alamat.Desa;
        cout << "\t Nama Kota : ";
        cin >> Mhs[i].Alamat.Kota;

        cout << "Umur Mahasiswa :";
        cin >> Mhs[i].umur;
        cin.ignore(1,'\n');
    }
    for (int i=0;i<3;i++){
        cout << endl;
        cout << "\n NIM : " << Mhs[i].NIM;
        cout << "\n Nama : " << Mhs[i].Nama;
        cout << "\n Alamat : ";
        cout << "\n Desa : " << Mhs[i].Alamat.Desa;
        cout << "\n Kota : " << Mhs[i].Alamat.Kota;
        cout << "\n Umur : " << Mhs[i].umur;
    }
}