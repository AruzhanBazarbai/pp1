//You have array of n elements output the sum of elements which index number divides into seven
//Indexing of the array begins with 1

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    int cnt=0;

    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(i%7==0) cnt+=a[i];
    }
     
    cout << cnt;
    

    return 0;
}