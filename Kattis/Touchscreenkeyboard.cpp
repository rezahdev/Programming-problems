#include<bits/stdc++.h>
using namespace std;

int pos_sub(int a, int b)
{
    if(a>b) return a-b;
    return b-a;
}

int distance(string a, string b)
{
    string kb[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

    bool found_a;
    bool found_b;

    int distance = 0;

    int a_row, b_row, a_col, b_col;

    int n = a.length();

    //cout<<a<<" length: "<<n<<endl;
    for(int i=0; i<n; i++)
    {
        found_a = false;
        found_b = false;

        //cout<<"Calculating for "<<a[i]<<endl;
        for(int j=0; j<3; j++)
        {
            int str_len = kb[j].length();

            for(int k=0; k<str_len; k++)
            {
                if(kb[j][k] == a[i] && !found_a)
                {
                    a_row = j+1;
                    a_col = k+1;
                    found_a = true;
                    //cout<<"Row: "<<a_row<<" & Col: "<<a_col<<endl;
                }

                if(kb[j][k] == b[i] && !found_b)
                {
                    b_row = j+1;
                    b_col = k+1;
                    found_b = true;
                    //cout<<"Row: "<<b_row<<" & Col: "<<b_col<<endl;
                }

                if(found_a && found_b) break;
            }

            if(found_a && found_b) break;
        }
        int row_distance = pos_sub(a_row, b_row);
        int col_distance = pos_sub(a_col, b_col);
        distance += ( row_distance + col_distance);
        //cout<<"Distance for "<<a[i]<<": "<<distance<<endl;
        //cout<<"-------------------------------------------"<<endl;
    }

    return distance;
}

int main()
{
    int t, l;
    string org_str, temp_str;

    cin>>t;

    while(t--)
    {
        string str[10];
        int dt[10];

        cin>>org_str;
        cin>>l;

        for(int i=0; i<l; i++)
        {
            cin>>temp_str;
            str[i] = temp_str;
            dt[i] = distance(org_str, temp_str);
        }

        int n=l;

        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(dt[j] > dt[j+1])
                {
                    swap(dt[j], dt[j+1]);
                    swap(str[j], str[j+1]);
                }
                else if(dt[j] == dt[j+1])
                {
                    if(str[j] > str[j+1])
                    {
                        swap(dt[j], dt[j+1]);
                        swap(str[j], str[j+1]);
                    }
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<str[i]<<" "<<dt[i]<<endl;
        }
    }

    return 0;
}
