//Problem L. Chrono Crusader

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x; 

        pair<int,int> a[x+2];
        int z;

        for(int i=1;i<=x;i++){
            cin >> z;
            a[i]={z,i};
        }
        sort(a+1,a+x+1);
        for(int i=1;i<=x;i++){
            if(a[i].first!=a[i-1].first && a[i].first!=a[i+1].first){
                cout << a[i].second << endl;
                break;
            }

            if(i==x){
                cout << "ZA WARUDO" << endl;
            }
        }
    }

    return 0;
}