//Problem C. 78710 Cable
/*
Given the length of fiber optic cables and an array of coordinates with the house (all houses are on the
same lines). It is necessary to determine whether it is possible to conduct a fiber optic cable from the first
house to the last.
Input
First line contains the length of fiber optic cable. Then given n - size of the array.(1<=n<=20) Third line
contains elements of the array.
Output
Print "YES"if it is possible to conduct a fiber optic cable, otherwise print "NO"
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int k,n;
    cin >> k >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum=0;
    for(int i=1;i<n;i++){
        sum+=abs(a[i]-a[i-1]);
    }
    if(sum+n<=k) cout << "YES";
    else cout << "NO";

    return 0;
}