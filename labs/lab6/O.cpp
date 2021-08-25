//Do you use public transportation? Probably, you paid for the fare and received ticket with number. Lucky
//ticket is ticket with number, where sum of all numeral is divided by last numeral. For example, 754 is
//lucky, because the remainder of dividing 7+5+4 by 4 is 0. Write the function which check the number for
//luck.

#include <iostream>

using namespace std;

void lucky(int n,int m){
    
    int sum = 0;
    m = n % 10;

    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }

    if(sum % m == 0){
         cout << "Yes";
    }

    else{
         cout << "No";
    }

}
    
int main(){
    int n,m;
    cin >> n;

    lucky(n, m);

    return 0;
}
