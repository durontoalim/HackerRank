#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,X,i;
    cin>>N;
    int count1=0,count2=0, count3=0,count4 =0;
    for(i=0; i<N;i++){
        cin>>X;
        if(X%2==0){
            count1++;
        }
        if(X%3==0){
            count2++;
        }
        if(X%4==0){
            count3++;
        }
        if(X%5==0){
            count4++;
        }
    }
        cout<<count1<<" Multiplo(s) de 2"<<endl;
        cout<<count2<<" Multiplo(s) de 3"<<endl;
        cout<<count3<<" Multiplo(s) de 4"<<endl;
        cout<<count4<<" Multiplo(s) de 5"<<endl;
 
    return 0;
}