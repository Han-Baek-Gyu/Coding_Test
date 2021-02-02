#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    map<string, int> m;
    
    for(auto& i : completion) {
        m[i] += 1;
    }
    
    for(auto& j : participant) {
        m[j] -= 1;
        
        if(m[j] < 0) answer = j;
    }
    
    return answer;
   
}
