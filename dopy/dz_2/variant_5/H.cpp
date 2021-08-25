//Right sum
/*
One day Meirkhan challenged his friend Adlet with following task. Given three integers n, m, k, output
any two dimensional array of n rows and m columns, such that sum of all elements in the array is k. In
order to make problem not so easy, severe Meirkhan decided not to allow Adlet to use 0-s in his problem.
Can you help Adlet?
Input
In a single line given three integers n, m, k separated by space — number of rows, columns and the required
sum respectively (1 ≤ n, m ≤ 100, −105 ≤ k ≤ 105
).
There is no test case with n = 1, m = 1, k = 0.
Output
Output n rows each containing m space separated integers each in the range [−106
; 106
]. It can be shown
that there exists answer with given constraints.
If there are multiple answers, output any of them.
*/
#include <iostream>
using namespace std;

void f( int n, int m, int k){
    int p=n*m-2;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=1;
        }
    }
      
    if((k-p)%2==0){ 

       a[0][0]=(k-p)/2;
       a[1][0]=(k-p)/2;
        
    }else{
       a[0][0]=(k-p+1)/2;
       a[1][0]=k-p-a[0][0];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
   
}
int main(){
   int n,m,k;
   
    cin >> n >> m >> k;

    f(n,m,k);
    return 0;
}
