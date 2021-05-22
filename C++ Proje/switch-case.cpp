#include <iostream>

using namespace std;

int main(){

    /*
    switch (gerekli olan değişken)
    {
    case değer:
        içerik
        break;
    
    default:
        break;
    }
    */

   int i;


   cout << "Lutfen gerekli olan degerleri giriniz:";
   cin >> i;



   switch (i)
   {
   case 1:
       cout << "birinci Yolu Sectiniz";
       break;
   
    case 2:
    cout << "ikinci Yolu Sectiniz";
        break;

    case 3:
    cout << "ucuncu Yolu Sectiniz";
        break;

    case 4:
    cout << "dorduncu Yolu Sectiniz";
        break;

   default:
   cout << "belirtilen yolu bulunamadi";
       break;
   }








}