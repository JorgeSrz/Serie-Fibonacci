#include<iostream>

using namespace std;

int main(){

    system("cls");
    int n1,n2,n3,cont,lim;

    cout<<"Introduce la cantidad de numeros de la sucesion: "<<endl;
    cin>>lim;

    n1=0;
    n2=1;
    cout<<n1<<", "<<n2<<", ";
    
    for(cont=1;cont<=(lim-2);cont++){
        n3=n1+n2;
        cout<<n3<<", ";
        n1=n2;
        n2=n3;   
    }

}