//Статистика
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vE,vO;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0) vE.push_back(x);
        else vO.push_back(x);
    }
    for(int i=0;i<vO.size();i++){
        cout << vO[i] << " ";
    }
    cout << endl;
    for(int i=0;i<vE.size();i++){
        cout << vE[i] << " ";
    }
    cout << endl;
    if(vE.size()>=vO.size()) cout << "YES";
    else cout << "NO";

    return 0;
}