#include<iostream>
using namespace std;
#define max(x,y) (x>y?x:y)
#define msg(x) #x
#ifndef PI
#define PI 3
#endif
int main()
{
   cout<<max(10,11)<<endl;
    cout<<PI<<endl;
    cout<<msg(Hello World);
}