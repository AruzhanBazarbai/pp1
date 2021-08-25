//Given an integer, n, perform the following conditional actions:
//• If n is odd, print "Odd"
//• If n is even, print "Even"
//• If n is 0, print "None"
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
        if( n == 0){
        cout << "None"<< endl;
        }else if( n % 2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
    return 0;
}
