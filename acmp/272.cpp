//Сумма максимума и минимума
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int i=1,maxi=-1e9,mini=1e9,x;

    while(cin >> x){
        if(i%2==0){
            if(maxi<x) maxi=x;
        }else{
            if(mini>x) mini=x;
        }
        i++;
    }
    cout << maxi+mini;


    
    return 0; 
}