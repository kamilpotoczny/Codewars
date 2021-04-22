#include <iostream>
#include <string>


unsigned int countBits(unsigned long long n){
  std::string binary;
  int counter=0;
  while(n != 0)
    {
        if(n%2 == 0)
          binary+='0';
        else
          binary+='1';
        n /= 2;
    }

  int length = binary.length();
  for(int i=0;i<length;i++)
  {
    if(binary[i] == '1')
      counter++;
    std::cout<<n<<" "<<binary<<std::endl;
  }
  return counter;
}


int main()
{
    std::cout<<countBits(4)<<std::endl;
    std::cout<<countBits(7)<<std::endl;
    std::cout<<countBits(9)<<std::endl;
    std::cout<<countBits(10)<<std::endl;
    std::cout<<countBits(26)<<std::endl;





    return 0;
}
