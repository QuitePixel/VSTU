#include <iostream>
#include <math.h>
 using namespace std;
 int main ()
 {
     float S, n, x;
     S=0;
     for (n=1; n<=6; n+=1)
     { S+=pow(x*n-1,3);
     cout<<"\n n="<<n<<"\t S="<<S;
     }
     return 0;
 }
