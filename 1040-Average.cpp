#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double N1,N2,N3,N4,fifth;
    cin>>N1>>N2>>N3>>N4;
    
    double avg = (N1*2+N2*3+N3*4+N4)/10;
    
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
    
    if(avg>= 7){
        cout<<"Aluno aprovado."<<endl;
    }else if(avg<5){
        cout<<"Aluno reprovado."<<endl;
    }else if(5.0<=avg<=6.9){
        cout<<"Aluno em exame."<<endl;

        cin>>fifth;
        double avg2 = (avg+fifth)/2;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<fifth<<endl;
        
        if(avg2>=5.0){
            cout<<"Aluno aprovado."<<endl;
        }else if(4.5<=avg2){
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<avg2<<endl;
    }
    
 
    return 0;
}