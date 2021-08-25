/*
Все решения задач необходимо оформлять в виде соответствующих функций. Ввод и вывод данных должны осуществляться в основной части программы. Ввод и вывод данных производятся через стандартные потоки ввода-вывода.
Для биномиальных коэффициентов (числа сочетаний из n по k) хорошо известна рекуррентная формула: Cnk=Cn-1k-1+Cn-1k, Cn0=Cnn=1.
Входные данные
Вводится 2 числа - n и k.

Выходные данные
Необходимо вывести  значение Cnk.
*/

#include <iostream>

using namespace std;

unsigned long long int factorial(unsigned long long n)
{
    if(n < 0) 
        return 0; 
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1); 
}

unsigned long long int bincoef(unsigned long long n,unsigned long long k)
{
   return factorial(n) / (factorial(k) * factorial(n - k));
}

int main()
{
    unsigned long long n, k;
    cin >> n >> k;
    cout << bincoef(n, k);
    return 0;
}