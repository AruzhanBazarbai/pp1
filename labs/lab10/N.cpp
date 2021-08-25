//Problem N. 77351. Possible palindromes
/*
Aibek likes palindromes. He always gets any sequence and try make palindrome. If it is possible to make
many palindromes, prefers first in "ascending"order(Even when sequence is already palindrome). Help
Aibek to create palindrome.
Input
In the first line you are given single number N, which number of elements. Second line contains N numbers.
Output
Print first possible palindrome.If it is not possible, print "Impossible".
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    do{
        bool k=true;
        for(int i=0;i<n;i++){
           if(a[i]!=a[n-i-1]){
               k=false;
           }
        }
        if(k){
            for(int i=0;i<n;i++){
                v.push_back(a[i]);
            }
            break;
        }
    }while(next_permutation(a,a+n));

    if(v.size()==0) cout << "Impossible";
    else{
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
    }
    return 0;
}
