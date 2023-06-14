// Power Set Using Bitwise Operators 

// i/p : s="abc"
// o/p : "","a","b","c","ab","ac","bc","abc"

#include<iostream>
#include<string>
using namespace std;

void printPowerSet(string str){
     int n=str.length();
     int powerset = pow(2,n);
     for (int counter = 0; counter < powerset; counter++)
     {
         for (int j = 0;  j< n; j++)
         {
              if ((counter & (1<<j))!=0)
              {
               cout<<str[j];
              }
              
         }
         cout<<endl;
         
     }
     
}
int main()
{
   string n;
   cin >> n;
   printPowerSet(n);
   

   

    return 0;
}