#include <iostream>
using namespace std;


int main (){

   int angka;



    // Algorithm
    // 1. Jika Skor 90 lebih besar tampilkan grade A
    // 2. Jika Skornya lebih besar dari 70 dan lebih kecil dari 90 maka tampilkan grade B
    // 3. Jika skornya lebih kecil sma dengan 50 dan lebih kecil dari 70 maka tampilkan grade C
    // 4. Jika Skornya lebih kecil dari 50 maka tampilkan grade D


    cout<<"Masukkan Angka : ";
    cin>>angka;

    if(angka >= 90){
        cout<<"Rata-rata Score = grade A"<<endl;
    } else if(angka >= 70 && angka < 90){
        cout<<"Rata-rata Score = grade B"<<endl;
    } else if(angka >= 50 && angka < 70){
        cout<<"Rata-rata Score = grade C"<<endl;
    } else if(angka <= 50){
        cout<<"Rata-rata Score = grade D"<<endl;
    } else {
        cout<<"Nilai tidak terdeteksi"<<endl;
    }
   

};