/*
There is a robot starting at position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge
if this robot ends up at (0, 0) after it completes its moves.
The move sequence is represented by a string moves, and the character moves[i] represents its i-th
move. Valid moves are R (right), L (left), U (up), and D (down). You must to implement FUNCTION
isBacktoHome(string moves). If the robot returns to the origin after it finishes all of its moves, function
returns true. Otherwise, returns false.
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool isBacktoHome(string s,string t,string t1){
    for(int i=0;i<s.size();i++){
        if(s[i]=='U'){
            t[0]+=1;
        }else if(s[i]=='D'){
            t[0]-=1;
        }else if(s[i]=='R'){
            t[1]+=1;
        }else{
            t[1]-=1;
        }
    }
    if(t==t1) return true;
    else return false;
    
}

int main(){
    string s,t;
    cin >> s;
    t="00";
    string t1=t;
   
    if(isBacktoHome(s,t,t1)) cout << "True";
    else cout << "False";
    return 0;
}