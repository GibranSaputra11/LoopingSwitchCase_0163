#include <iostream>
using namespace std;

double hitungIpk(double total, int sks)
{
    return total / sks;
}

string perdikat(double ipk)
{
    if (ipk < 10)
    {
        return "Memuaskan";
    }
    else
    {
        return "Cumlaude";
    }
}

int main()
{
    char pilihan;
    int sks;
    double total;

    do
    {
        cout << "Pilih Menu" << endl;
        cout << "1. Cek nilai IPK" << endl;
        cout << "2. Cek Predikat Kelulusan" << endl;
        cout << "3. Keluar" << endl;

        cout << "Masukan piliha (1/2/3) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case '1':
            cout << "Masukan total nilai = ";
            cin >> total;
            cout << "Masukan jumalh sks = ";
            cin >> sks;

            cout << "Nilai IPK = " << hitungIpk(total, sks) << endl;
            break;

        case '2':
            cout << "Predikat anda adalah " << perdikat(hitungIpk(total, sks)) << endl;
            break;

        case '3':
            break;

        default:
            cout << "Pilihan anda salah" << endl;
            break;
        }

    } while (pilihan != 3);
}