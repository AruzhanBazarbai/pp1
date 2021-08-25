#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int k = 0;
     
    
    for(int i = 0; i < n; i++){
       if(i % 2 == 0){
           for(int j = 0; j < m; j++){
              cout << k << ' ';
              k++;
           }

       }else if(i % 2 != 0){
           for(int j = m; j > 0; j--){
               cout << k << ' ';
               k++;
           }
       }
       cout << endl;
    }

    
    return 0;
}
