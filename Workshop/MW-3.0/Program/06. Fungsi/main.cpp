//PROGRAM PENGENALAN FUNGSI

#include <iostream>

using namespace std;

int fungsi_luas (int p, int l){
    int luas;
    luas = p*l;
    return luas;
    }

int main()
{
    int p, l;

    cout << "Masukkan Panjang = ";
    cin >> p;
    cout << "Masukkan Lebar = ";
    cin >> l;
    cout << "Luas Persegi Panjang adalah = " << fungsi_luas (p,l);
    return 0;
}
