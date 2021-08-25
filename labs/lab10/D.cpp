//Problem D. 77721. Hard-sort
/*
We hope from previous tasks you learn how to use sort and write comparator. Now, you will be given task
to sort non-static 2D-array. Sizes of row are undefined. Sort all of parameters in non-decreasing order.
First of all, sort rows by sum of all elements in row, if they are equal, sort by size, if they are equal, sort
by elements(in which row corresponded elements are greater that row will be "greater"), if they are equal
it means that they are in the right order.
Input
The first line contains single integer N, which is number of row. The next N lines will contain number M,
which is size of column, and M number separated by single empty space.
Output
Print sorted "non-static 2D-array". Print each given row in own line. Separate elements of row by single
empty space.
*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
using namespace std;

bool f(vector<int> t,vector<int> v){
    int a=0,b=0;
    for(int i=0;i<t.size();i++){
        a+=t[i];
    }
    for(int i=0;i<v.size();i++){
        b+=v[i];
    }
    if(a<b) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > v;
    vector<int> t;

    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        for(int j=0;j<m;j++){
            int x;
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
        t.clear();
    }
    sort(v.begin(),v.end(),f);
   
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
