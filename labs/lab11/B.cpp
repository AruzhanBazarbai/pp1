//Problem B. Unique array
/*
You are given an array with size - N.
Your task is - to determine the uniqueness of an array.
Input
In the first line given N - the size of the array.
In the next line given elements.
Output
Print Y ES if the given array contains only unique elements, otherwise print NO.
*/
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    set<int> s;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size()==n) cout << "YES";
    else cout << "NO";
    return 0;
}