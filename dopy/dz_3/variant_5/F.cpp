//deque
/*
Zhansaya wants to find the sum of first and the last number of her deque. If she tired she shows the
character ’!’ , if she wants to add a number to the begin she shows ’+’, and if she wants to add to the
back , shows character ’-’ and if she shows ’*’, you have to find the sum of first and last elements and
delete elements. Help her to solve this problem.
Input
You are given characters ’+’ , ’-’, ’!’ , ’*’ , and numbers.
Output
For ’*’ query print the answer to the problem. Note that if deque is empty print "error".
*/
#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d;
    char x,a;
    while(cin >> x){
          if(x=='!') break;
          else if(x=='+'){
              cin >> a;
              d.push_front(a);
          }else if(x=='-'){
              cin >> a;
              d.push_back(a);
          }else if(x=='*'){
              if(!d.empty()){
              cout << int(d.front()-'0')+int(d.back()-'0') << endl;
              d.pop_back();
              d.pop_front();
              }else{
                  cout << "error" << endl;
              }
          }
    }
    return 0;
}