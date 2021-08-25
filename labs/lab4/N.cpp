#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n ;
    int a[n-1];
    int b=2;

    for(int i=0;i<n-1;i++){
        a[i]=b++;
    }
   
    cout << "2 is prime" << endl;
    for(int i=0;i<n-1;i++){
        int cnt=0;
        double c=sqrt(a[i]);
           
           if(a[i]==3){
               cout << "3 is prime" << endl;
           }          
            else if( a[i]>3 ){
                for(int j=2; j<=c;j++){
                    int k=a[i]%j;
                    if(k==0){
                         cnt++;
                    }
                
                }

                if(cnt=0){
                cout  << a[i] << " " <<  "is prime" << endl;
            }
            
        }
           
    }
        

         
    
     
    
    return 0;     
}