#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter m and n: ";
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int row_st=0,row_en=m-1,col_st=0,col_en=n-1;
    while (col_st<=col_en && row_st<=row_en)
    {
        for (int col = col_st; col <=col_en; col++)
        {
            cout<<arr[row_st][col]<<" ";
        }
        row_st++;
        for (int row = row_st; row <=row_en; row++)
        {
            cout<<arr[row][col_en]<<" ";
        }
        col_en--;
        for (int col = col_en; col>=col_st; col--)
        {
            cout<<arr[row_en][col]<<" ";
        }
        row_en--;
        for(int row=row_en;row>=row_st;row--)
            cout<<arr[row][col_st]<<" ";
        col_st++;
    }
    
    return 0;
}
