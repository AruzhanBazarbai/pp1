/*
Напишите рекурсивную функцию, возводящую число a в степень n. Гарантируется, что все числа "помещаются" в стандартные вещественные (a и ответ) и целые (n) типы.

Входные данные
Вводится 2 числа - a и n (число n может быть отрицательным).

Выходные данные
Необходимо вывести  значение an
*/
#include <iostream>
using namespace std;

double powerOfValue(double a, int n){

    double res=1;
    if(n<0){
        for(int i=0; i>n; i--){
            res=res*a;
        }
        double c=1/res;
        return c;
    }else{
        for(int i=0; i<n; i++){
            res=res*a;
        }
        return res;
    }
       
   

}

int main(){
    double a;
    int n;

    cin >> a >> n;

    cout << powerOfValue(a,n);

    return 0;
}


