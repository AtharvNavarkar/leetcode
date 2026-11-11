class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 0;
        // bool cost = (cost1 + cost2) > costBoth;

        // if(cost){
        //     while(need1 > 0 && need2 > 0){
        //         ans += costBoth;
        //         need1--;
        //         need2--;
        //     }
        //     while(need1 > 0){
        //         if(cost1 < costBoth){
        //             ans += cost1;
        //             need1--;
        //         }else{
        //             ans += costBoth;
        //             need1--;
        //             need2--;
        //         }
        //     }
        //     while(need2 > 0){
        //         if(cost2 < costBoth){
        //             ans += cost2;
        //             need2--;
        //         }else{
        //             ans += costBoth;
        //             need2--;
        //             need1--;
        //         }
        //     }
        // }else{
        //     while(need1 > 0){
        //         ans += cost1;
        //         need1--;
        //     }
        //     while(need2 > 0){
        //         ans += cost2;
        //         need2--;
        //     }
        // }
        // return ans;
        int minCost = min(cost1 + cost2, costBoth);
        int minNeed = min(need1, need2);

        ans += 1ll*minCost*minNeed;

        int minCost1 = min(cost1, costBoth);
        int minCost2 = min(cost2, costBoth);

        if(minNeed != need1 && need1 != need2){
            ans += 1ll*minCost1*(need1 - minNeed);
        }
        if(minNeed != need2 && need1 != need2){
            ans += 1ll*minCost2*(need2 - minNeed);
        }
        return ans;
    }
};