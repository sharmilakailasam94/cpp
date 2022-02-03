/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int i=0;i<n;i++)
{  
int count=0;
    for(int j=0;j<n;j++)
    {
      if(a[i]==a[j])
      {
          count++;
      }
    }
    
    if(count==1)
    {
        cout<<a[i];
    }
}


return 0;
}
