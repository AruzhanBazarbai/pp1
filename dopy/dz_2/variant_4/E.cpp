/*
Yelnur wants to buy some notebook for his university classes. Yelnur has only 4 classes, so he wants to
have the same amount of notebooks for each class. Yelnur came to store to buy some notebooks, and sees
that there are only three kits of notebooks. First kit has only one notebook and costs A tenge, second kit
has two notebooks and costs B tenge, and third kit contains three notebooks and costs C tenge. Keep in
mind that Yelnur already has N notebooks.
What is the minimal value of tenge Yelnur can spend to buy K notebooks, such that N + K divided by
4? Number of kits in store is not limited, so Yelnur can buy any amount of some kit.
Input
In a single line given N, A, B and C. (1 <= N, A, B, C <= 109
).
Output
In a single line minimal amount of money Yelnur can spend to buy K notebooks, such that N + K divided
by 4
*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    long long int n, a, b, c;
    cin >> n >> a >> b >> c;
    int k,t;
    if(n%4==0){
         cout << "0";
         return 0;
    }
    else{
        k=4-n%4;
        if(k==1) t==a;
        else if(k==2) t=min(a*2,b);
        else if(k==3) t=min(a*3,c);
    }
    cout << t;
 
    return 0;
}