#include <iostream>
#include<math.h>
using namespace std;
int res(int n, int a[100][100], int m, int t);
int result_i[100][100];
int result_j[100][100];

int main()
{
    int T;
    int N;
    int r[100][100];

    int result[100];
    cin >> T;
    int money;
    for (int i = 0; i < T; i++) //i=testcases
    {
        // cout << "roses:";
        cin >> N;
        for (int j = 0; j < N; j++)
        {
            cin >> r[i][j];
        }
        // cout << "mony:";
        cin >> money;
        cout << endl;
        result[i] = res(N, r, money, i);
    }

    for (int test = 0; test < T; test++)
    {
        for (int num = 0; num < result[test]; num++)
        {
            cout << "Deepak should buy roses whose prices are " << r[test][result_i[test][num]] << " and " << r[test][result_j[test][num]] << "." << endl;
        }
    }
    return 0;
}

int res(int n, int a[100][100], int m, int t)
{
    int min=999999;
    int mini,minj;
    int sum = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[t][i] + a[t][j] == m)
            {
                if(abs(a[t][i]-a[t][j]<min))
                min=abs(a[t][i]-a[t][j];
                  mini=i;
                  minj=j;

            }
        }
    }

  result_i[t][k] = mini;
  result_j[t][k] = minj;
  ++k;
  return k;
}
