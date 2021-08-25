//Calculate sum of a and b, using only recursion function with +1 and -1 operations. Not allowed using any
//type of loop. Your function must be recursive.)

#include <iostream>
#include <cmath>
using namespace std;

int f1(int a,int b){
   if(b==0) return a;
   return f1(a-1,b+1);
}

int f2(int a,int b){
   if(a==0) return b;
   return f2(a+1,b-1);
}
int f3(int a,int b){
   if(a==0) return b;
   return f3(a-1,b+1);
}

int main(){
    int a,b;
    cin >> a >> b;
    if(a<0 && b<0){
        cout << f1(a,b);
    }else if(a>0 && b<0){
        cout << f1(a,b);
    }else if(a<0 && b>0){
        cout << f2(a,b);
    }else if(a>0 && b>0){
        cout << f3(a,b);
    }
    return 0;
}