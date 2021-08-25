//Using a vector. the user writes a command such as push after that he should keep the number and so on.

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> v;
    string s;
    while(cin >> s){
        if(s=="end"){
            cout << "Black Devil" << endl;
            break;
            
        }else{
            if(s=="push"){
                int x;
                cin >> x;
                v.push_back(x);
                cout << "OK" << endl;

            }else if(s=="size"){
                cout << v.size() << endl;
            }else if(s=="back"){
                cout << v.back() << endl;
            }else if(s=="front"){
                cout << v.front() << endl;
            }else if(s=="pop"){
                cout << "OK" << endl;
                v.pop_back();
            }else if(s=="clear"){
                cout << "OK" << endl;
                v.clear();
            }
        }
    }
    return 0;
}