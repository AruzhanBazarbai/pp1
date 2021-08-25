//Problem G. Attendance pliz
/*
Askar Agay, due to the fact that few students remain in practice, decided to take an attendance. He has a
list of students who came to practice for November. Askar agay decided to add +1 points to all students
who was in practice at least 3 three different days. Keep in mind that Askar Agay could take attendance
on the same day several times!
Input
You are given list of attendance with n rows. Each row consist of student name, and day of November.
It means student was in practice on that day.
Output
Print all students name, and if student was in practice at least 3 times print +1, otherwise print NO BONUS.
*/
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

map<string,int> m;

int main(){
    int n;
    cin >> n;
    set< pair<string,int> > st;
    
    for(int i=0;i<n;i++){
        string s;
        int x;
        cin >> s >> x;
        st.insert(make_pair(s,x));
        
    }
    
    set< pair<string,int> > :: iterator itt;
    
    for(itt=st.begin();itt!=st.end();itt++){
        string x=(*itt).first;
        m[x]++;
    }

    map<string,int> :: iterator it;

    for(it=m.begin();it!=m.end();it++){
       if((*it).second>=3) cout << (*it).first << " +1" << endl;
       else cout << (*it).first << " NO BONUS" << endl;
    }

    return 0;
}