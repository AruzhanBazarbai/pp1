/*
There is an impostor among us. In the first minutes of every contest he submits his solutions at the speed
of a machine-gun. Besides, he cheats by means of using several ip addresses for submiting. You already
know that cheating is prohibited in KBTU. So, we decided to disqualify the cheaters. We know who
submitted their solutions in the first minutes of a contest. For this we need to analyze the list of submits
If a person has submitted 2 or more solutions, he is a cheater.
Input
The first line contains the number N (3 <= N <= 100) of submissions in the first minutes of the contest
. The next N lines contain the string - name of student who submitted solution.
Output
The name of the cheater in each line. The order should be as they occur in the input list. If there are no
cheaters, output: "Understandable, have a great day"without quotes
*/
#include<iostream> 
#include<unordered_map> 
using namespace std; 
unordered_map<string,int> umap;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        umap[str]++;
        if(umap[str]>=2){
            cout << str << endl;
            umap[str]=-100;
        }
        
    }
    if(umap.size()==n) cout << "Understandable, have a great day";
    
    
    
    return 0; 
} 
