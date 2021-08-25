#include<iostream> 
#include<algorithm> 
using namespace std; 

void arab(int n,string s,string t){
    cin >> n;
    for(int i=0;i<n;i++){
       cin >> s >> t;
       if(s.size()!=t.size()) cout << "No";
       else if(s.size()==t.size()){
           for(int i=0;i<s.size();i++){
               s[i]=tolower(s[i]);
               t[i]=tolower(t[i]);
            }
            for(int i=0;i<s.size();i++){
            if(s[i] != t[i]){
            if(!((s[i] == 'b' && t[i] == 'p') || (s[i] == 'p' && t[i] == 'b')) &&!(s[i] == 'i' && t[i] == 'e' || s[i] == 'e' && t[i] == 'i'))
               cout << "No";
               break;
            }
            cout << "Yes";
        }
    }
        
}
}

int main(){
    arab();
    return 0; 
} 
