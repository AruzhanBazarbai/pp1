#include <iostream>  // isPrime
using namespace std;

int counter = 0;

bool isPrime(int n) {
    bool answer = true;
    if(n<2){
        answer=false;
        return answer;
    }
    if(n>=2){
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                answer = false;
                return answer;
        }
    }
    return answer;
    }
}

int nthPrime(int n){
    double i;
    for(i=2;counter<n;i++){
        if(isPrime(i)){
            counter++;
        }
    }
    return i-1;
}

int main(){

    int userInput;
    cin>>userInput;

    cout<<nthPrime(userInput);
    return 0;

}