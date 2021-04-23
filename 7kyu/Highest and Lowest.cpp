#include <string>
#include <sstream>
std::string highAndLow(const std::string& numbers)
{
    int valueMin =2147483647, valueMax=-2147483648, buffor = 0, counter = 0;
    bool isNegative, firstIsNull=true, secondIsNull=true;
    int sSize = numbers.length();
    for (int i = 0; i < sSize; i++)
    {
        isNegative = false;
        if (numbers[i] >= 48 && numbers[i] <= 57)
        {
            if (i > 0)
                if (numbers[i - 1] == '-')
                    isNegative = true;

            std::string temp = "";
            int x = 0;
            while (numbers[i + x] != ' ' && i+x != sSize)
            {
                temp += numbers[i + x];
                ++x;
            }
            i += x;

            buffor = atoi(temp.c_str());
            if (isNegative)
                buffor = buffor - 2 * buffor;

            
            if (buffor > valueMax)
                valueMax = buffor;
            
               
            if (buffor < valueMin)
                valueMin = buffor;      
        }
    }
  
    std::string valMin, valMax, answer;
    std::stringstream ss;

    ss << valueMin;
    ss >> valMin;
    ss.clear();
    ss << valueMax;
    ss >> valMax;

    answer = valMax + " " + valMin;

    return answer;
}