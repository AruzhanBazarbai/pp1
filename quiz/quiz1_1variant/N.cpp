/*
KBTU decided to organize an excursion for freshmen and rented a bus, the height of which is 437
centimeters. There are N bridges of a certain height on the bus route. You need to determine if an
accident will occur and on which bridge
Input
The input first contains the number N, 1 ≤ N ≤ 1000. Then there are N natural numbers not exceeding
10,000 - the heights of the bridges in centimeters in the order in which they meet on the bus route.
Output
In the only line of the output you need to print the phrase "No crash" if the tour ends safely. If an
accident occurs, then you need to display the message "Crash k" , where k is the number of the bridge
where the accident will occur. Output phrases without quotes with exactly one space inside.
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int N=437;
    for(int i=1;i<=n;i++){
        if(a[i]<=N){
            cout << "Crash " << i;
            return 0;
        }
        
    }
    cout << "No crash";
    return 0;
}