#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    string x,y;
    cin >> x >> y;
    int cnt=0;
    if(x.size()!=y.size()){
        cout << "Understandable have a nice day";
        return 0;
    }
    
    for(int i=0;i<x.size();i++){
        if(x==y){
            cout << cnt;
            break;
        }else if(i==x.size()-1){
            cout << "Understandable have a nice day";
            break;
        }else{
            rotate(x.begin(),x.begin()+x.size()-1,x.end());
            cnt++;
        }
    }
 
    
    return 0;
}