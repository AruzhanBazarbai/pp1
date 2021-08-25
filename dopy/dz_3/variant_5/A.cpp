#include <iostream>
#include <map>
#include <set>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int z=sqrt((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));
        s.insert(z);
    }
    cout << s.size();
    return 0;
}