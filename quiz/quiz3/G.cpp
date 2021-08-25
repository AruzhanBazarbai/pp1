#include <iostream>  
#include <cmath>
#include <vector>
#include <set>
using namespace std;

vector<int> f_p(int a){
    vector<int> vc;
    for (int i=2;i<=sqrt(a);i++){
    
        if(a%i== 0){
        
            vc = f_p(a/i);
            vc.push_back(i);
            return vc; 
            
            }  
        }

    vc.push_back(i);
    return vc;
}

int main(){
    int a ;
    cin >> a ;

    vector<int> vect;
    vect = f_p(a);
    
    for (int j = vect.size()-1 ; j>=0; j--){
        cout << vect[j] << " ";
    } 
}