#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    // perulangan dengan for

    cout << "Perulangan for pencacah naik" << endl;
    for ( n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << " Selamat Datang " << endl;
    }
    cout << "Nilai n Terahir = " << n << endl;
    cout << endl;

    cout << "Perulaangan for pencacah turun" << endl;
    //perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << " Selamat Datang" << endl;
    }
    cout << "Nilai n Terahir = " << n << endl;
    cout << endl;
}