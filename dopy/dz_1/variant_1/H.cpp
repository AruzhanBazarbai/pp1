//посчитайте количество введеннных чисел. ввод останавливается когда введенное число окажется отрицательным
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x,cnt=0;
    
    while(cin >> x){
        if(x<0) break;
        cnt++;
    }

    cout << cnt;

    return 0;
}