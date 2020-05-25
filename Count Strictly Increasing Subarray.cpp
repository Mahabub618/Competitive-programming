    /*****************************************************************\
    |     IN THE NAME OF ALLAH, MOST GRACIOUS AND MOST MERCIFUL       |
    |                                                                 |
    |     Author     : Mahabub Rahman                                 |
    |     Email      : mahabubrahman618@gmail.com                     |
    |     University : Comilla University, Bangladesh		          |
    |                  Department of Computer Science & Engineering   |
    \*****************************************************************/


    /*...................................Data_Types............................................*/
    #include<bits/stdc++.h>

    using namespace std;
    #define FastIO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
    #define       ll                  long long int

    int countIncreasing(int a[], int n)
    {
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[j]>a[j-1]) cnt++;

                else break;
            }
        }
        return cnt;
    }

    int main()
    {
        int n;
        cin >> n;
        int a[n+1];
        for(int i=0; i<n; i++) cin >> a[i];

        cout << countIncreasing(a, n) << endl;
    }

    // 1, 4, 3 -> {1, 4} => 1

    // 1, 2, 3, 4 -> {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {2, 3}
    // {2, 3, 4}, {3, 4}  => 6

    // 1, 2, 2, 4 -> {1, 2} and {2, 4} => 2
