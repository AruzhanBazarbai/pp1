//Alisa hates negative numbers. Write the function which converts the number to positive.

#include <iostream>
#include <cmath>

using namespace std;

void pos(int n){

    if(n > 0){
        cout << n;
    }else{
        cout << n*(-1);
    }
    
}
    
int main(){
    int n;
    cin >> n;

    pos(n);
    return 0;
   
       
}