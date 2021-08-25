//Write a program that prints an n x n matrix like done below
#include <iostream>
using namespace std;

int a[100][100];

int main(){
    int n;
    cin >> n;
    int k = 0;
    while(k <= n){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if((i == k || j == k) && a[i][j] == 0)
                    a[i][j] = k + 1;
        k++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}