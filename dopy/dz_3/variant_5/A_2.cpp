#include <iostream>
#include <cmath>
#include <set>
using namespace std;
int main(){
    int n, su;
    cin >> n;
    int a[n][4];
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin >> a[i][j];
        }
    }
    set <int> s;
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            su=sqrt( (a[i][2]-a[i][0])*(a[i][2]-a[i][0])-(a[i][3]-a[i][1])*(a[i][3]-a[i][1]) );
            s.insert(su);
        }
    }
    cout << s.size();
    return 0;
}