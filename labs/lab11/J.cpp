//Problem J. Closest point
/*
You are given single point P in x,y coordinates system, and also list of n points.
You have to sort points by closest point to P.
Closest point - Ближайшая точка.
Input
In the first line given x, y coordinates of point P.
In the second line given n, number of points.
In the next n lines given x,y coordinates of each points.
Output
Print the array after sorting by closest point to P
by formula: sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))
*/
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int x,y;
    int n;
    cin >> x >> y >> n;

    double a[n];
    map<pair<int,int>,double> m;

    for(int i=0;i<n;i++){
        int s,t;
        cin >> s >> t;
        a[i]=sqrt((s-x)*(s-x)+(t-y)*(t-y));
        m[make_pair(s,t)]=a[i];
    }

    sort(a,a+n);
    map<pair<int,int>,double> :: iterator it;

    for(int i=0;i<n;i++){
        for(it=m.begin();it!=m.end();it++){
            if(a[i]==(*it).second){
                cout << (*it).first.first << " " << (*it).first.second << endl;
                break;
            }  
        }
    }
    
    return 0;
}