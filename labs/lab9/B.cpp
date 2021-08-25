/*
You have an array which consists of n integer numbers. Your task is to output all even numbers in
decreasing order and then all odd numbers in increasing order.
Input:
In first line you have n - size of the array.(1<=n<=20) Second line contains elements of the array.
Output:
Print even numbers in decreasing order then odd numbers in increasing order.
*/

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n,x;
    cin >> n;
    multiset<int> msE;
    multiset<int> msO;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%2==0){
            msE.insert(x);
        }else{
            msO.insert(x);
        }
    }
    multiset<int> :: reverse_iterator rit;
    multiset<int> :: iterator it;

    for(rit=msE.rbegin();rit!=msE.rend();rit++){
        cout << *rit << " ";

    }
    for(it=msO.begin();it!=msO.end();it++){
        cout << *it << " ";

    }

    return 0;
}