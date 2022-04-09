#include <iostream>
 
using namespace std;
 
int main() {
 
    int N[1000];
    
    int T,count = 0;
    cin>>T;
    int size = sizeof N / sizeof N[0];
    for(int i=0; i<size;i++){
        if(count==T){
            count = 0;
        }
        cout<<"N["<<i<<"] = ";
        cout<< count <<endl;
        count++;
    }
 
    return 0;
}