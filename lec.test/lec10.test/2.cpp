#include <iostream>
#include <vector>
using namespace std;

void sample19(){
    map<string, int> m;
    string s;
    while(1){
        cin >> s;
        if(s == "end") break;
        m[s]++;
    }

    int n;
    cin >> n;
    bool found = false;

    map<string, int> :: iterator  it;
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second == n){
            cout << (*it).first << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Not found!" << endl;
    }


}


int main() {

    sample19();

    return 0;
}