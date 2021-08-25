#include <iostream>
using namespace std;
int main(){
    cout << "start\n";
    for(int a = 1;; a= a + 1){
        cout << a << endl;
        if(a> 100) break;
    }
    cout << "end\n";
    return 0;

}