//Schoolboy Vanya recently learned prime numbers. His dream is to find the "last"prime in the universe.
//Let’s help him move towards his dream and find n-th prime for him.

#include<iostream> 
#include<cmath> 
using namespace std; 
int a[100000];

void isPrime(int n){
    int cnt=2,j=2;
    int p=4;
    a[0]=2;
    a[1]=3;
    
    while(cnt<=n){
        bool k=true;

        for(int i=2;i<=sqrt(p);i++){
            if(p%i==0){
                k=false;
                break;
            }
        }
        if(k){
            a[j]=p;
            j++;
            cnt++;
        }
        p++;
       
    }
    cout << a[n-1];
    

}

int main(){
    int n;
    cin >> n;
    isPrime(n);
    
    
    return 0; 
} 
