#include <iostream>
#include <climits> 
using namespace std; 
int main(){​​​​​

   int m, n; 
   cin >> m >> n; 

   int a[m][n]; 
   int b[m]; 
   int bestValue = INT_MIN; 
   int indexOfBestValue = 0;

   for(int i=0; i<m; i++){​​​​​ 
      b[i] = 0; 
      for(int j=0; j<n; j++){​​​​​ 
      cin >> a[i][j]; 
         if(a[i][j] > bestValue){​​​​​ 
         bestValue = a[i][j]; 
         indexOfBestValue = i;
      }​​​​​ 
      b[i] += a[i][j];
   }​​​​​ 
}​​​​​ 

   for(int i=0; i<m; i++){​​​​​ 
      for(int j=0; j<n; j++){​​​​​ 
         if(bestValue == a[i][j] && indexOfBestValue != i){​​​​​ 
            if(b[indexOfBestValue] < b[i]){​​​​​ 
               indexOfBestValue = i; 
            }​​​​​ 
         }​​​​​ 
      }​​​​​ 
   }  ​​​​​ 
cout << indexOfBestValue << endl; 
return 0;
}