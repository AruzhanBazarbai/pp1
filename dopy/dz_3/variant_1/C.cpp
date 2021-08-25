/*
Everyone loves the number 7, but integers which when divided by 7 give the remainder of 1, 2 or 5 are
considered BAD. You are given l and r, print all the numbers that are considered BAD in range [l : r]
(inclusive).
*/
#include <iostream>
#include <queue>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    queue<int> q;
    for(int i=a;i<=b;i++){
        if(i%7==1 || i%7==2 || i%7==5){
            q.push(i);
        }
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}