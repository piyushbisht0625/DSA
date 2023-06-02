#include <bits/stdc++.h>
using namespace std;
void nextpermutation(vector<int> &v)
{
    int index = -1;
    int n = v.size();
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] > v[i - 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(v.begin(), v.end());
    }
    else
    {
        int prev = index;
        for (int i = index + 1; i < n; i++)
        {
            if (v[i] > v[index - 1] && v[i] <= v[prev])
            {
                prev = i;
                swap(v[index - 1], v[prev]);
            }
        }
    }
    reverse(v.begin() + index, v.end());
}
int main()
{
    vector<int> v = {1, 3, 5, 4, 2};
    nextpermutation(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}