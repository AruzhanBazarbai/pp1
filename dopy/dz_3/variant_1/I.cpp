//BAdaev i Amanov
#include <iostream>  
using namespace std;  
int main()  {  
    int n,c,i,j,k;    
    cin>>n;    
    int a[n][n],b[n][n],mul[n][n];
    for(i=0;i<n;i++){    
        for(j=0;j<n;j++){    
            cin>>a[i][j];  
        }    
    }       
    for(i=0;i<n;i++){    
        for(j=0;j<n;j++){    
            cin>>b[i][j];    
        }    
    }
    for(i=0;i<n;i++){    
        for(j=0;j<n;j++){    
            mul[i][j]=0;    
            for(k=0;k<n;k++){    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    
    for(i=0;i<n;i++){    
        for(j=0;j<n;j++){    
            cout<<mul[i][j]<<" ";    
        }    
        cout<<"\n";    
    }    
    return 0;  
}