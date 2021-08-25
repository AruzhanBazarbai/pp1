//Daniil again decided to dive into game development. He decided to entrust you with one easy task. You
//need to calculate the amount of experience that the hero will have the next day. At the moment, the hero
//has n experience, and m percent will be added the next day
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    double a,b,c;
    a=n/1.00/100;
    b=a*1.00*m;
    c=n+b;
    cout << c << "\n";
}