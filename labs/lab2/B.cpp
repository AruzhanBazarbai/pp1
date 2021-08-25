//Given an integer, n, perform the following conditional actions:
//• If n is odd, print "Super"
//• If n is even and in the inclusive range of 2 to 5, print "Not Super"
//• If n is even and in the inclusive range of 6 to 20, print "Super"
//• if n is even and greater than 20, print "Not Super"
#include <iostream>
using namespace std;
int main(){
    int n;
    1<=n<=100;
    cin >> n;
    if(n % 2 == 1){
        cout << "Super" << endl;
    }else if( n >= 2 && n <= 5){
        cout << "Not Super" << endl;
    }else if( n >=6 && n <=20){
        cout << "Super" << endl;
    }else{
        cout << "Not Super" << endl;
    }

    return 0;
}