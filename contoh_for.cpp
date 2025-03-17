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

    cout << "Perulangan While" << endl;

    srand(time(0));

    n = rand() %10;

    cout << "Nilai Awal n = " << n << endl;

    while (n < 7)
    {
        cout << "Nilai n = " << n << endl;
        n = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah Perulangan = " << perulanganWhile << endl;
    cout << "Nilai terakhir n = " << n << endl;

    cout << "Perulangan do while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = " << n << endl;

    do
    {
        cout << "Nilai n = " << n << endl;
        n = rand() %10;
        perulanganDo++;
    } while (n < 7);
    cout << "Jumlah perulangan = " << perulanganWhile << endl;
    cout << "Nilai n terakhir = " << n << endl;
}