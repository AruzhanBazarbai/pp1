/*
Yelnur loves basketball. And one day he was busy at work, while his favorite team was playing against
their biggest opponents. He really wanted to know who was winning at that time, help him please. You
are given six integers, results of three first periods, define which team is winning.
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
   int n=6;
   int a[n];
   int sum1=0,sum2=0;
   for(int i=0;i<n;i++){
       cin >> a[i];
       if(i%2==0){
           sum1+=a[i];
       }else{
           sum2+=a[i];
       }
   }
   if(sum1>sum2) cout << "Grats Yelnur";
   else if(sum1==sum2) cout << "Draw";
   else cout << "Hee Hee Losers";

    return 0;
}