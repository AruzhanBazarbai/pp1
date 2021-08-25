//Клетки
#include <iostream>
#include <cmath>
using namespace std;

int a[8][8];

int main(){
    int y;
    char x;
    cin >> x >> y;
    
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(i%2!=0){
                if(j%2!=0) a[i][j]=0;
                else a[i][j]=1;
            }else{
                if(j%2==0) a[i][j]=0;
                else a[i][j]=1;
            }
        }
    }
    int d=int(x)-64;
    int c=8-y+1;
    
    if(a[c][d]==1) cout << "BLACK";
    else cout << "WHITE";
    
    
  
    return 0;
}