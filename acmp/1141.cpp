//Равные элементы
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a,b,maxi=1,cnt=1;
    cin >> b;
    do{
        a=b;
        cin >> b;
        if(a==b) cnt++;
        else{
            if(cnt>maxi) maxi=cnt;
                cnt=1;
        }
    }while(b!=0);
    cout << maxi;
    return 0; 
}
