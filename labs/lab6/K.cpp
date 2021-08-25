//You are given a number n. Write a function for finding the sum of all digits of number n
#include <iostream>

using namespace std;

void sum(){
    string n;
    cin >> n;
    int s=0;
    for(int i=0;i<n.size(); i++){
        s+=(n[i]-'0');
    }
    cout << s;
   
   
}
    
int main(){
    
    sum();
    return 0;
   
       
}