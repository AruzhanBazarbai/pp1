//надо посчитать сколько простых чисел в массиве

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, cnt=0;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    

    bool k=true;
    int c;

    for(int i=0;i<n;i++){
        k=true;
        c=a[i];
        if(c>1){
            for(int j=2;j<=sqrt(c);j++){
                if(c%j==0){
                   k=false;
                    break;
                } 
            }
            if(k) cnt++;
        }
        
    }

    cout << cnt;
    
    
    return 0;
}