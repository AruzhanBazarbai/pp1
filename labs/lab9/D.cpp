/*
Given n integer numbers and the number k. You need to count how many times k occurs in the given
array.
Input:
First line of input contains two integer n and k Second line of input contains n integer numbers.(1 <= n
<= 1000 , abs(k) <= 1000000000, abs(any number in array) <= 1000000000)
Output:
Print only one number - how many times k occurs in the given array.
*/

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n,x,k;
    cin >> n >> k;
    multiset<int> msE;

    int cnt=0;

    for(int i=0;i<n;i++){
        cin >> x;
        msE.insert(x);
        if(x==k) cnt++;
      
    }
    cout << cnt;
    return 0;
}