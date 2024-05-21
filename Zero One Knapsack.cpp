int knap(int ind,vector<int> &weight, vector<int> &value, int maxWeight,vector<vector<int>>&dp){

      if (ind == 0) {

        if (weight[0] <= maxWeight) 

            return value[0];

        else

            return 0;

    }

    if (dp[ind][maxWeight] != -1) 

        return dp[ind][maxWeight];

    

    int notTake = knap(ind - 1, weight, value, maxWeight, dp);

    int take = INT_MIN;

    if (weight[ind] <= maxWeight) 

        take = value[ind] + knap(ind - 1, weight, value, maxWeight - weight[ind], dp);

    

    return dp[ind][maxWeight] = max(take, notTake);

}

 

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {

    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));

    return knap(n - 1, weight, value, maxWeight, dp);

}
