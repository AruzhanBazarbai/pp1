//For a given number N, print out all integer powers of two that do not exceed N, in increasing order
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=1; i<=N; i*=2){
        cout<< i << "\n";
    }

    
    return 0;
}