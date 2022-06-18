#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned int N;
    while(cin>>N && N != 0){
        int arr[N];
        int t,l,count=0;
        while(t != N){
            l =1;
            t = 0;
            for(int i=0;i<N;i++){
                cin>>arr[i];
                if(arr[i] == l++){
                    t++;
                }
            }
            count++;
        }
        cout<<count<<endl;
    }
    
 
    return 0;
}