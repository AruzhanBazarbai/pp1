//You’re given integer N, write a function that will return prime factorization of this integer.
#include <iostream> 
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std; 
  
void  p_f(int a){  
    
    while(a % 2 == 0) {  
        
        cout << 2 << " ";  
        a = a / 2;  
    }  
    for(int i= 3; i <= sqrt(a); i += 2){  
        
        while (a % i == 0){  
            
            cout << i<< " ";  
            a= a / i;  
        }  
    }  
  
    if(a > 2)  {
        cout << a << " ";  
    }
}  
  
int main(){  
    int n;
    cin >> n;

    p_f(n);

    return 0;  
}