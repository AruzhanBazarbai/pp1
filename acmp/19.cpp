//Ферзь, ладья и конь
#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int a[8][8];

int main(){
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    int y1=int(s1[0])-65;
    int x1=7-(int(s1[1])-49);
    int cnt=0;
    
    
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i==x1 || j==y1) a[i][j]=1;
            else if(abs(x1-i)==abs(y1-j)) a[i][j]=1;
        }
    }
    
    int y2=int(s2[0])-65;
    int x2=7-(int(s2[1])-49);
    
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i==x2 || j==y2) a[i][j]=1;
        }
    }
    
    int y3=int(s3[0])-65;
    int x3=7-(int(s3[1])-49);

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(abs((x3-i)*(y3-j))==2) a[i][j]=1;
        }
    }
    a[x1][y1]=0;
    a[x2][y2]=0;
    a[x3][y3]=0;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[i][j]==1) cnt++;
        }
    }

    cout << cnt;
    return 0;
}