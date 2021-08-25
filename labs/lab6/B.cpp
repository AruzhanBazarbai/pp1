//You have two arrays a and b. You must write a function which will create a new array d which elements
//will di = |ai - bi|.

#include <iostream>
using namespace std;

int n;
int a[10000];
int b[10000];
int c[10000];

void read(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
        if(b[i]>a[i]){
            c[i]=b[i]-a[i];
        }else{
            c[i]=a[i]-b[i];
        }
        cout << c[i] << " ";
    }
}

int main(){
    read();
    return 0;
}