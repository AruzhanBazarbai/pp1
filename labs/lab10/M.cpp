//Problem M. 77330. unique x set
/*
We know that it is easy to find all unique elements in sorted order via set. But also, there are exist such
functions as unique that will give iterator without consecutive duplicates as a result. In this task you will
be given two sequences. Erase all consequent duplicates for both vectors. Then merge them to the new
vector(Turn by turn,first element will be first of first, second element of the new vector will be first of the
second). Do the same thing with a new vector(Use unique again).
Input
The first line will contain numbers N and M.(Number of elements of the corresponded vectors). Next two
lines contain sequences of integers.
Output
Print sequence separated by single empty space.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v1,v2;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i=0;i<m;i++){
        int y;
        cin >> y;
        v2.push_back(y);
    }
    vector<int> :: iterator it1, it2;

    it1=unique(v1.begin(),v1.end());
    v1.resize(distance(v1.begin(),it1));

    it2=unique(v2.begin(),v2.end());
    v2.resize(distance(v2.begin(),it2));

    vector<int> s(v1.size()+v2.size());
    
    for(int i=0;i<s.size();i+=2){
        s[i]=v1[i/2];
    }

    for(int i=1;i<s.size();i+=2){
        s[i]=v2[i/2];
    }

    vector<int> :: iterator it3;

    it3=unique(s.begin(),s.end());

    s.resize(distance(s.begin(),it3));

    for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }

    return 0;
}
