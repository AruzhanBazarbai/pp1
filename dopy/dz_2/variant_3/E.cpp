/*
The store has N products. Among them, some M unknown consecutive products you can buy at a very
low price.Additionally, you know that the K’th product is in discount. Print all products that potentially
included in discount.
Input
First line contains N, M, K (1 <= N <= 100, 1 <= M,K <= N) number of products in store, number of
product included in discount, index of guaranteed product in discount. Second line of input contains N
strings names of products.
Output
Print all products that potentially included in discount.
*/
#include <iostream>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    string s[n];

    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    
    for(int i=k-m; i<k+m-1;i++){
        if(i>0 && i<n) cout << s[i] << endl;
    }
    return 0;
}