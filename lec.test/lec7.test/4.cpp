#include <iostream>
using namespace std;

int main (int argc, char ** argv){

    bool odd=false;

    if(argc>1){
        if(string(argv[1])=="odd"){
            odd=true;
        }
    }

    
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
 
    }
    int evenCount=0;
    int oddCount=0;
     
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
 
    }
    if(odd) cout << oddCount;
    else cout << evenCount;
    return 0;





}