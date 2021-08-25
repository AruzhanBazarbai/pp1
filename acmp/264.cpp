//Оттепель
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int cnt=0,maxi=0;
    bool k=true;

    for(int i=0;i<n;i++){
        if(a[i]>0){
            cnt++;
            k=false;
        }else{
            cnt=0;
        }
        if(maxi<cnt){
            maxi=cnt;
        }
    } 
    if(k) cout << 0;
    else cout << maxi;
    return 0;
}