#include <iostream>
 
using namespace std;
 
int main() {
 
    int R,W,L,i;
    for(i=1;i<=4;i++){
        cin>>R;
        if(R==0){
            break;
        }
        cin>>W>>L;
        if(R<W && R<L){
            cout<<"Pizza "<<i<<" fits on the table"<<endl;
        }else{
            cout<<"Pizza "<<i<<" does not fits on the table"<<endl;
        }
    }
    
 
    return 0;
}