#include <iostream>
using namespace std;

int main()
{
    string user,pass;

    //Output
    cout<<"<==== LOGIN INSTAGRAM ====> \n";
    cout<<"Username : ";
    cin>>user;


    cout<<"Password : ";
    cin>>pass;

    //Pengkondisian Dengan Else dan If

    if(pass=="lucky123" && user=="Lucky")
    cout<<"< =======Password & Username  Benar ======= > "<<endl;

    else{
            cout<<"<======= Password & Username Salah =======>"<<endl;
    }
}