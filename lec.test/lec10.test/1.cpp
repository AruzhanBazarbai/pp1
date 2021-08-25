#include <iostream>
#include <vector>
using namespace std;

void printVector3(vector<int>  v){
    cout << v.size() << endl;
    vector<int> :: reverse_iterator it;
    for(it = v.rbegin(); it != v.rend(); ++it){
        cout << *it << " ";
    }
}

void sample11(){
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    printVector3(v);
}


int main(){

    sample11();

    return 0;
}