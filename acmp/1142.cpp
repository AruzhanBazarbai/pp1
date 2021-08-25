//Монотонный фрагмент
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a,b,cnt1=1,maxi1=1,cnt2=1,maxi2=1;
    cin >> b;
    do{
        a=b;
        cin >> b;
        if(b<a) cnt1++;
        else{
            if(cnt1>maxi1) maxi1=cnt1;
            cnt1=1;
        }

        if(b>a) cnt2++;
        else{
            if(cnt2>maxi2) maxi2=cnt2;
            cnt2=1;
        }
    }while(b!=0);

    cout << max(maxi1,maxi2);
    return 0; 
}
