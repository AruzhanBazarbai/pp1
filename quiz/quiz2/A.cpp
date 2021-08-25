///Almaz received statues of various sizes as a gift from a friend. Since he likes to make things perfect,
//he wants to make sure that each statue is larger than the previous one exactly by 1. For this he needs
//additional statues. Help him figure out the minimum number of additional statues needed. (there are no
//duplicates)

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]-a[i-1]>1){
            cnt+=(a[i]-a[i-1]-1);
        }
    }
    cout << cnt;
    return 0;
}