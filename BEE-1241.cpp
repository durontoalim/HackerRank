#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,count,i,j,store;
    string A,B;
    cin>>N;
    while(N--){
        cin>>A>>B;
        int len = A.length();
        int len2 =B.length();
        int len_result = len -len2;
        if(len>len2){
            j = 0;
            count=0;
            for(i=len_result ; i<len ; i++){
                if(A[i] == B[j++]){
                    count++;
                }
            }
            
            if(count == len2){
                cout<<"encaixa"<<endl;
            }
            else{
                        cout<<"nao encaixa"<<endl;
                    }
        }
        else if(A==B) cout<<"encaixa"<<endl;
        else{
            cout<<"nao encaixa"<<endl;
        }
    }
 
    return 0;
}