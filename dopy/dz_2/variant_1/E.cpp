/*
Ali really loves palying computer games. During the game, he plays n rounds.
 If he wins the game i, he
earns i points (indexing starts from 1). But, he can also learn some bonus points - ai
.
Your task is to find the total amount of points earned by Ali
In the first example Ali earns 10 points: 1(i) + 3(ai) + 2(i) + 0(ai) + 3(i) + 1(ai)
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int sum=0,x;
    for(int i=1;i<=n;i++){
        cin >> x;
        sum=sum+i+x;
    }
    cout << sum;
   
    
    
    
    
    return 0;
}