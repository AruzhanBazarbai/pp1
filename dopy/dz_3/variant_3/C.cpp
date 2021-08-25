//find unique
/*
The KBTU administration distributed ID to all students. Every two students have the same ID number,
except for one. He/She did not find a mate with same ID. The administration does not know who this
student, and asks you to determine the student whose ID is unique.

*/
#include <iostream>
#include <algorithm>
using namespace std;

int a[100];

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i=0;i<100;i++){
        if(a[i]==1){
            cout << i;
            break;
        }
    }
    

    return 0;
}