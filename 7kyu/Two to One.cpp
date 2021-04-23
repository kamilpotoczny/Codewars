class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2)
    {
      int tab[27]{0};
      std::string connected = s1 + s2;
      int sSize = connected.length();
      for(int i=0;i<sSize;i++)
      {
          tab[(int)connected[i] - 97]++;
      }

      std::string answer;
      for(int i=0;i<27;i++)
      {
          if(tab[i]>0)
              answer+=(char)i+97;
      }
       return answer;
      }
};