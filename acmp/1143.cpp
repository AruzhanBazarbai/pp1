//Локальные максимумы
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c,cnt=0;
    cin >> c;
    //cout << c << endl;
    b=c;
    cin >> c;
    //cout << c << endl;
    do{
        a=b;
        b=c;
        cin >> c;
        //cout << c << endl;

        if(b>a && b>c && c!=0) cnt++;
    }while(c!=0);

    cout << cnt;
    return 0; 
}
