/*
Даны значения двух моментов времени, принадлежащих одним и тем же суткам: 
часы, минуты и секунды для каждого из моментов времени. 
Известно, что второй момент времени наступил не раньше первого. 
Определите, сколько секунд прошло между двумя моментами времени.

Входные данные
Программа на вход получает три целых числа — часы, минуты, секунды, 
задающие первый момент времени и три целых числа, задающих второй момент времени.

Выходные данные
Выведите число секунд между этими моментами времени.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int a,b,c;
    cin >> a >> b >> c;

    int total1=a*3600 + b*60 + c;
    
    int d,e,f;
    cin >> d >> e >> f;

    int total2=d*3600 + e*60 + f;

    int total=total2-total1;

    cout << total;


    return 0;
   
}
