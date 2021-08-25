//вывести йес если в массиве только 2 различных элементов, в противном случае вывести ноу
#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
int b[100];
int main(){
    int n;
    cin >> n;
    int cnt=0;
    int x;
    
    for(int i=0;i<n;i++){
        cin >> x;
        b[x]++;
    }
    for(int i=0;i<100;i++){
        if(b[i]>0) cnt++;
    }
    if(cnt==2) cout << "Yes";
    else cout << "No";

    
    return 0;
}