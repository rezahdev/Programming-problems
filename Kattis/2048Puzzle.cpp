#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, val;
    int p[4][4];
    int row, col;

    bool isMerged;
    bool pos[4][4];

        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                cin>>p[i][j];
                pos[i][j] = false;
            }
        }

        cin>>m;

        if(m==0)
        {
            for(int i=0; i<4; i++)
            {
                for(int j=0; j<4; j++)
                {
                    isMerged = false;
                    if(j>0)
                    {
                        val = p[i][j];
                        for(int k=j-1; k>=0; k--)
                        {
                            if(p[i][k] == 0)
                            {
                                p[i][k] = val;
                                p[i][k+1] = 0;
                                row = i; col = k;
                            }
                            else if(p[i][k] == val && !pos[i][k] && !isMerged)
                            {
                                val += p[i][k];
                                p[i][k] = val;
                                isMerged = true;
                                row = i; col = k;
                                p[i][k+1] = 0;
                            }
                            else
                            {
                                break;
                            }
                        }
                            if(isMerged)
                            {
                                pos[row][col] = true;
                            }
                    }
                }
            }
        }
            else if(m==1)
            {
                for(int i=0; i<4; i++)
                {
                    for(int j=0; j<4; j++)
                    {
                        isMerged = false;
                        if(j>0)
                        {
                            val = p[j][i];
                            for(int k=j-1; k>=0; k--)
                            {
                                if(p[k][i] == 0)
                                {
                                    p[k][i] = val;
                                    p[k+1][i] = 0;
                                    row = k; col = i;
                                }
                                else if(p[k][i] == val && !pos[k][i] && !isMerged)
                                {
                                    val += p[k][i];
                                    p[k][i] = val;
                                    p[k+1][i] = 0;
                                    isMerged = true;
                                    row = k; col = i;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if(isMerged)
                            {
                                pos[row][col] = true;
                            }
                        }
                    }
                }
            }
            else if(m==2)
            {
                for(int i=0; i<4; i++)
                {
                    for(int j=3; j>=0; j--)
                    {
                        isMerged = false;
                        if(j<3)
                        {
                            val = p[i][j];
                            for(int k=j+1; k<4; k++)
                            {
                                if(p[i][k] == 0)
                                {
                                    p[i][k] = val;
                                    p[i][k-1] = 0;
                                    row = i; col = k;
                                }
                                else if(p[i][k] == val && !pos[i][k] && !isMerged)
                                {
                                    val += p[i][k];
                                    p[i][k] = val;
                                    p[i][k-1] = 0;
                                    isMerged = true;
                                    row = i; col = k;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if(isMerged)
                            {
                                pos[row][col] = true;
                            }
                        }
                    }
                }
            }
            else if(m==3)
            {
                for(int i=0; i<4; i++)
                {
                    for(int j=3; j>=0; j--)
                    {
                        isMerged = false;
                        if(j<3)
                        {
                            val = p[j][i];
                            for(int k=j+1; k<4; k++)
                            {
                                if(p[k][i] == 0)
                                {
                                    p[k][i] = val;
                                    p[k-1][i] = 0;
                                    row = k; col = i;
                                }
                                else if(p[k][i] == val && !pos[k][i] && !isMerged)
                                {
                                    val += p[k][i];
                                    p[k][i] = val;
                                    p[k-1][i] = 0;
                                    isMerged = true;
                                    row = k; col = i;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if(isMerged)
                            {
                                pos[row][col] = true;
                            }
                        }
                    }
                }
            }

            for(int i=0; i<4; i++)
            {

                for(int j=0; j<4; j++)
                {
                    cout<<p[i][j]<<" ";
                }
                cout<<endl;
            }
}
