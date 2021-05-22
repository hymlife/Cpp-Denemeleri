#include <iostream>

using namespace std;

int main(){

int i;


/* 

********************
    WHİLE DÖNGÜSÜ
********************

while(Koşul)
{
    içerik;
}

*/

i=0;    //i değeri burda sayaç olarak başlayacak bu değerin sıfırdan başlatarak 


while(i<2){    
    cout<< "while ile yazildi"<<endl;   
    i++;    //sayaç sabit tutulmaz bunun nedeni döngü sonsuza almamak
}

/*
********************
    FOR DÖNGÜSÜ
********************

for( sayac = başlangıç değeri;   sayaç< son değer    ; sayac arttırma){
    içerik;
}

*/
cout <<endl; //bir satır alt bölüme geçsin diye yazıldı

int d; //sayaç için değer tanımlandı
for( d=0;d<5;d++){

    cout<<"For Dongusu ile Yazildi\n";
}

/*
********************
  DO WHİLE DÖNGÜSÜ
********************

do{
    içerik;
}while(koşul);

**NOT**
koşul sağlansın veya sağlanmasın ilk önce işlem yapılır ve koşul incelenir eğer uyuyorsa devam eder

*/

int j;
do
{
    cout<< endl<<"Do while ile yazildi";
    j++;
} while (j<3);




}