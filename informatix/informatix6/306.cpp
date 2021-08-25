/*Все решения задач необходимо оформлять в виде соответствующих функций. Ввод и вывод данных должны осуществляться в основной части программы. Ввод и вывод данных производятся через стандартные потоки ввода-вывода.
Напишите функцию int min (int a, int b, int c, int d) (C/C++), static int min (int a, int b, int c, int d) (Java) function min (a,b,c,d: integer):integer (Pascal), находящую наименьшее из четырех данных чисел.

Входные данные
Вводится четыре числа.

Выходные данные
Необходимо вывести  наименьшее из 4-х данных чисел.
*/

#include <iostream>
#include <algorithm>
using namespace std;

void minValue(int a, int b, int c, int d){

    cout << min(min(a,b), min(c,d));

}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    minValue(a,b,c,d);

    return 0;
}
