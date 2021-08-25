//Find the number of numbers that is greater than the previous number
#include<iostream> 
using namespace std; 
int main(){
    int n, cnt = 0, prev = 0;
    while (cin >> n){
        if (n == 0)
            break;
        
        if (n>prev)
            cnt++;
        
        prev = n;
    }
if (cnt == 0)
        cout << cnt;
    else
        cout << cnt-1;


    return 0; 
} 
