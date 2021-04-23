std::string pig_it(std::string str)
{
    bool multiWords = false;
    std::vector<std::string> words;
    for(int i=0,j=0;i<str.length();i++)
    {
      if(str[i] == ' ')
      {
        multiWords = true;
        if(j==0)
        {
            words.push_back(str.substr(j,i-j));
            j=i;
        }
        else
        {
            words.push_back(str.substr(j+1,i-j-1));
            j=i;
        }
      }
      else if(i+1 == str.length())
        {
          if(i==0)
            words.push_back(str.substr(0,1));  
          else if(multiWords == false)
            words.push_back(str.substr(0,str.length()));
          else if(multiWords == true)
            words.push_back(str.substr(j+1,i-j));
        }
        
    }
    for(int i=0;i<words.size();i++)
    {
        if(words[i] != "," && words[i] != "?" && words[i] != "." && words[i] != "!")
        {
            words[i]+=words[i][0];
            words[i]+="ay";
            words[i].erase(0,1);
        }
    }
    std::string answer;
  for(auto a : words)
  {
      answer+=a;
      answer+=" ";
  }
  answer.erase(answer.length()-1,1);
    return answer;
}