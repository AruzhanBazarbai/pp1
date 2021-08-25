//Ali’s favourite Number is the Number, where sum of all numerals is divided by last numeral. For example,
//754 is lucky, because the remainder of dividing 7+5+4 by 4 is 0. solve the problem via recursion
#include <iostream>
using namespace std;
int sum(int n,int res){
    if(n==0) return res;
    res+=n%10;
    return sum(n/10,res);
}
int main(){
    int n;
    cin >> n;
    int a;
    a=sum(n,0);
    int last=n%10;
    if(a%last==0) cout << "Yes";
    else cout << "No";
    return 0;
}