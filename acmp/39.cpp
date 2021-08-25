//Волосатый бизнес
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

int f(int n,int index,int * a,int cnt){
    int index2,sum=0,maxi=-1e9,temp;
    for(int i=index+1;i<=n;i++){
        if(maxi<a[i]){
            maxi=a[i];
            index2=i-index;
            temp=i;
        }
    }

    for(int i=index+1;i<=temp;i++){
        sum+=a[i];
    }
    int k=maxi*index2;
    if(sum>k) cnt+=sum;
    else cnt+=k;

    if(temp==n) return cnt;
    else return f(n,temp,a,cnt);
}

int main (){
    int n;
    cin >> n;
    int a[n];

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    
    int cnt=f(n,0,a,0);

    cout << cnt;

    
    return 0;
}