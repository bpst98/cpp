/* https://hack.codingblocks.com/contests/c/95/718 */

#include <iostream>
using namespace std;
int make(int p, int n, int r[], int made, int rm[], int c[]);
int minute = 0;
int m = 0;

int main()
{

    int p;      //parnathas
    int n;      //no of chefs
    int r[100]; //ranks
    int i;
    int time;
    int m = 0;
    int c[100];
    int rm[100];
    cin >> p;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> r[i];
        rm[i] = r[i];
        c[i] = 0;
    }

    time = make(p, n, r, m, rm, c);
    cout << endl
         << time;

    return 0;
}

int make(int p, int n, int r[], int made, int rm[], int c[])
{

    minute++;

    for (int i = 0; i < n; i++)
    {

        if (rm[i] == minute)
        {
            made++;
            c[i]++;
            rm[i] = minute + (c[i] + 1) * r[i];

            if (made == p)
            {
                return minute;
            }
        }
    }

    make(p, n, r, made, rm, c);
}
