#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> v;

void isPrime(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x; 
        bool k=true;
        for(int j=2;j<=sqrt(x);j++){
            if(x%j==0){
                k=false;
                break;
            }
        }
        if(k) v.push_back(x);
    }
}
int main(){
    int k;
    cin >> k;

    int cnt=0;
    isPrime();
    
    
    for(int i=0;i < v.size();i++){
        if(v[i]>=k){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}