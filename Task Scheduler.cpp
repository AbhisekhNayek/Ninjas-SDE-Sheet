#include <bits/stdc++.h> 

int taskScheduler(string tasks, int n, int t) 
{
    vector<int> taskCounts(26, 0);

        for (char task : tasks) 
        {
            taskCounts[task - 'A']++;
        }
        sort(taskCounts.begin(), taskCounts.end(), greater<int>());

        int maxFreq = taskCounts[0] - 1;
        int idleSlots = maxFreq * t;

        for (int i = 1; i < 26 && taskCounts[i] > 0; ++i) 
        {
            idleSlots -= min(taskCounts[i], maxFreq);
        }
    return max(0, idleSlots) + tasks.size();
}
