//Write a function for finding the maximum of 4 numbers
#include <iostream>

using namespace std;

void maxi(int a,int b,int c,int d){
    int mx=max(max(a,b),max(c,d));
    cout << mx;
}
    
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    maxi(a,b,c,d);
    return 0;
   
       
}
