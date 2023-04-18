class Solution {
public:
    int maxNumberOfBalloons(string text) 
{
	unordered_map<char, int> mp;
	int answer = text.size();

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n')
			mp[text[i]]++;
	}
	
	if (mp.size() < 5)
		return 0;
		
	for (auto& ch : mp)
	{
		if (ch.first == 'l' || ch.first == 'o')
		{
			if ((ch.second / 2) < answer)
				answer = ch.second / 2;
		}
		else
		{
			if (ch.second < answer)
			{
				answer = ch.second;
			}
		}
	}
	return answer;
}
};