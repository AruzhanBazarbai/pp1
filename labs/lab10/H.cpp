//Next permutation
/*
Askar likes course of discrete structures. Now, he is trying to solve given homework that is about next
permutation. In the task was said that he needs find all possible next permutation of the given sequence.
Some of numbers in the sequence were duplicated. Help Askar to solve homework.
Input
In the first line given single number N - amount of numbers in sequence. The second line contains of N
numbers.
Output
Print all possible next permutation of the sequence. Elements should be separated by single empty space.
Print each of permutaion in own row.
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
    
    for(int i=0;i<n;i++){
        bool k=true;
        for(int j=0;j<=i;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    k=false;
                    break;
                }
            }
        }
        if(k) v.push_back(a[i]);
    }
    
    do{
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
            cout << endl;
    }while(next_permutation(v.begin(),v.end()));
    

    return 0;
}
