/*
Alikhan works at an attraction nearby park. Right now n people are arranged in a queue waiting for their
turn to use the attraction.
The attraction is specifically designed, so it puts a limit on the heights of people that can use the attraction,
meaning that all people that are not tall enough cannot use it. Alikhan has to estimate electricity resources
that the attraction needs, so he worries how many people fit into this height limitation.
Given height limitation for the attraction and heights of people that want to enjoy it, can you count the
number of people that fit into the height limitation?
Input
The first line of input contains a single number n — the number of people that are arranged in a queue
(1 ≤ n ≤ 1000).
The second line of input contains n space-separated numbers h1, h2, ..., hn — the heights of people that
want to use the attraction (130 ≤ hi ≤ 210).
The third line of input contains a single number H — the limitation on the height of people that can use
the attraction, meaning that any person, whose height is strictly less than H is not allowed to use the
attraction (130 ≤ H ≤ 210).
Output
Output a single number — the number of people from the given list that are allowed to use the attraction.
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;

    for(int i=0;i<n;i++){
        if(a[i]>=k){
            v.push_back(a[i]);
        }
    }
    cout << v.size();

   
    return 0;
}