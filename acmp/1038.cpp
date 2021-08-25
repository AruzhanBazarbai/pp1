//Перевязь
#include <iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  if(a%10!=0){
      cout << a/10+1;
  }else{
      cout << a/10;
  }
  return 0;
}