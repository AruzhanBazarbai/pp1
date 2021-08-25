//It is required to determine whether a given year is a leap. A year is a leap if the number is divided by 4,
//but not by 100, and also if it is divided by 400.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%4==0){
        cout << "YES" << endl;
    }else if(n%400==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}