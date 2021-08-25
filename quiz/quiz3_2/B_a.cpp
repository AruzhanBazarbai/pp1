#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
//problem B       //DONE

void f(int n, char *r, int *c){

    char a[8][8];

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            a[i][j] = '0';
        }
    }

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            
            for(int k=0; k<n; k++){
               
                if(int(r[k]) - 65 == i && c[k] - 1 == j){
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

    char r[n];
    int c[n];

    for(int i=0; i<n; i++){
        cin >> r[i] >> c[i];
    }

    f(n, r, c);

    return 0;

}
