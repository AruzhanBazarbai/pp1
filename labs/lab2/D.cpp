//After the personal contest, happy but hungry programmers dropped into the restaurant Kaganat and
//ordered n specialty steaks. Each steak is cooked by frying each of its sides on a frying pan for one minute.
//Unfortunately, the chef has only one frying pan, on which at most k steaks can be cooked simultaneously.
//Find the time the chef needs to cook the steaks.
#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int time;
    if(k/2==n){
        time=2;
    }else if(n%k==1){
        time=n;
    }else{
        time=(n%k)-2;
    }
    cout << time << "\n";
    return 0;
}