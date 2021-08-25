//Измени порядок
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    stack<string> s;
    string x,res="";

    for(int i=0;i<n+1;i++){
        getline(cin,x);

        for(int j=0;j<x.size();j++){
            if(j==x.size()-1){
                res+=x[j];
                s.push(res);
                res="";
            }else if(x[j]==' ' && j!=x.size()-1){
                s.push(res);
                res="";
            }else res+=x[j];
        }
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }

    
    return 0;
}