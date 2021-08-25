//Дороги
#include <iostream>
using namespace std;
int main(){
    int n,cnt=0;
    cin >> n;

    for(int i=0;i<n*n;i++){
        int x;
        cin >> x;
        if(x==1) cnt++;
    }
    cout << cnt/2;
    
    return 0;
}