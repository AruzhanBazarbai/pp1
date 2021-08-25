//Given n numbers you need to count the number of even and the number of odd numbers from the given
//list
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp, even=0, odd=0;
    for(int i=0; i<n;i++){
        cin >> temp;
        if( temp % 2 == 0)
        even++;
        else odd++;
    }
    cout << even << " " << odd << endl;
    
    

    return 0;
}