unsigned int countBits(unsigned long long n){
  std::string binary;  
  int counter=0;
  while(n != 0)  // convert into binary representation(reversed)
    {
        if(n%2 == 0)
          binary+='0';
        else
          binary+='1';
        n /= 2;
    }
  
  int length = binary.length();
  for(int i=0;i<length;i++) // looking for ones
    if(binary[i] == '1')
      counter++;
  return counter;
}