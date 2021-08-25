/*
The programmer’s day is celebrated on the 255th day of the year (with January 1 being considered the
zero day). You need to write a program that will determine the date (month and day of the Gregorian
calendar) on which the Programmer’s Day falls in a given year.
In the Gregorian calendar, the leap calendar is:
*year number divisible by 400 *year whose number is divisible by 4 but not divisible by 100

2000     12/09/2000
1        13/09/0001
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%4==0 || n%400==0){
        if(n>1000) cout << "12/09/" << n;
        else if(n<1000 && n>100) cout << "12/09/0" << n;
        else if(n<100 && n>10) cout << "12/09/00" << n;
        else cout << "12/09/000" << n; 
    }else{
        if(n>1000) cout << "13/09/" << n;
        else if(n<1000 && n>100) cout << "13/09/0" << n;
        else if(n<100 && n>10) cout << "13/09/00" << n;
        else cout << "13/09/000" << n; 

    }
    
  
    return 0;
}