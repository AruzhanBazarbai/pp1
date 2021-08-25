//Разность времен
#include <iostream>
using namespace std;
int main(){
    int h1,h2,m1,m2,s1,s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    long long s=3600*(h2-h1)+60*(m2-m1)+(s2-s1);
    cout << s;
    
    return 0;
}
