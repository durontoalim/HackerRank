#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int a,b;
    cin >>a>>b;
    
    string array[9]={"one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i=a;i<=b;i++){
        if(i<=9){
           cout<<array[i-1]<<endl; 
        }else{
            if(i%2==0){
            cout << "even"<<endl;
            } else{
            cout << "odd";
            }
        }
        
    }
    return 0;
}