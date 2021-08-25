//Bad Wi-Fi connection
/*
Unfoturnetely, when one of the assistant hast been setting up marks for midterm, WIFI connection was
cut off. After reconnection, he realized that list of all students and theirs marks were mixed. He knows
that students were in alphabetical order and marks in ascending order. Help assistant to resotre all marks.
Input
The first line contains single integer N - amount of students. In the next N lines will be given pairs of
student name(string) and mark(int).
Output
Print required list. Each student should be in own line
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool f1(int a,int b){
    if(a<b) return true;
    return false;
}
bool f2(string s,string t){
    if(s[0]<t[0]) return true;
    if(s[0]==t[0]){
        int i=1;
        while(s[i]==t[i]){
            i++;
        }
        if(s[i]<t[i]) return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    string s[n];
    int a[n];

    for(int i=0;i<n;i++){
        cin >> s[i] >> a[i];
    }
    sort(a,a+n,f1);
    sort(s,s+n,f2);

    for(int i=0;i<n;i++){
        cout << s[i] << " " << a[i] << endl;
    }

    return 0;
}
