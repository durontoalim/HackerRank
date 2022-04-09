#include <iostream>

using namespace std;
 
int main() {
 
    int A,B,N,i;
    int loop = 1;

    while(cin>>N && N){
        int count =0,count2 = 0;

        for(i=0;i<N;i++){
            cin>>A>>B;
            if(A>B){
                count++;
            }
            else if(A<B){
                count2++;
            }
        }

        

        cout<<count<<" "<<count2<<endl;
    }
    return 0;
}