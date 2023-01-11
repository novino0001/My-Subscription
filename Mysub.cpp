
#include <bits/stdc++.h>
#include<iostream.h>
using namespace std;



int main()
{
    int budget=40;
    map<string,vector<float>> mp;  // create a map , map use to store key value pair
      int n=m.size();
    mp["TOI"]={3,3,3,3,3,5,6};
    mp["Hindu"]={2.5,2.5,2.5,2.5,2.5,4,4};
    mp["ET"]={4,4,4,4,4,4,10};
    mp["BM"]={1.5,1.5,1.5,1.5,1.5,1.5,1.5};
    mp["HT"]={2,2,2,2,2,4,4};


    vector<pair<string,int>> v; // create a vector of pair
    for(auto it:mp)
    {
        float sum=0;
        for(float x:it.second)
        {
            sum+=x;
        }
        v.push_back({it.first,sum});
    }

    vector<vector<string>> ans;  // create a vector

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i].second+v[j].second<=budget)
                ans.push_back({v[i].first,v[j].first});  // insert in vector
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"{\""<<ans[0][0]<<"\",\""<<ans[0][1]<<"\"}";  // cout use for output
        if(i!=n-1) cout<<",";
    }
}
