#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int a;
    cin >> a;
    int b[a];
    int c[a];

    for(int i = 0; i < a; i++){
        cin >> b[i] >> c[i];
    }

    int d = 0;

    for(int i = 0; i < a; i++){
        d  = b[i] ^ c[i];

        cout << d << endl;

    }

    return 0;
}