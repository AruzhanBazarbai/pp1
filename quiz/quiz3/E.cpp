//You are given an array with size - N.
//Your task is - to determine the uniqueness of an array

#include<iostream> 
#include<set>
using namespace std; 


int main(){
    int n;
    cin >> n;
    set<int> my_set;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        my_set.insert(a);
    }
    if(my_set.size()<n) cout << "NO";
    else cout << "YES";
    
    return 0; 
} 
