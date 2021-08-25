#include<iostream> 
#include<cmath> 
using namespace std; 
int a[10000000];

void isPrime(int z){
    int cnt=2,j=2;
    int p=4;
    a[0]=2;
    a[1]=3;
    
    while(cnt<10000){
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
    for(int i=0;i<cnt;i++){
        while(z%a[i]==0){
            cout << a[i] << " ";
            z=z/a[i];
        }
    }
    

}

int main(){
    int z;
    cin >> z;
    isPrime(z);
    
    
    return 0; 
} 
