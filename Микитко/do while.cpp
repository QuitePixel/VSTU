#include <iostream>
#include <math.h>
 using namespace std;
 int main ()
 {
     float S, n, x;
     S=0;
     n=1;
     do 
     { S+=pow(x*n-1,3);
     cout<<"\n n="<<n<<"\t S="<<S;
     n+=1;
     }
     while (n<=6)
     return 0;
 }
