#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,M;
    cin>>N>>M;
    
    while(M--){
        string str;
        cin>>str;
        if(str == "fechou") N++;
        else N--;
    }

    cout<<N<<endl;
 
    return 0;
}