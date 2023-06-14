#include<iostream>
#include<algorithm>
using namespace std;
void find()
{
     int t;
  cin>>t;
    int om[t];
    int a=0,o=0,Count=0;
    int addy[t];
    for (int j = 0; j < t; j++)
    {
      cin>>om[i];
      if(om[i]!=0) omCount++;
      else{
        o=max(o,Count);
        Count=0;
      }

    }
    o=max(o,Count);
    Count=0;
    for (int k = 0; k < t; k++)
    {
      cin>>addy[k];
      if(addy[k]!=0) Count++;
      else{
        a=max(a,Count);
        Count=0;
      }
    } 
      a=max(a,Count);

      if(a>o) cout<<"Addy"<<endl;
    if(o==a) cout<<"Draw"<<endl;
    else cout<<"Om"<<endl;
}
  
   
 

int main()
{
   
   int n;
   cin>>n;
   while(n--) find();

    return 0;
}