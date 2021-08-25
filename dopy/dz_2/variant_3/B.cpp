/*
Rahat wants to go to Magnum and buy fruits. He knows what and how many fruits he need. He calculates
in his mind the prices of fruits after putting in the basket. Help to him do not make a mistake.
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;

    int sum=0;

    for(int i=0;i<n;i++){
        cin >> x;
        sum+=x;
        cout << sum << " ";
    }
    return 0;
}