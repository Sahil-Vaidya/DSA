class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        int emptybottle=numBottles;

        while(emptybottle>=numExchange){
            ans+=1;
            emptybottle-=numExchange;//remove
            emptybottle++;
            numExchange++;
        }
        return ans;
    }
};