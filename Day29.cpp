/*
    Author: Aryan Yadav
    Course Schedule
    Algorithm: Graphs
    Difficulty: Medium
*/

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int> zeroInDegree;
        unordered_map<int, unordered_set<int>> inDegree;
        unordered_map<int, unordered_set<int>> outDegree;
        for (int i = 0; i < prerequisites.size(); ++i) {
            inDegree[prerequisites[i][0]].insert(prerequisites[i][1]);
            outDegree[prerequisites[i][1]].insert(prerequisites[i][0]);
        }
        for(int i = 0; i < numCourses; ++i) {
            if(inDegree.find(i) == inDegree.end()) {
                zeroInDegree.push(i);
            }
        }
        while(!zeroInDegree.empty()) {
            int prerequisite = zeroInDegree.front();
            zeroInDegree.pop();
            for (const auto & course: outDegree[prerequisite]) {
                inDegree[course].erase(prerequisite);
                if (inDegree[course].empty()) {
                    zeroInDegree.push(course);
                }
            }
            outDegree.erase(prerequisite);
        }
        if (!outDegree.empty()) {
            return false;
        }
        
        return true;
    }
};
