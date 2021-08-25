/*
Проверьте, является ли число простым.

Входные данные
Вводится одно натуральное число n не превышающее 2000000000 и не равное 1.

Выходные данные
Необходимо вывести  строку prime, если число простое, или composite, если число составное.
*/
#include <iostream>
#include <cmath>
using namespace std;

void primeValue(){
    int n;
    cin >> n;

    double d=sqrt(n);
    bool k=true;

    for(int i=2; i<=d; i++){
         
        if(n==2 || n==3){
            k=true;
        }
        else if(n>3){
       
        double a = n % i;
            if( a == 0 ){
            k = false;
            break;
            }

        else{
            k=true;
        }
        
    }
    }
    if(k==true) cout << "prime";
    else cout << "composite";
   
}

int main(){
    
    primeValue();
     
    return 0;
}
