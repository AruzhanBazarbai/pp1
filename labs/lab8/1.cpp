#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void f(){
    vector<int> v;
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }

    v.erase(v.begin(),v.end());

    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }

}

int main(){

    f();

    return 0;
}
