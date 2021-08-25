//Help Aisultan choose which discipline to drop, so he will have a good GPA. Each row represents one
//subject with its grades. Pick one subject with the minimal total grades. If two or more subjects’ grades
//are equal, pick the first one.
#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n >> m;
    int a[n];
    int x;
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> x;
            a[i]+=x;
         }
    }
    int mini=1e9;
    int index=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mini>a[i]){
                mini=a[i];
                index=i+1;
            }
        }
    }
    cout <<  index <<  "\n";

    return 0;
}

