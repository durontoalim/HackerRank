#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    string str;
    cin>>N;
    int x,y,z,sum,arr[N];
    for(int i=0; i<N ; i++){
        
        cin>>str>>x>>y>>z;
        sum += x+y+z;
        
        arr[i] = sum;
    }
    int temp =0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j < N; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<N ; i++){
        cout<<str[i]<<" "<<arr[i]<<endl;
    }
 
    return 0;
}