#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main (){

    int n;
    cin >> n;
    int a[n];

    for( int i = 1; i <= n; i++ ){
        a[i] = i;
       
    }
   
    
    for( int i = 2; i <= n; i++ ){
         bool k = true;
       if(a[i]==2 || a[i]==3){
           cout << a[i] << " is prime" << endl;
       }else if(a[i] > 3){
           double c = sqrt(a[i]);
           for(int j = 2; j <= c; j++){
               if( a[i] % j == 0 ){
                   k=false;
                   break;
               }
           }
           if(k) cout << a[i] << " is prime" << endl;
       }
       
    }
 
    return 0;
}