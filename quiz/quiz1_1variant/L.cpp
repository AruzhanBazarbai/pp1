/*
For Temirlan’s birthday, his mother gave him a beautiful and delicious carrot cake, which had a perfectly
round shape. Temirlan did not know how many of his friends would come to the university that day, and
since he is engaged in competitive programming, he decided to develop an algorithm according to which
he could quickly cut the cake into N equal parts. It should be noted that the cuts of the cake can be made
both in radius and in diameter.
Help Temirlan solve this problem by determining the smallest number of cake cuts for a given number of
his friends who came to the university that day.
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1 || n==0) cout << "0";
    if(n%2==0){
        cout << n/2;
    }else if(n>1 && n%2==1){
        cout << n;
    }
    
  
    return 0;
}