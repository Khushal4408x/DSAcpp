//Slightly wrong since it checks immediate neighbours
#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        set<pair<int, int>> buildingSet;
        
        // Insert all buildings
        for (auto& b : buildings) {
            buildingSet.insert({b[0], b[1]});
        }

        int count = 0;

        // Check each building
        for (auto& b : buildings) {
            int x = b[0];
            int y = b[1];

            bool up = buildingSet.count({x-1, y});
            bool down = buildingSet.count({x+1, y});
            bool left = buildingSet.count({x, y-1});
            bool right = buildingSet.count({x, y+1});

            if (up && down && left && right) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    int n = 5;
    vector<vector<int>> buildings = {{1,3},{3,2},{3,3},{3,5},{5,3}};

    cout << sol.countCoveredBuildings(n, buildings) << endl;  // Should print 0
    return 0;
}
