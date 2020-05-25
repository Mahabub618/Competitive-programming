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
    #define       pii                 pair<int, int>

    vector<pii> a;

    void mergeIntervals(int n)
    {
        if(n<=0) return;

        stack<pii> st;
        sort(a.begin(), a.end());
        st.push(a[0]);

        for(int i=1; i<n; i++)
        {
            pii top = st.top();

            if(top.second<a[i].first) st.push(a[i]);

            else if(top.second<a[i].second)
            {
                top.second = a[i].second;
                st.pop();
                st.push(top);
            }
        }
        cout << "\nMerge intervals array are: ";
        while(!st.empty())
        {
            pii v = st.top();
            cout << "[" << v.first << ","<< v.second << "]";
            st.pop();
        }
        return;
    }
    int main()
    {
        int n, x, y;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            a.push_back({x, y});
        }
        mergeIntervals(n);
    }

// a[] =  { {6,8}, {1,9}, {2,4}, {4,7} }; -> [1, 9]
