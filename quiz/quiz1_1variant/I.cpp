/*
At school, Azamat was the best in mathematics and even participated in various olympiads. And to use
matimatics in everyday life, he uses a clock that shows the time in seconds. And when others ask the time,
he answers them in seconds. His friend Yerasyl does not like to count. He decided to write a program that
will count the time in hours (hours: minutes: seconds).
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>86400){
        n=n%86400;
    }
    int h,m,s;
    int a=n/60;
    h=a/60;
    m=a%60;
    s=n%60;
    if(h<10) cout << "0" << h << ":";
    else cout << h << ":";

    if(m<10) cout << "0" << m << ":";
    else cout << m << ":";

    if(s<10) cout << "0" << s;
    else cout << s;
return 0;
}