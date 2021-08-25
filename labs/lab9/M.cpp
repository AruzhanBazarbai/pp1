/*
We have a queue of boys who want to buy tickets to their girlfriends to the movie. We are given n actions
of two types. The first type is new boy with a given name gets to the end of the queue, the second type
is first boy in queue buys a ticket and leaves the queue. After each action, you must answer who is first
in the queue right now, or show that the queue is empty and print "queue is empty"
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    string s;
    queue<string> q;

    for(int i=0;i<n;i++){
        cin >> x;
        if(x==1){
            cin >> s;
            q.push(s);
        }
        else if(x==2) q.pop();
        if(!q.empty()) cout << q.front() << endl;
        else cout << "queue is empty"  << endl;
       
    }
    
    return 0;
}