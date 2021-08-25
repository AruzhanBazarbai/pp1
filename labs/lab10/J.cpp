//Instead of ... 2
/*
I hope previous problem was easy for you. If previouly sequence was just reversed. Right now, sequence
is firstly rotated then reversed. Restore initial sequence again.
Input
In the first line given numbers N and M point of rotation. Second line contains of N numbers.
Output
Print original sequence in one row separated by single empty space.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[i]=x;
    }
    rotate(a,a+k,a+n);
    reverse(a,a+n);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}
