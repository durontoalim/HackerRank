#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string ch,ch2,ch3;
    cin>>ch>>ch2>>ch3;

    
    if(ch =="vertebrado"){
        if(ch2 == "ave"){
            if(ch3 == "carnivoro"){
                cout<<"aguia"<<endl;
            }else{
                cout<<"pomba"<<endl;
            }
        }else if (ch2 == "mamifero"){
            if(ch3 == "onivoro"){
                cout<<"homem"<<endl;
            }else{
                cout<<"vaca"<<endl;
            }
        }
    }else{
        if(ch2 == "inseto"){
            if(ch3 == "hematofago"){
                cout<<"pulga"<<endl;
            }else {
                cout<<"lagarta"<<endl;
            }
        }else if(ch2 == "anelideo"){
            if(ch3 == "hematofago"){
                cout<<"sanguessuga"<<endl;
            }else{
                cout<<"minhoca"<<endl;
            }
        }
    }
 
    return 0;
}