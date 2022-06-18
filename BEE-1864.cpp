#include <iostream>
 
using namespace std;
 
int main() {
 
    char str[35] ="LIFE IS NOT A PROBLEM TO BE SOLVED";
    
    
    int N;
    while(cin>>N){
        for(int i=0;i<N;i++){
            cout<<str[i];
        }
 
        cout<<endl;
    }
    
    return 0;
}