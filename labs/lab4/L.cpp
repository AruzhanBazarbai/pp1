//Find the sum of the smallest elements of each column of the matrix and their coordinates.
// If there same min elements in column program takes coordinates of the first one.

#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    
    int c,d;
    int mini;
    int sum=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    
    
    cout << "coordinates of min elements:" << endl;


    for(int i=1;i<=m;i++){
         mini=INT_MAX;
            c=0;
            d=0;

        for(int j=1;j<=n;j++){
           
            if(mini>a[j][i]){
                mini=a[j][i];
                c=i;
                d=j;
            }
        }
        sum+=mini;
        cout << d << ";" << c << endl;
    }
    cout << "Their sum:" << endl;
    cout << sum << endl;
    
    return 0;
}

