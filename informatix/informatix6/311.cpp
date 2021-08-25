/*
Напишите функцию быстрого возведения в степень. Количество действий должно быть пропорционально двоичному логарифму n.

Входные данные
Вводится 2 числа - a (вещественное) и n (целое неотрицательное).

Выходные данные
Необходимо вывести  значение an.
*/

#include <iostream>

using namespace std;

double powerofvalue (double a, int n) 
{
  if (n == 0)
        return 1;
  if (n % 2 == 1) 
        return a * powerofvalue (a, n-1) ;
  else 
        return powerofvalue (a * a, n/2);
}

int main()
{
    double a;
    int b;
    cin >> a >> b;
    cout << powerofvalue(a, b);
    return 0;
}