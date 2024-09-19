#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout<<"masukkan nilai: ";
    cin>>nilai;

    if (nilai>89){
        cout<<"Selamat! Anda mendapatkan nilai A"<<endl;
    }
    else if (nilai>79){cout<<"Anda mendapatkan nilai B"<<endl;}
    else if (nilai>69){cout<<"Anda mendapatkan nilai C"<<endl;}
    else if (nilai>59){cout<<"Anda mendapatkan nilai D"<<endl;}
    else {cout<<"Anda mendapatkan nilai E"<<endl;}



return 0;




}
