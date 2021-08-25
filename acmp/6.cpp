//Шахматы
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    bool z=true;

    if(s.size()!=5) z=false;

    if(s[2]!='-') z=false;

    if(!(int(s[0])>=65 && int(s[0])<=72) || !(int(s[3])>=65 && int(s[3])<=72)) z=false;

    if(!(int(s[1])>=49 && int(s[1])<=56) || !(int(s[4])>=49 && int(s[4])<=56)) z=false;

    if(z){
        if(abs((s[0]-s[3])*(s[1]-s[4]))==2) cout << "YES";
        else cout << "NO";

    }else{

        cout << "ERROR";
    }
    

    return 0;
}