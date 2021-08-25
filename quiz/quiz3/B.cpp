#include <iostream> 
#include <unordered_map> 
#include <map> 
using namespace std; 
unordered_map<string,int> m;

int main(){
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        string s;
        cin >> s;
        m[s]++;
        if(m[s]>=2){
            cout << s << endl;
            m[s]=-100;
        }
        
    }
    if(m.size()==k) cout << "Understandable, have a great day";
    return 0; 
} 
