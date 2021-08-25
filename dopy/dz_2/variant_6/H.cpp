//считать сколько раз "rgb" встречаслось в строке
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    size_t pos=0;
    int cnt=0;

    for(int i=0;i<s.size();i++){
        size_t fpos=s.find("rgb",pos);
        if(fpos!=string::npos){
            pos=fpos+1;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}