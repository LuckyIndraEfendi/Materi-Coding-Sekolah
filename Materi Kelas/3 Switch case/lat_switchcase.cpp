/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int pilihan;
    cout<<"Pilihlah Menu makanan dan minuman "<<endl;    
    cout<<"1. Nasi Goreng"<<endl;    
    cout<<"2. Ayam geprek"<<endl;    
    cout<<"3. Pop ice"<<endl;    
    cout<<"4. Softdrink"<<endl; 

    cout<<"Masukkan Angka Untuk Memilih : ";cin>>pilihan;   

    switch(pilihan){
        case 1 : 
          cout<<"Makanan Sehat";
          break;
        case 2 : 
          cout<<"Makanan Sehat";
          break;
        case 3 : 
          cout<<"Makanan Tidak Sehat";
          break;
        case 4 : 
          cout<<"Makanan Tidak Sehat";
          break;
          default : 
          cout<<"Pilihan yang anda masukkan salah";
    }
}





// Latihan 2 Modifikasi Program

#include <iostream>
using namespace std;

int main(){

    int pilihan,jumlah,kali;

    cout<<"Pilihlah Menu makanan dan minuman "<<endl;    
    cout<<"1. Nasi Goreng"<<endl;    
    cout<<"2. Ayam geprek"<<endl;    
    cout<<"3. Pop ice"<<endl;    
    cout<<"4. Softdrink"<<endl; 

    cout<<"Masukkan Angka Untuk Memilih : ";cin>>pilihan;   
    cout<<"Masukkan Jumlah : ";cin>>jumlah;   

    switch(pilihan){
        case 1 : 
          cout<<"Harga Makanan : 10.000"<<endl;
          cout<<"Jumlah Makanan : " <<jumlah<<endl;
          cout<<"Total Harga : "<<jumlah * 10000;
          break;
        case 2 : 
          cout<<"Harga Makanan : 15.000"<<endl;
          cout<<"Jumlah Makanan : " <<jumlah<<endl;
          cout<<"Total Harga : "<<jumlah * 10000;
          break;
        case 3 : 
          cout<<"Harga Makanan : 25.000"<<endl;
          cout<<"Jumlah Makanan : " <<jumlah<<endl;
          cout<<"Total Harga : "<<jumlah * 10000;
          break;
        case 4 : 
          cout<<"Harga Makanan : 30.000"<<endl;
          cout<<"Jumlah Makanan : " <<jumlah<<endl;
          cout<<"Total Harga : "<<jumlah * 10000;
          break;
          default : 
          cout<<"Pilihan yang anda masukkan salah";
    }
}

