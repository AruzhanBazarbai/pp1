#include <iostream>
using namespace std;
//signature
int apb(int a,int b){
    //body
    int c = a + b;
    return c;
    
}
int main(){
    int x, y;
    cin >> x >> y;
    cout << apb(x,y) << endl;
    return 0;
}