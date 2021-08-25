//Adlet has an exam today. It starts exactly at h1 : m1. Is he going to be late if he comes at h2 : m2? If he
//comes at the exact beginning of the exam, Adlet is not late.


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int h1,m1,h2,m2;
    cin >> h1 >> m1 >> h2 >> m2;

    if(h1>h2) cout << "No";
    else if(h1<h2) cout << "Yes";
    else if(h1==h2){
        if(m1>m2 || m1==m2) cout << "No";
        else cout << "Yes";
    }
    return 0;
}