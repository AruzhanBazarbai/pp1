//Problem B. Triforce
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,d,b=1,z=1,cnt=0,cnt1=0,cnt2=0,cnt3=0;
    cin >> a;
    d=a*2-1;
    int x=-1,y=-1,c=-1,r=-1;
    int m=(a-2)*2-1;

    for(int i=0;i<a*2;i++){
        for(int j=0;j<a*4-1;j++){
           if(i==0 || i==a){
              if(i+j==d || j-i==d){
                  cout << '*';
                  cnt++;
                  r=x;
                  c=y;
                  x=i;
                  y=j;
                  cnt1=0;
                  cnt2=0;
              }
              else cout << ' ';

            }else if(i==a*b-1){
                if(i+j==d){
                    int n=0;
                    while(n!=d){
                        cout << '*';
                        n++;
                    }
                    cout << ' ';
                    if(i==d){
                        int n=0;
                        while(n!=d){
                           cout << '*';
                           n++;
                        } 
                    }
                    b++;
                }else{
                    cout << ' ';
                }
            }else{
                
                if((x!=-1 && y!=-1)||(c!=-1 && r!=-1 && cnt==3)){
                    if(abs(x-i)==abs(y-j) && cnt1<=m){
                        cout << '*';
                        cnt1++;
                    }
                    else if(abs(r-i)==abs(c-j) && cnt2<=m && c!=-1 && r!=-1){
                        cout << '*';
                        cnt2++;
                    }
                    else cout << ' ';
                    
                }
            }
        }
        cout << endl;

    }
    
    

    return 0;
}