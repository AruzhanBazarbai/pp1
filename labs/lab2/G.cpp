//Given n integers. In this task, you should find the maximum from these numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp, maxi=-1;
    for( int i = 0; i < n;i++ ){
        cin >> temp;
        if(temp>maxi)
            maxi=temp;
    }
        cout << maxi << endl;


    return 0;
}