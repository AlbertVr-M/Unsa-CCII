#include <iostream>
using namespace std;

int main (){

    cout<<"50 primeros numeros primos"<<endl;
    int primo=0, es_primo[100];
    for(int i=1;i<=100;i++){
        for(int j=1;j<=i;j++){

            if(i%j==0){
                primo++;
            }
        }
        if (primo==2){
            //cout<<i;
            
                cin>>es_primo[i];
            }
            
        
            
        
        primo=0;
        
        
    }
    for(int i=0;i<100;i++){
        cout<<es_primo[i];
    }
    

    return 0;
}