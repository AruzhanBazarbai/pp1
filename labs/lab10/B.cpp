//Problem B. 77392. Generate power
/*
Most of mathematician say that function f(x) = pow(x,x) has an interesting behavior. However, it hard
to calculate such function for the value n, that is why you shoud help them to create sequence of n power
n , where n is indeces of element. Make mathematicians life easier.
Input
Input will contain only one integer N, where N is last index of sequence.
Output
Create sequence of n power n, separate elements by single empty space.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a=0;

unsigned long long f(){
    unsigned long long res=1;
    for(int i=1;i<=a;i++){
        res=res*a;
    }
    a++;
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<unsigned long long > v(n+1);
    generate(v.begin(),v.end(),f);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 0;
}
