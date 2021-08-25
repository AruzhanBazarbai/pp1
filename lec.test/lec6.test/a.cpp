#include <iostream>
using namespace std;
int main(){
string str,x;
    cin >> str >> x;
    size_t pos=0;
    size_t fpos=0;
    int cnt=0;
    for(int i=0;i<str.size();i++){
        fpos=str.find(x,pos);
        if(fpos!=string::npos){
           pos=fpos+1;
           cnt++;
        
        }
       
    }
    cout << cnt;
    return 0;
}