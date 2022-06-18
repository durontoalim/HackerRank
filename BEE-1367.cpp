#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,T,sum,count;
    int arr1[26];
    int arr2[26];
    char ch;
    string ch2;
    while(cin>>N && N!= 0){
            sum = 0;
            count = 0;
            
            memset(arr1, 0, sizeof(arr1));
		    memset(arr2, 0, sizeof(arr2));

            for(int i=0;i<N;i++){

                cin>>ch>>T>>ch2;

                    if(ch2 == "correct" && arr1[(int)ch - 65 ] == 0 ){
                        arr1[ (int)ch - 65] = T;
                    }
                    if(ch2 == "incorrect" && arr1[(int)ch - 65 ] == 0 ){
                        arr2[ (int)ch - 65 ] += 20;
                    }
            }
            
            for(int i=0; i< 26; i++){
                if(arr1[i] != 0){
                    count++;
                    sum += (arr1[i] + arr2[i] );
                }
            }

            cout<<count<<" "<<sum<<endl;
    	}
        
 
    return 0;
}