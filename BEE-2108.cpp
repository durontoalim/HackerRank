#include <iostream>
 
using namespace std;
 
int main() {
 
    string line;
    getline(cin,line);
    int count =0;
    int len = line.length();
    for(int i=0;i<len ; i++ ){
        if(line[i] == ' '){
            break;
        }
        
        count++;
    }
    

    cout<<count;
 
    return 0;
}