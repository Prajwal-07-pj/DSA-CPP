#include<iostream>
using namespace std;
int main()
{
    int i=1 , n=30 , sum=0;


   do{
    sum+=i;
    i++;
   }while(i<=n);

   cout << sum;
}

