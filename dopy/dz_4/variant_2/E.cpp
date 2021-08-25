//Problem E. 79162 Max map
/*
Given list of numbers. Find max from this list using map.
Input
Contains n - amount of numbers in the list(1<=n<=20). Then given list of numbers.
Output
Print solution for the problem.
*/
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int,int> m;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        m[x]++;
    }
    map<int,int> :: reverse_iterator rit;

    for(rit=m.rbegin();rit!=m.rend();rit++){
        cout << (*rit).first;
        return 0;
    }

    return 0;
}