//Problem A. Can’t Wait for Holiday
/*
Given is a string S representing the day of the week today.
S is SUN, MON, TUE, WED, THU, FRI, or SAT, for Sunday, Monday, Tuesday, Wednesday, Thursday,
Friday, and Saturday, respectively.
After how many days is the next Sunday (tomorrow or later)?
Output
Print the number of days before the next Sunday.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    string a[]={"SUN", "MON", "TUE", "WED", "THU", "FRI","SAT"};
    cin >> s;
    int cnt=0;
    for(int i=0;i<7;i++){
        if(s==a[i]){
            break;
        }
        cnt++;
    }
    int b=7-cnt;
    cout << b;
    return 0;
}