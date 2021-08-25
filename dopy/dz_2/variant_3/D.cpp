/*
Every body know the rules of traffic lights. When lights red, cars should stop. When yellow to prepare to
drive. When green, go ahead
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]=="red") cout << "stop" << endl;
        else if(s[i]=="yellow") cout << "prepare" << endl;
        else cout << "go" << endl;
    }
    


    return 0;
}