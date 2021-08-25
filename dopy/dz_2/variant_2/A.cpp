/*
Today, Bekzat needs to hand over the project. Since the project is large, and he does not have time to do
it at all, he divided the project into parts and asked for help from friends. Bekzat gave you a task where
you need to draw a rectangle of size n by m. Look below for example.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 || i==n-1){
                if(j==0 || j==m-1){
                    cout << "+";
                }else if(j>0 && j<m-1){
                    cout << "-";
                }
            }else if(i>0 && i<n-1){
                if(j==0 || j==m-1){
                    cout << "|";
                }else{
                    cout << " ";
                }
            }
        }
        cout << endl;
        }

    return 0;
}