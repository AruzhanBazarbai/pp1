//Даны два числа n и m. Создайте двумерный массив [n][m] и заполните его по следующим правилам: Числа, стоящие в строке 0 или в столбце 0 равны 1 (A[0][j]=1, A[i][0]=1).
// Для всех остальных элементов массива A[i][j]=A[i-1][j]+A[i][j-1], то есть каждый элемент равен сумме двух элементов, стоящих слева и сверху от него.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(i==0 || j==0){
            a[i][j]=1;
           }else{
               a[i][j]=a[i-1][j]+a[i][j-1];
           }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
  


    return 0;
}