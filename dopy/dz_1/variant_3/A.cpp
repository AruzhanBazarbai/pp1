//You are given array. Find sum of all elements which bigger than 1000 or less than 100
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x<100 || x >1000) sum+=x;
    }
    cout << sum;
    return 0;
}