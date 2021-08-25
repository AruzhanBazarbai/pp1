#include <iostream>
using namespace std;
int main(){
string str,x;
    cin >> str >> x;
    size_t pos=0;
    size_t fpos=0;
    int cnt=0;
    for(;;){
        fpos=str.find(x,pos);
        if(fpos!=string::npos){
           pos=fpos+1;
           cnt++;
        
        }else{
            break;
        }
       
    }
    cout << cnt;
    return 0;
}