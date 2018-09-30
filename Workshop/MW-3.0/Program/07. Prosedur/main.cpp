//PROGRAM PENGENALAN PROSEDUR

#include <iostream>

using namespace std;

void fungsi_luas (int p, int l){
    int luas;
    luas = p*l;
    cout << "Luas Persegi Panjang adalah = " << luas;
    }

int main()
{
    int p, l;
    cout << "Masukkan Panjang = ";
    cin >> p;
    cout << "Masukkan Lebar = ";
    cin >> l;
    fungsi_luas (p,l);
    return 0;
}
