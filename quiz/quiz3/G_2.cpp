//You’re given integer N, write recursion that will return prime factorization of N.
#include <iostream>
#include <set>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

multiset<int> mst;
 
void prime_fc(int a){

    for(int i = 2;i <= a; i++){

        if(a % i == 0){
            mst.insert(i);
            a = a / i;
            break;
        }
    }

    if(a != 1) return prime_fc(a);
}
 
int main(){

    int n;
    cin >> n;

    prime_fc(n);

    multiset<int> :: iterator it;
    for(it= mst.begin(); it!=mst.end(); it++){
        cout << *it << " ";
    }
 
    return 0;
}