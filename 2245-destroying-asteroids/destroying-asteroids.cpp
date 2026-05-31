class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long currentMass = mass;
        for(auto& m:asteroids){
            if(currentMass<m){
                return false;
            }
            currentMass+=m;
        }
        return true;
    }
};