/*
The pentagon received n numbers from an unknown person. The message said: the correct answer would
be the maximum "AND"minimum. Could it be a bitwise operation between maximum and minimum?
Help the pentagon staff.
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int maxi=INT_MIN;
    int mini=INT_MAX;

    for(int i=0;i<n;i++){
        if(maxi<a[i]){
            maxi=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(mini>a[i]){
            mini=a[i];
        }
    }
    int z=maxi&mini;
    cout << z;

    return 0;
}