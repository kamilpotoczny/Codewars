#include <iomanip>
#include <sstream>
float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}


std::string seriesSum(int n)
{
  double answ=0.00;
  for(int i=1,j=0;j<n;i += 3,j++)
      answ += double(1/(float)i);
  
  
  answ = round(answ);
  std::stringstream ss;
  ss<<answ;
  std::string answer = ss.str();

  if(n==0)
    return "0.00";
  for(int i=0;i<answer.length();i++)
    {
      if(answer[i] == '.')
        if(i+2 == answer.length())
          answer.append("0");
  }
  
  
  return answer;
}