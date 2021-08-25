//Instead of...
/*
It will be obvious to say that most of FIT student like to solve intersting problems. Aldiayar told Assyl
to said one of such problems. He wrote sequence of numbers on paper and showed it via mirror. As you
can mention, Assyl sees reversed sequence. Give hints for Assyl in which places were numbers originally.
Input
In the first row given single number N - amount of numbers in the sequence. The next line contains N
numbers.
Output
Print hints as in examples. If values are equal print OK only for that case.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[i]=x;
        b[i]=x;
    }
    reverse(a,a+n);

    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout << "Instead of " << b[i] << " here was " << a[i] << endl;
        }else if(a[i]==b[i]){
            cout << "OK" << endl;
        }
    }

    return 0;
}
