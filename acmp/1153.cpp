//Благозвучное слово
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt1=0,cnt2=0,cnt=0;

    for(int i=0;i<s.size()-1;i++){
        if( s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y' && s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u' && s[i+1]!='y')
            cnt1++;
        else if(( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='y'))
            cnt2++;
        else if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y') && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='y')){
            cnt1++;
            if(cnt1>2){
                if(cnt1%2==0){
                   int d=cnt1/2-1;
                   cnt+=d;
                }else{
                   cnt+=cnt1/2;
                }
            }
            cnt1=0;
        }else if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') && (s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u' && s[i+1]!='y')){
            cnt2++;
            if(cnt2>2){
                if(cnt2%2==0){
                   int d=cnt2/2-1;
                   cnt+=d;
                }else{
                   cnt+=cnt2/2;
                }
            }
            cnt2=0;
        }
        if(i==s.size()-2){
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y' && s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u' && s[i+1]!='y'){
                cnt1++;
                if(cnt1>2){
                    if(cnt1%2==0){
                       int d=cnt1/2-1;
                       cnt+=d;
                    }else{
                       cnt+=cnt1/2;
                    }
                }
                cnt1=0;
            }else if(( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='y')){
                cnt2++;
                if(cnt2>2){
                    if(cnt2%2==0){
                       int d=cnt2/2-1;
                       cnt+=d;
                    }else{
                       cnt+=cnt2/2;
                    }  
                }
                cnt2=0;
            }

        }
    }
    cout << cnt;
    
    return 0; 
}
