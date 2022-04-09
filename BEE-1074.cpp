#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    int array[a];

    for(int i= 0; i<a;i++){
        cin>> array[i];

        if(array[i]<= -1 && array[i]%2 == -1) cout<<"ODD NEGATIVE"<<endl;

        if(array[i]==0) cout<<"NULL"<<endl;

        if(array[i] >= 1 && array[i]%2 == 1) cout<<"ODD POSITIVE"<<endl;

        if(array[i]<= -1 && array[i]%2 == 0) cout<<"EVEN NEGATIVE"<<endl;
        
        if(array[i] >= 1 && array[i]%2 == 0) cout<<"EVEN POSITIVE"<<endl;
    }

    return 0;
}