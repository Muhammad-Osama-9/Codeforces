/*
Auhtor: Muhammad Osama  -_-
All rights reserved  !
*/
#include <iostream>

using namespace std ;

 int main (void)
 {
    double  n , k , a ;
     long long x ;
     cin >>n >> k >>a ;

     double res = (double) n * (k/ a) ;
     x  = (long long)res;

      if (res>(double)x)
         printf("double") ;
      else if (res==x)
      {
       printf ("%s",res >2147483647 ? "long long" : "int")   ;
      }
      return 0 ;
 }
