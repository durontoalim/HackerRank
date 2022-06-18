#include <iostream>
 
using namespace std;
 
int main() {
 
    int row,col,i,j,result,sum=0;
    cin>>row>>col;
    int N[row][col];
    for(i=1;i<=row; i++){
        for(j=1; j<=col; j++){
            sum += 1;
        }
    }
    for(i=1;i<=row-1; i++){
        for(j=1; j<=col-1; j++){
            sum += 1;
        }
    }
    cout<<sum<<endl;

    sum = 0;

    sum += (row-1)*2;
    sum += (col-1)*2;
    cout<<sum<<endl;
 
    return 0;
}