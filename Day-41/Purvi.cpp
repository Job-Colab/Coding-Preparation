class Solution
{
  public:
    void sortIt(long long a[], long long n)
    {
        ll i;
        vector<ll> o, e;
        for(i=0; i<n; i++){
            if(a[i]%2==0)
                e.push_back(a[i]);
            else
                o.push_back(a[i]);
        }
        sort(o.begin(), o.end());
        reverse(o.begin(), o.end());
        sort(e.begin(), e.end());
        o.insert(o.end(), e.begin(), e.end());
        for(i=0; i<n; i++)
            a[i]=o[i];
    }
};