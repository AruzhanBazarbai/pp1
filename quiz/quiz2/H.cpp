//Have you ever tried to create your own language? Akerke, another hero of our legends, states that it is
//very simple! She just picks up one letter of the Latin alphabet and never uses that letter anymore. That
//is the way how she comes up with a new language.
//Now, when her language has become very popular among her friends, she decided to make a translator.
//As she is not a programmer, she dared to ask for your help in this. The translator should get a string,
//delete all occurrences of some letter and output the modified string.
//Can you help Akerke in creating a translator?
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    char x;
    string s;
    cin >> x >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]!=x){
            cout << s[i];
        }
    }
    
    return 0;
}


