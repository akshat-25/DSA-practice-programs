#include<iostream>
using namespace std;

int  fib(int n){
  if (n==0||n==1)
  {
    return;
  }
  cout<<n;
  fin(n-1) + fib(n-1);
}
int main(int argc, char const *argv[])
{ 
  int n;
  cin>>n;
   
  fib(n);
  return 0;
}