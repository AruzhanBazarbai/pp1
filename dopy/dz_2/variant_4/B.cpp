//найти сумму цифр чисел, если сумма больше 10 то суммировать ее йифры до тех пор пока не будет однозначной цифрой
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int n, int s){
    while(n>0){
        s+=n%10;
        n=n/10;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    int c=sum(n,0);
    if(c<10) cout << c;
    else{
        while(c>10){
            c=sum(c,0);
        }
        cout << c;
    }
    return 0;
}