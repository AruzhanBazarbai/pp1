//Kamran is trying to find how many times one character appears in the given string.
#include <iostream>
using namespace std;
int main(){
    char x;
    string s;
    cin >> x >> s;

    size_t pos=0, fpos;
    int cnt=0;

    for(int i=0; i<s.size();i++){
        fpos=s.find(x,pos);
        if(fpos!=string::npos){
            pos=fpos+1;
            cnt++;

        }

    }

    cout << cnt;

    return 0;
}