//great seven
//Everybody loves seven, so convert decimal(base 10) to base 7.
#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
        int num=0, t=0;
    
    cin >> num;
    while(num>0){
        t=num%7;
         num=num/7;
        vec.push_back(t);
    }
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i];
    }
   
   
    return 0;
}