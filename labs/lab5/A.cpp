//You’re given string s, you need to output amount of capital and small letters in string.
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cap=0;
    int lit=0;
    for(int i=0; i<s.size();i++){
        int x=int(s[i]);
        if(x>=65 && x<=90){ 
            cap++;
        }
        else if(x>=90 && x<=122 ){
         lit++;
        }
    }
    cout << lit << " " << cap << endl;

    return 0;
} 