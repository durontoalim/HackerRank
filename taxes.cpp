#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){

    double A,B,C;
    cin>>C>>B>>A;

    if(A>=B+C || B>= A+C || C>= B+A){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if(A*A == (B*B) + (C*C) || (A*A) + (B*B) == (C*C) || (B*B) == (A*A) + (C*C)){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }else if(A*A>B*B+C*C || B*B> A*A + C*C || C*C > B*B + A*A ){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if(A*A<B*B+C*C || B*B<A*A + C*C || C*C<B*B+A*A){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(A==B && B==C){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if(A==B && B!=C || A!=C && B==C || A!=B && A==C){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }

    return 0;

}