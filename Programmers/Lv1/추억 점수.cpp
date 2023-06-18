#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> scoremap;
    
    for (int i=0; i<name.size(); i++) {
        scoremap.insert(make_pair(name[i], yearning[i]));
    }
    
    for (const auto& people : photo) {
        int totalScore = 0;
        for (const string& person : people) {
            auto it = scoremap.find(person);
            if (it != scoremap.end()) {
                totalScore += it->second;
            } 
        }
        answer.push_back(totalScore);
    }
       
    return answer;
}
