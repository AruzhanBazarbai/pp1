#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//problem F Done

int main(){

    int n;
    cin >> n;
    
    set<string> students, practice;
    
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;

        students.insert(x);
    }
    
    int m;
    cin >> m;
    
    for(int i = 0; i < m; i++){
        string x;
        cin >> x;

        practice.insert(x);
    }

    set<string>::iterator it;
    
    cout << "Missed students:" << endl;
    
    for(it = students.begin(); it != students.end(); it++){

        if(practice.insert(*it).second) cout << "- " << *it << endl;
    
    }
    
    cout << "Not in the group:" << endl;
    
    for(it = practice.begin(); it != practice.end(); it++){

        if(students.insert(*it).second) cout << "- " << *it << endl;
    
    }
}
