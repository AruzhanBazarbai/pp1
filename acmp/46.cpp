//Число E
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string  e="2.7182818284590452353602875";
    int n;
    cin >> n;
    if(n==0){
        cout << 3;
        return 0;
    }
    //cout << e[n+1];
    int a=n+1;
    if(e[a+1]>'4' && e[a+1]<='9'){
        if(e[a]!='9') e[a]=char(int(e[a])+1);
        else{
            e[a]='0';
            e[a-1]=char(int(e[a-1])+1);
        }
    }
    
    for(int i=0;i<n+2;i++){
        cout << e[i];
    }
    
    return 0;
}