// Power of 2
#include <iostream>
using namespace std;

bool isPower2NAIVE(int n)
{
     if (n == 0)
          return false;
     while (n != 1)
     {
          if (n % 2 != 0)
          {
               return false;
          }
          n = n / 2;
     }
     return true;
}
// Brian Kerningam's Algorithm (n&(n-1))
int CountBitsBETTER(int n){
     int res=0;
     while (n>0)
     {
          n = (n&(n-1));
          res++;
     }
     return res;
     
}
bool isPower2Better(int n){
     
if(CountBitsBETTER(n)==1) return true;
else return 0;
}
bool isPower2Optimial(int n){
     if(n==0) return 0;
     return ((n&(n-1))==0);
}

int main()
{
     int n;
     cin >> n;
     cout << isPower2NAIVE(n)<<endl;
     cout<< isPower2Better(n)<<endl;
     cout<<isPower2Optimial(n)<<endl;

     return 0;
}