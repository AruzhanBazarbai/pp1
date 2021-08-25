#include <iostream>
using namespace std;

void f(int * a,int n){
    a[0]=15;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(int);
    f(a,n);
    cout << endl;
    cout << a[0] << endl;


    return 0;
}