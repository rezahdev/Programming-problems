#include<bits/stdc++.h>
using namespace std;

int* pos(char c)
{
    string kb[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
    bool found = false;
    int row, col, str_len, diff;

    int pos[2];

    for(row=0; row<3; row++)
    {
        str_len = kb[row].length();

        for(col=0; col<str_len; col++)
        {
            if(kb[row][col] == c)
            {
                pos[0] = row+1;
                pos[1] = col+1;
                found = true;
                break;
            }
        }

        if(found) break;
    }

    return pos;
}

int pos_sub(int a, int b)
{
    if(a>b) return a-b;
    return b-a;
}

int distance(char a, char b)
{
    int* a_pos = pos(a);
    int* b_pos = pos(b);

    return pos_sub(a_pos[0], b_pos[0]) + pos_sub(a_pos[1], b_pos[1]);
}

int total_distance(string a, string b)
{
    int s = a.size();
    int dis = 0;

    for(int i=0; i<s; i++)
    {
        dis += distance(a[i], b[i]);
    }

    return dis;
}

map<string, int>* sort_list(map<string, int> str_map)
{
    int s = str_map.size();

    for(int i=0; i<s-1; i++)
    {
        for(int j=0; j<s-i-1; j++)
        {
            if(*(str_map[j].begin()->second) > *(str_map[j+1].begin()->second))
            {
                swap(str_map[j], str_map[j+1]);
            }
            else if(*(str_map[j].begin()->second) == *(str_map[j+1].begin()->second))
            {
                if(*(str_map[j].begin()->first) > *(str_map[j+1].begin()->first))
                {
                    swap(str_map[j], str_map[j+1]);
                }
            }
        }
    }
    return str_map;
}

int main()
{
    int t, l;
    string org_str, temp_str;

    while(t--)
    {
        map<string, int> str_map[100];
        cin>>org_str;
        cin>>l;

        for(int i=0; i<l; i++)
        {
            cin>>temp_str;
            str_map[i].insert(pair<string, int>(temp_str, total_distance(org_str,temp_str)));
        }

        map<string, int> sorted_str_map[] = sort_map(str_map);

        for(int i=0; i<sorted_str_map.size(); i++)
        {
            cout<<*(sorted_str_map[i].begin()->first)<<" "<<*(sorted_str_map[i].begin()->second)<<endl;
        }
    }

    return 0;
}
