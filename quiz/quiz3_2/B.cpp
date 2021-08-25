//Use Function. You have a chesstable. And coordinates of pieces. if pieces locates in this position print
//’*’, else ’0’.
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
 
void chess(int n, char * s, int * t){
 
    char a[8][8];
 
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            a[i][j] = '0';
        }
    }
 
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            for(int k=0; k<n; k++){
               if(int(s[k]) - 65 == i && t[k]-1 == j){
                    a[i][j] = '*';
                }
            }
        }
    }
 
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}
 
int main(){
 
    int n;
    cin >> n;
 
    char s[n];
    int t[n];
 
    for(int i=0; i<n; i++){
        cin >> s[i] >> t[i];
    }
 
    chess(n, s, t);
 
    return 0;
}