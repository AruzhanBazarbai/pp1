#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool f(int x1,int y1,int x2,int y2){
    bool k=false;
    if(abs(x1-y1)==abs(x2-y2)){
        return true;
    }
    else if(x1+y1==x2+y2){
       return true;
    }
    else return false;
}

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(f(x1,y1,x2,y2)) cout << "Yes";
    else cout << "No";

    return 0;
}