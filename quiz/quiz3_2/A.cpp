/*
Yernur has n banknotes. His friend Arystan asks him q times how many banknotes he has with value of
exactly t. Help Yernur to answer on friend’s questions.
Input
The first line of input contains an integer n (1 ≤ n ≤ 105
). The second line contains n space-separated
integers - values of banknotes (1 ≤ ai ≤ 109
). The third line contains a single integer q - number of
Arystan’s queries (1 ≤ q ≤ 105
). The next q lines contain a single integer t - asked value of banknote.
Output
For each of q query you should output one integer k (number of banknotes with value of exactly t) on a
single line.
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std; 

int main(){

    int n;
    cin >> n;

    map<int,int> my_map;

    for(int j=0; j<n; j++){
        int x;
        cin >> x;
        my_map[x]++;
    }

    int z;
    cin >> z;
    vector<int> my_vector;

    for(int i=0; i<z; i++){
        int a;
        cin >> a;
        my_vector.push_back(my_map[a]);
    }

    vector<int> :: iterator it;

    for(it=my_vector.begin();it!=my_vector.end();it++){
        cout << (*it) << endl;
    }

    
    return 0;
}