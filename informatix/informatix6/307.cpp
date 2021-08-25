/*
Напишите функцию double power (double a, int n) (C/C++), function power (a:real; n:longint): real (Pascal), вычисляющую значение an.
Входные данные
Вводится 2 числа - a (вещественное) и n (целое неотрицательное).

Выходные данные
Необходимо вывести  значение an.
*/
#include <iostream>
using namespace std;

double powerOfValue(double a, int n){

    double res=1;

    for(int i=0; i<n; i++){
        res=res*a;
    }

    return res;

}

int main(){
    double a;
    int n;

    cin >> a >> n;

    cout << powerOfValue(a,n);

    return 0;
}
