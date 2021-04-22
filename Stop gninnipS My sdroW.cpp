#include <iostream>
#include <string>
#include <vector>
std::string spinWords(const std::string &str)
{
  int position=0;
  std::vector<std::string> words;
  std::string temp, endWords;
    for(int i=0;i<str.length();i++)
      {
        if((str[i] == ' ') || (i+1 == str.length()))
        {
          temp = "";
          if(i+1 == str.length())
            for(int j=position;j<=i;j++)
          {
            temp+=str[j];
          }
          else
            for(int j=position;j<i;j++)
            {
                temp+=str[j];
            }
          position=i+1;

          words.push_back(temp);
        }
      }
    //std::cout<<words[0];
  temp = "";
  for(int i=0;i<words.size();i++)
  {
      temp="";
    if(words[i].length() >= 5)
    {
      for(int j=words[i].length();j>=0;j--)
        temp+=words[i][j];
      if(i+1 == words.size())
        endWords+=temp+" ";
      else
        endWords+=temp;
    }
    else
    {
      if(i+1 == words.size())
        endWords+= words[i]+" ";
      else
        endWords+= words[i];
    }
  }
  return endWords;
}


int main()
{
    std::cout<<spinWords("Hey fellow warriors");


    return 0;
}
