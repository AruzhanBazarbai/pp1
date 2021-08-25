/*
Three fat men decided to argue: which of them is the heaviest. After weighing, it turned out that their
mass, respectively, M1, M2 and M3 kilograms. According to the rules to be called the mass should be at
least 99 and not more than 699 kilograms.
Help to determine the weight of the heaviest of them, or find out that there was an error in the weighing.
Input
Input line contains three integer numbers M1, M2, M3 - masses of men.
Output
In the output file output the weight of the heaviest fat man in case of correct weighing, or the word
"Error"otherwise.
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int m1,m2,m3;
    cin >> m1 >> m2 >> m3;

    int cnt;
    bool k=true;

    if(!(m1>=99 && m1<=699) || !(m2>=99 && m2<=699) || !(m3>=99 && m3<=699)) k=false;
    else{
        cnt=max(m1, max(m2,m3));
    }
    if(k) cout << cnt;
    else cout << "Error";

    return 0;
}