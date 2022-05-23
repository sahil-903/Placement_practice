class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
	if(n == 0) return tasks.size();
	
	int cnt = 0;
	int max_task_freq = 0;	
	vector<int> task_freq(26);
	for(char ch : tasks) task_freq[ch-'A']++;
	
	for(int i=0; i<26; i++) {
		if(task_freq[i] == 0) continue;
		if(max_task_freq < task_freq[i]) {
			max_task_freq = task_freq[i];
			cnt = 1;
		}
		else if(max_task_freq == task_freq[i]) cnt++;
	}
	
	int req_days = (n+1) * (max_task_freq-1) + cnt;
	return req_days > tasks.size() ? req_days : tasks.size();
}

};
