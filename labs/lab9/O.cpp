//Students of KBTU want to registrate in ejudge. You have logins and passwords of n students. Then we
//have m requsts. Every request have login and password, if this login does not exist print "login error else
//if login exist and password is not correct print "password error else print "correct password";

#include<iostream>
#include<map>

using namespace std;

int main(){
    int n, b;
    cin >> n;
   
    map <string,string> m;
     string s, a;

    for(int i=0;i<n;++i){
        cin >> s >> a;
        m[s]=a;
    }

    string s2, a2;
    cin >>b;
    map<string, string> :: iterator it;
    for(int i=0;i<b;++i){
        cin >> s2 >> a2;
        it=m.find(s2);
        if(it!=m.end()){
            if(it->second==a2){
                cout << "correct password"<< endl;
            }else if(a!=a2){
                cout << "password error" << endl;
            }
        
        }else{
            cout << "login error"<< endl;
        }
    }

    return 0;
}