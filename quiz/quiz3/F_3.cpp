#include <iostream>
#include <set>
#include <cmath>
using namespace std;

multiset<int> mst;
 
void prime_f(int a){
    for(int i=2;i<=a;i++){
        if(a%i==0){
            mst.insert(i);
            a=a/i;
            break;
        }
    }
    if(a!=1) return prime_f(a);
}
 
int main(){
    int a;
    cin >> a;
    prime_f(a);
    multiset<int> :: iterator it;
 
    for(it= mst.begin(); it!=mst.end(); it++){
        cout << *it << " ";
    }
 
    return 0;
}