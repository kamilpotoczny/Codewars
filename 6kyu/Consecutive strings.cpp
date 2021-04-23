#include <string>
#include <vector>

class LongestConsec
{
public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k);
};
std::string LongestConsec::longestConsec(std::vector<std::string> &strarr, int k)
{
    if (k > strarr.size() || k <= 0 || strarr.size() == 0)
        return "";

    std::string answer;
    int vSize = strarr.size();
    int temp = 0;
    int sentenceL = 0;
    for (int i = 0; i < vSize; i++)
    {
        temp = 0;
        for (int j = i; j < (i + k); j++)
        {
            if (strarr.size() > j)
            {
                temp += strarr[j].size();
            }
        }
        if (temp > sentenceL)
        {
            sentenceL = temp;
            answer = "";
            for (int j = i; j < (i + k); j++)
            {
                if (strarr.size() > j)
                {
                    answer.append(strarr[j]);
                }
            }
        }      
    }
    return answer;
}