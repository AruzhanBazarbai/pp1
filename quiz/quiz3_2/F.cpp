/*
Askar agay has a list of his students in PP2.
He decided to take attendace during current practice.
Askar agay has a list of students who are in practice right now.
He wants to find students who missed the practice, as well as students who came to his practice from
another group.
Input
In the first line given n - the number of students of Askar agay.
In the second line given list of names of students
In the third line given m - the number of students in current practice.
In the fourth line given list of names of students of current practice.
Output
At first, print students name in ascending order, who missed practice, line by line.
After, print names of students in ascending order, who came to practice from another group.
*/
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

void funC(){
    int n;
    cin >> n;
    
    set<string> studS;

    set<string> pracT;
    
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
 
        studS.insert(s);
    }
    
    int m;
    cin >> m;
    
    for(int j=0; j<m; j++){
        string t;
        cin >> t;
 
        pracT.insert(t);
    }
 
    set<string>::iterator it;
    
    cout << "Missed students:" << endl;
    
    for(it=studS.begin(); it!=studS.end(); it++){
       if(pracT.insert(*it).second) cout << "-" << " " << *it << endl;
    }
    
    cout << "Not in the group:" << endl;
    
    for(it=pracT.begin(); it!=pracT.end(); it++){
        if(studS.insert(*it).second) cout << "-" << " " << *it << endl;
    }
}
 
int main(){

    funC();

    return 0;
}