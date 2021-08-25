/*
You are given N bottles with water. Each bottle described by two integers: remaining volume of water
a[i] and bottle’s capacity b[i](a[i] ≤ b[i]).
Determine is it possible to pour all remaining water into just 2 bottles!
Input
The first line of the input contains one integer N (2 ≤ n ≤ 102
) — number of bottles.
The second line contains N space-separated integers a1, a2, ..., aN (0 ≤ ai ≤ 105
) — volume of remaining
water in bottles.
The third line contains N space-separated integers b1, b2, ..., bN (ai ≤ bi ≤ 105
) — capacities of the
bottles.
Output
Print "YES"(without quotes) if it is possible to pour all remaining water into 2 bottles, otherwise print
"NO"(without quotes).
*/
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    bool k=false;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    for(int i=0;i<n-1;i++){
        if(b[i]+b[i+1]>=sum){
            k=true;
            break;
        }
    }
    if(k) cout << "YES";
    else cout << "NO";

   

    return 0;
}