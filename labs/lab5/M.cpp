//You’re given string s, character x and number n. In this task you need to answer is the amount of x in
//the string s is equal to n
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    char x;
    int n;
    cin >> s >> x >> n;
    int cnt=0;
    size_t pos=0;
    for(int i=0; i<s.size(); i++){
        size_t fpos=s.find(x,pos);
        if(fpos!=string::npos){
            pos=fpos+1;
            cnt++;
        }
    }
    if(n==cnt){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
   
}