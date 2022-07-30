class Solution {
public:
	vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
		int n = words2.size();
		vector<int> arr1(26,0);
		for(int i=0;i<n;i++)
		{
			vector<int> arr2(26,0);
			for(int j=0;j<words2[i].size();j++)
			{
				arr2[words2[i][j]-'a']++;
			}
			for(int j=0;j<26;j++)
				arr1[j]=max(arr1[j],arr2[j]);
		}
		vector<string> ans;
		for(int i=0;i<words1.size();i++)
		{
			bool insert=true;
			vector<int> arr2(26,0);
			for(int j=0;j<words1[i].size();j++)
			{
				arr2[words1[i][j]-'a']++;
			}
			for(int j=0;j<26;j++)
			{
				if(arr2[j]<arr1[j])
				{
					insert=false;
					break;
				}
			}
			if(insert)
				ans.push_back(words1[i]);
		}
		return ans;
	}
};