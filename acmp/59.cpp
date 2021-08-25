//Несложное вычисление
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string res="";
    int n,k;
    cin >> n >> k;

    while(n!=0){
        res=char(n%k+48)+res;
        n/=k;
    }
    int a=1,b=0;
    for(int i=0;i<res.size();i++){
        a*=(res[i]-48);
        b+=(res[i]-48);

    }
    cout << a-b;
    return 0;
}