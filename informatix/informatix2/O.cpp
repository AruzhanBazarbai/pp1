/*
Пирожок в столовой стоит a рублей и b копеек. 
Определите, сколько рублей и копеек нужно заплатить за n пирожков.

Входные данные
Программа получает на вход три числа: a, b, n.

Выходные данные
Программа должна вывести два числа: стоимость покупки в рублях и копейках.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int a,b,n;
    cin >> a >> b >> n;
    a=a*100;
    int c=a+b;

    int sum=c*n;
    cout << sum/100 << " " << sum%100;

    return 0;
   
}

 