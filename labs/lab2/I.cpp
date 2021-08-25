//Among n numbers you need to count the number of numbers that ends with 7.
#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   int temp, count=0;
   for(int i=0; i<n; i++){
       cin >> temp;
           if(temp%10==7){
               count++;
           }
   }
       cout << count << endl;
       return 0;

       
   

}