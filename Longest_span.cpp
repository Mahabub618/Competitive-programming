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

    ll longest_span(ll ar[], ll arr[], ll n)
    {
        ll maxLen = 0;
        ll presum1=0, presum2=0;

        ll diff[2*n+1];
        memset(diff, -1, sizeof diff);

        for(ll i=0; i<n; i++)
        {
            presum1 += ar[i];
            presum2 += arr[i];

            ll cur_dif = presum1-presum2;
            ll indx = n + cur_dif;
            if(cur_dif==0) maxLen = i+1;
            else if(diff[indx]==-1) diff[indx] = i;
            else
            {
                ll len = i-diff[indx];
                maxLen = max(len, maxLen);
            }
        }
        return maxLen;
    }

    int32_t main()
    {
        ll n, x;
        cin >> n;
        ll ar[n+1], arr[n+1];
        for(int i=0; i<n; i++) cin >> ar[i];
        for(int i=0; i<n; i++) cin >> arr[i];

        ll ans = longest_span(ar, arr, n);
        cout << ans << endl;
    }
