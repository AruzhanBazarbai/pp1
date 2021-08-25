//In this task, you should find the sum of all numbers from 1 to n.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    for( int i = 1; i <= n; i++){
        sum+=i;
    }
    cout << sum << endl;


    return 0;
}