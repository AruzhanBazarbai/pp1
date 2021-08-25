//нужно посчитать степень числа
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int power(int a,int b,int res){
    for(int i=0;i<b;i++){
        res=res*a;
    }
    return res;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << power(a,b,1);
    

    return 0;
}