#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, m, num;
    string s;
    map<int, vector<string>> storeItems;
    vector<string> items;

    cin>>n>>k;

    for(int i=0; i<k; ++i)
    {
        cin>>num>>s;
        storeItems[num].push_back(s);
    }

    cin>>m;

    for(int i=0; i<m; i++)
    {
        cin>>s;
        items.push_back(s);
    }
    int paths = 0;
    int found = 0;
    int lastIndex = 0;
    bool imp = false;
    bool uni = false;
    bool ambi = false;

    /*cout<<"["<<endl;
    for(int i=0; i<storeItems.size(); i++)
    {
        cout<<i<<" => ";
        for(int j=0; j<storeItems[i].size(); j++)
        {
            cout<<storeItems[i][j]<<", ";
        }
        cout<<endl;
    }
    cout<<"]"<<endl;*/

    bool itemFound;
    bool multiPathPossible = false;
    found = 0;
    lastIndex = 0;

    for(int i=0; i<m; i++)
    {
        itemFound = false;
        for(int j=lastIndex; j<storeItems.size(); j++)
        {
            vector<string> temp = storeItems[j];
            if(count(temp.begin(), temp.end(), items[i]))
            {
                lastIndex = j;
                itemFound = true;
                //cout<<"(found "<<items[i]<<" in store "<<j<<". Total found: "<<found<<". Last Ind: "<<lastIndex<<")"<<endl;
                break;
            }
        }
        if(!itemFound)
        {
            break;
        }
        else if(itemFound && !multiPathPossible)
        {
            //cout<<endl<<"------------------------------------------------------"<<endl;
            int f = 0;
            int li = lastIndex+1;
            for(int j=i; j<m; j++)
            {
                for(int l=li; l<storeItems.size(); l++)
                {
                    vector<string> temp = storeItems[l];
                    if(count(temp.begin(), temp.end(), items[j]))
                    {
                        f++;
                        li = l;
                        //cout<<"(found "<<items[j]<<" in store "<<l<<". Total found: "<<f<<".)"<<endl;
                        break;
                    }
                }
                //cout<<"(j: "<<j<<")"<<endl;
            }
            if((f + found) == m)
            {
                multiPathPossible = true;
            }
            //cout<<multiPathPossible<<"------------------------------------------------------"<<endl;
        }

        if(itemFound)
        {
            found++;
        }

        if(found == m) break;
    }

    if(found == m && multiPathPossible) cout<<"ambiguous";
    else if(found == m && !multiPathPossible) cout<<"unique";
    else cout<<"impossible";

    return 0;
}
