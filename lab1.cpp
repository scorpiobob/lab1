#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char **argv)
{

  int n;
  n = atoi(argv[1]);

  int i=1;

  while(i==1)
{
  cout << n << " ";
  
 
  if (n==1)
  break;
  
  else if(n%2!=0)
  n=3*n+1;

  else
  n/=2;

}
 cout << endl;
 return 0 ;

}
