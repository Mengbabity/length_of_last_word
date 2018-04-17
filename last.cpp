class Solution {
public:
	int lengthOfLastWord(string s) {
		int res = 0;
		int n = s.size()-1;
		vector<char> str;

		while (n >= 0 && s[n] == ' ')
			n--;

		for (int i = 0; i <= n; i++)
		{
			if (s[i] != ' ')
			{
				str.push_back(s[i]);
			}
			else
			{
				str.clear();
			}
		}

		res = str.size();
		return res;
	}
};
