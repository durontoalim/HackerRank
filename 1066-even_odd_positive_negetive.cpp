#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,even=0,odd=0,positive=0,negetive=0,i;

    for(i=0;i<5;i++){
        cin>>a;
        if(a%2==0){
            even += 1;
        }
        if(a%2==1 || a%2== -1){
            odd +=1;
        }
        if(a>0){
            positive +=1;
        }
        if(a< 0){
            negetive +=1;
        }
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<positive<<" valor(es) positivo(s)"<<endl;
    cout<<negetive<<" valor(es) negativo(s)"<<endl;
 
    return 0;
}