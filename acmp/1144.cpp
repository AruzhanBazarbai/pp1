//Расстояние между максимумами
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c,cnt=0,i=2,i_1=0,i_2=0,index=0,mini=1e9;
    cin >> c;
    //cout << c << endl;
    b=c;
    cin >> c;
    //cout << c << endl;
    do{
        a=b;
        b=c;
        cin >> c;
        
        //cout << c << " " << i << endl;
        //cout << c << endl;

        if(b>a && b>c && c!=0){
            cnt++;
            i_1=i_2;
            i_2=i;
            if(i_2!=0 && i_1!=0){
                index=abs(i_2-i_1);
                if(mini>index) mini=index;
            }
        }
        i++;
    }while(c!=0);

    if(mini==1e9) cout << 0;
    else cout << mini;
    return 0; 
}
