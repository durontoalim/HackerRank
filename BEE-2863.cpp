 #include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int i,N;
    
    while(cin>>N && N){
        float A[N];
        for(i=0;i<N;i++){
            cin>>A[i];
        }
        float min = A[0];
        for(i=1;i<N;i++){
            if(min>A[i]){
                min = A[i];
            }
        }
        cout<<min<<endl;
    }
 
    return 0;
}