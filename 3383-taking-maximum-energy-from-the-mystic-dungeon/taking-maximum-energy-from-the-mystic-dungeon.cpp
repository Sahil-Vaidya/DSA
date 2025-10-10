class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int sum=0;
        int maxi=INT_MIN;
        vector<int> visi(n,0);

        for(int i=0;i<n;i++){
            if(visi[i]) continue;//already visited

            int j=i;
            sum=0;
            while(j<n){
                visi[j]=1;
                sum+=energy[j];
                sum=max(sum,energy[j]);

                j+=k;
            }
            maxi=max(maxi,sum);
        }

        return maxi;
    }
};