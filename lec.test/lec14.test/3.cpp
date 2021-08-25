#include <iostream>
#include <vector>
using namespace std;

void f1(vector<int> * a){//адрес на оригинал
    for(int i=0;i<a->size();i++){
        cout << a->at(i) << " ";
    }
}

void f2(vector<int> a){//копия оригинала, не влияет на оригинал
    a[0]=15;
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}

int main(){
    vector<int> v({1,2,3,4});
    
    f1(&v);
    cout << endl;
    f2(v);

    return 0;
}