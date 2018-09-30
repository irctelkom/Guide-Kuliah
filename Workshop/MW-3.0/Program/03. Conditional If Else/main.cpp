//PROGRAM PENGENALAN IF-ELSE

#include <iostream>

using namespace std;

int main()
{
    /*
    int a;
    cout << "Masukkan Nilai Kalkulus anda = ";
    cin >> a;
    if(a>=65){
        cout << "Selamat Anda Lulus";
    }
    else{
        cout << "Selamat Anda Remidi";
    }
    */

    /*
    int b;
    cout << "Masukkan Nilai Kalkulus anda = ";
    cin >> b;
    if(b>=80 && b<=100){
        cout << "Nilai Anda A";
    }
    else if (b>=60 && b<80){
        cout << "Selamat Anda B";
    }
    else if (b>=40 && b<60){
        cout << "Selamat Anda C";
    }
    else if (b>=0 && b<40){
        cout << "Selamat Anda D";
    }
    else{
        cout << "Inputan Salah";
    }
    */

   char grade = 'D';

   switch(grade) {
      case 'A' :
         cout << "Dapet A Cie!" << endl;
         break;
      case 'B' :
        cout << "Dapet B Cie!" << endl;
      case 'C' :
         cout << "Dapet C Cie!" << endl;
         break;
      case 'D' :
         cout << "Dapet D Cie!" << endl;
         break;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "Nilai Kamu " << grade << endl;

    return 0;
}
