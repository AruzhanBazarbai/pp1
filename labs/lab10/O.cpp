//Problem O. 77388. Binary for each
/*
All of computer in the world use binary system for any operation. Let try to simulate it. Represent each
elements of given vector as binary.
Input
In the first line you are given single number N, where N is amount of elements in the vector. The second
line contains of N elements.
Output
Print binary representation for each element of vector in own row.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void f(int b ){
    string res="";
    while(b>0){
        res+=char(b%2+'0');
        b=b/2;
    }
    reverse(res.begin(),res.end());
    cout << res << endl;

}

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> v(a,a+n);
    for_each(v.begin(),v.end(),f);
    
    return 0;
}
