#include <iostream>

using namespace std;

int main() {

    int N,x,y;
    int sum;

    while(cin>>x>>y && x != 0 || y != 0){
        if(x>y){
            swap(x,y);
        }
        sum = y-x;

        if(sum== 4 || sum == 7 || sum == 12 || sum == 22 || sum== 52 || sum == 102 || sum == 10 || sum == 15 || sum == 25 || sum == 55 || sum == 105 || sum == 20 || sum == 30 || sum == 60 || sum == 110 || sum == 40 || sum == 70 ||sum == 120 || sum == 100 || sum == 150)
        {
            cout<<"possible"<<endl;
        }else{
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}
