#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sloth[3],dragon[3],s1=0,s2=0;
        for (int i = 0; i < 3; i++)
        {
            cin>>dragon[i];
            s1 = s1 +dragon[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin>>sloth[i];
            s2 = s2 +sloth[i];
        }
        if (s1>s2)
        {
            cout<<"DRAGON"<<endl;
        }
        else if (s1<s2)
        {
            cout<<"SLOTH"<<endl;
        }
        else
        {
            if (/* condition */)
            {
                /* code */
            }
            
        }
        
        
        
    }
    return 0;
}