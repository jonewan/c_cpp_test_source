#include <iostream>
#include <vector>
#include <string>

using namespace std;

void split(const std::string& s, std::vector<std::string>& v, const std::string& c)
{
  std::string::size_type pos1, pos2;
  pos2 = s.find(c);
  pos1 = 0;
  while(std::string::npos != pos2)
  {
    v.push_back(s.substr(pos1, pos2-pos1));
 
    pos1 = pos2 + c.size();
    pos2 = s.find(c, pos1);
  }
  if(pos1 != s.length())
    v.push_back(s.substr(pos1));
}

int main(void)
{
	string str;
	vector<string> vstrs;
	int *match_count_arr = nullptr;
	int once_match_count = 0;
	int i = 0;

	cin >> str;
	split(str, vstrs, ",");
	match_count_arr = new int[vstrs.size()];
	for(i = 0; i < vstrs.size(); i++)
		match_count_arr[i] = 0;

	for(i = 0; i < vstrs.size(); i++){
		for(int j = i+1; j < vstrs.size(); j++){
			once_match_count = 0;
			while(vstrs[i][once_match_count] == vstrs[j][once_match_count])
				once_match_count++;
			if(match_count_arr[i] < once_match_count)
				match_count_arr[i] = once_match_count;
			if(match_count_arr[j] < once_match_count)
				match_count_arr[j] = once_match_count;
		}
	}
	for(i = 0; i < vstrs.size()-1; i++)
		cout << vstrs[i].substr(0, match_count_arr[i]+1) << ",";
	cout << vstrs[i].substr(0, match_count_arr[i]+1) << endl;
	
	delete[] match_count_arr;
	match_count_arr = nullptr;
	return 0;	
}
