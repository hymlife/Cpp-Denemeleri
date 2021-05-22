#include <iostream>

using namespace std;

//break = donguden tamamen çıkarabilir
//continue =sadece o terimi atlar 

/*

****************
    BREAK
****************

*/
int main(){


    int i;
    for( i =0;i<5;i++){

        if(i==2){
            break;
        }
        cout << i<<endl;

    }

/*

****************
    CONTINUE
****************

*/
cout<<endl;

    for(int a=0;a<5;a++){

        if(a==3){
            continue;
            a++;
        }
        cout<<a<<endl;
    }



}





