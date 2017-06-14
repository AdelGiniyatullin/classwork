#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
 
 double _pow(double val, int n)
{
  if(!n)
    return (double)1;
  else if(n < 0)   
    return 1/pow(val, abs(n));
    return val*pow(val, n-1); 
}
 
 int main()
 {
 double val;
 int n;
 cout<<"Input value:"<<endl;
 cin>>val; 
 cout<<"input expo:"<<endl;          
 cin>>n;          
 cout<<"Result "<<pow(val,n)<<endl;                   
 return 0; 
 }