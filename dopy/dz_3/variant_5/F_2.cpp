#include <iostream>
#include <deque>
using namespace std;
int main(){
    char x, k;
    deque <int> d;
    while (cin >> x){
        if (x=='!') break;
        else if (x=='-'){
            cin >> k;
            d.push_back(k);
        }else if (x=='+'){
            cin >> k;
            d.push_front(k);
        }else if (x=='*'){
            // cout << int(d.front()-'0') << endl;
            // cout << int(d.back()-'0') << endl;
            cout << int(d.front()-'0')+int(d.back()-'0') << endl;
            d.pop_back();
            d.pop_front();
        }
    }
    
    return 0;
}