#include <iostream>

using namespace std;

int main(){

int secenek;

//double kullanılma nedeni bölme işleminde int değeri dönüştürmek yerine aynı tip veriyi görmek
double sayi1;
double sayi2;
double sonuc;
 double bolmeicin;


cout <<endl<<"Menu"<<endl<<endl;

cout <<"1. Toplama"<<endl;

cout <<"2. Cikarma"<<endl;
cout <<"3. Carpma"<<endl;
cout <<"4. Bolme"<<endl;

cout <<endl<<endl;

cout <<"Lutfen bir secenek seciniz:";
cin >> secenek;


switch (secenek)
{
case 1:

    cout << " 1. Sayi Giriniz:";
    cin >> sayi1;
    
    cout << " 2. sayi giriniz:";
    cin >> sayi2;

    sonuc = sayi1+sayi2;

    cout << "Sonuc Degeri:"<<sonuc;


    break;

case 2:

 cout << " 1. Sayi Giriniz:";
    cin >> sayi1;
    
    cout << " 2. sayi giriniz:";
    cin >> sayi2;

    sonuc = sayi1-sayi2;

    cout << "Sonuc Degeri:"<<sonuc;

    break;

case 3:

    cout << "1. Sayi Giriniz:";
    cin >> sayi1;
    
    cout << " 2. sayi giriniz:";
    cin >> sayi2;

    sonuc = sayi1*sayi2;

    cout << "Sonuc Degeri:"<<sonuc;


    break;

case 4:

    cout << " 1. Sayi Giriniz:";
    cin >> sayi1;
    
    cout << " 2. sayi giriniz:";
    cin >> sayi2;

    bolmeicin = sayi1/sayi2;

    cout << "Sonuc Degeri:"<<bolmeicin;


    break;


default:
    break;
}





}