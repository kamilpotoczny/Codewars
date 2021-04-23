int digital_root(int n)
{
  int sum=0;
  while(true)
  {
    while(n>=10)
    {
        sum+=n%10;
        n /=10;
    }
    while(sum>=10)
    {
        n+=sum%10;
        sum/=10;
    }
        if(n<10)
        {
            if(n+sum >= 10)
            {
                n+=sum;
                sum=0;
                continue;
            }

            else
                break;
        }

  }
  return n+sum;
}