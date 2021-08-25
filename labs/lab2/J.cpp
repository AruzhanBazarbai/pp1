//Given n numbers you need to output the number of zeros among these numbers.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp, result=0;
    for(int i=0; i<n; i++){
        cin >> temp;
        while(temp>0){
            if(temp%10==0)
            result++;
            temp/=10;
        }
    
    }
    cout << result << endl;
    return 0;


}