#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
  std::vector<std::string> answer;
  for(int i=0;i<s.length();i+=2)
    {
        answer.push_back(s.substr(i,2));
    }
  
    if(s.length() % 2 != 0)
      answer[answer.size()-1]+="_";
  
  
    return answer; 
}