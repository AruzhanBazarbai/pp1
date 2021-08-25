//One day the freshmen passed the PP1 quiz. There were 9 problems in the exam. Daniil wants to calculate
//how many tasks were completed by students from his group. He decided to automate this process. He has
//created string s, each character in this string shows how many tasks the student has completed. Example:
//"342". The first student completed 3 tasks, the second 4 tasks, the third 2 tasks. Help automate this
//process and display statistics.

#include <iostream>
#include <algorithm>
using namespace std;
int a[10];
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
           a[s[i]-'0']++;
        }
    for(int i=0;i<10;i++){
        if(a[i]>0){
            cout << i << ": " << a[i] << endl;
        }
        
    }

    return 0;
}