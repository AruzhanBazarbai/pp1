/*
Dana is a new student at KBTU. After results of the final exam, she opened her profile and found out
that her grade for the exam is g, which is some integer number in the range [0, 100].
Now she wonders, what is the equivalent letter grade for her results. Here is the table that corresponds a
grade to its equivalent letter grade:
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>=95 && n<=100) cout << "A";
    else if(n<95 && n>=90) cout << "A-";
    else if(n<90 && n>=85) cout << "B+";
    else if(n<85 && n>=80) cout << "B";
    else if(n<80 && n>=75) cout << "B-";
    else if(n<75 && n>=70) cout << "C+";
    else if(n<70 && n>=65) cout << "C";
    else if(n<65 && n>=60) cout << "C-";
    else if(n<60 && n>=55) cout << "D+";
    else if(n<55 && n>=50) cout << "D-";
    else if(n<50) cout << "F";
    return 0;
}