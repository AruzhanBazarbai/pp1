//compettion
/*
A few day ago, in KBTU was a hackathon. In hackathon could participate 2 persons as a team. Jury
marked each student individually, but then they will get sum of scores. There were some problems, when
competition was ended. All of students had written only theirs nickname at register time. Moreover, some
students registered twicely(may be more). Jury decided : if they each of student in pair has same names,
same scores - they are same team, that registered two times. But if they have different scores they are
different team. Shortly, to be same information has to be completely same. Help Jury create a list of
students.
Input
In the first line given integer N - amount of registered teams. Next N lines contain information about
team in the next pattern: first-student-nickname, score-1,second-student-nickname-2.
Output
Print unique teams(by decision of jury) in own lines. Each line should contain names of first and second
and their total score.
*/
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<pair<string, int>, int> mp;
    map<pair<string, int>, int> :: iterator it;
    for(int i=0;i<n;i++){
        string s,t;
        int x,y;
        cin >> s >> x >> t >> y;
        string res=s+" and "+t;
        int sum=x+y;
        if(mp.empty()) mp[make_pair(res,sum)]=i;
        else{
            for(it=mp.begin();it!=mp.end();it++){
                if(res==(*it).first.first){
                    if(sum!=(*it).first.second){
                        mp[make_pair(res,sum)]=i;
                    }
                }else{
                    mp[make_pair(res,sum)]=i;
                }
            }
        }
    }

    for(it=mp.begin();it!=mp.end();it++){
        cout << (*it).first.first << " " << (*it).first.second << endl;
    }
   

    return 0;
}
