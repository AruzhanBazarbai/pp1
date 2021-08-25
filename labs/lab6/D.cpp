//Each book in the library has own ID number. Alikhan wants to buy a book which has an ID number x.
//He wants to know has the library got this book? Let’s help him. Write function!
#include <iostream>
using namespace std;


void read(){
    int n;
    
    int x;
    int y;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> y;
    bool k=false;
    for(int i=0; i<n; i++){
        if(a[i]==y){
            k=true;
            break;
        }


    }
    if(k) cout << "YES";
    else cout << "NO";
}
int main(){
    read();
    return 0;
       
}