//You’re given integer N, you need to answer, is the sum of digits in odd positions is equal to sum of digits
//in even positions
#include <iostream>
using namespace std;
int main(){
    string N;
    cin >> N;
    int sumeven=0;
    int sumodd=0;
    for(int i=0; i<N.size();i++){
       if(i%2==0){
           sumodd+=(N[i]-'0');
       }else{
           sumeven+=(N[i]-'0');
        }
    }
    
      if(sumeven == sumodd){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
    
} 