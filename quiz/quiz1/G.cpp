//Help Bakdaulet to find the average number of input numbers and the sum of these numbers.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum=0;  
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    double d=sum/1.00000/n;
    cout << "Average:" << " " << d << "\n";
    cout << "Sum:" << " " << sum << "\n";



}