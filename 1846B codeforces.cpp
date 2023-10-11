#include<bits/stdc++.h>
using namespace std;
 
int check(char a[3][3], char ch)
{
    int c, r, k = 0, l = 0;
    for(int i = 0; i < 3; i++)
    {
        r = 0;
        c = 0;
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == ch)
            {
                c++;
                if(c == 3)
                    return 1;
            }
            if(i == j && a[i][j] == ch)
            {
                k++;
                if(k == 3)
                    return 1;
            }
            if(a[j][i] == ch)
            {
                r++;
                if(r == 3)
                    return 1;
            }
            if(i + j == 2 && a[i][j] == ch)
            {
                l++;
                if(l == 3)
                    return 1;
            }
        }
    }
    return 0;
}
 
int main()
{
    int t;
    char a[3][3];
    cin >> t;
    while (t--)
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
        if(check(a, 'X'))
            cout << "X\n";
        else if(check(a, 'O'))
            cout << "O\n";
        else if(check(a, '+'))
            cout << "+\n";
        else
            cout << "DRAW\n";
    }
    return 0;
}
