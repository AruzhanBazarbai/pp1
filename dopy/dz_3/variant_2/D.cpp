//game of brilliants
/*
Bob and Nelson play a game. They have to take some amount of brilliants from the bag with N brilliants.
They decided that a winner will be a player who take the last brilliant in the bag.
The rule of game is so simple. In the i’th round, Bob takes i amount of brilliants whereas Nelson takes
two times more brilliants.
In the bag, there are only N brilliants. Please help to find the winner.
Input
First line contains an integer N - number of brilliants in the bag.
Output
Output "Bob"if Bob takes the last brilliant ,"Nelson"otherwise.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin >> a;
    bool k = true;
    for(int i=1;i<a;i++){
        if((a-3*i)<=0){
            if(a - i >= 0){
                cout << "Nelson";
                k = false;
                break;
                
            }
        }else{
            a = a - 3 * i;
        }
    }
    if(k == true){
        cout << "Bob";
    }   
    return 0;
}