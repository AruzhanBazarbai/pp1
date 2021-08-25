//Стандартное отклонение
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int x,n=0;
    double s1=0,s2=0,s;
    cin >> x;

    do{
        n++;
        s1+=x;
        s2+=x*x;
        cin >> x;

    }while(x!=0);

    s=s1/n;

    cout << sqrt((s2+s*s*n-2*s*s1)/(n-1));
    return 0; 
}
