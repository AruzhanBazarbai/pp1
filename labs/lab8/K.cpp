/*
You are given n, (1 ≤ n ≤ 100) positive integers, each integer v[i], (1 ≤ v[i] ≤ 1000). Then one integer
number k, (1 ≤ k ≤ n − 1). Find the sum of k largest numbers from given sequence.
Input
The first line of input contains the number n - the number of integers. The second line contains a sequence
of integers. The third line contains integers k.
Output
Print out single number — sum of k largest numbers
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> v;
    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);

    }
    
    int a;
    cin >> a;
    int sum=0;

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(int i=0;i<a;i++){
        sum+=v[i];
    }

    cout << sum;


    return 0;
}
