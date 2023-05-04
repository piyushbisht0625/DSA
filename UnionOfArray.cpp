#include <bits/stdc++.h>
using namespace std;

// TC = o(n1+n2)
//  SC = o(n1+ n2)  because for worst case when all the element are unique then not for solving
//  but for returning answer not in solution this is space complexity.

vector<int> UnionArray(vector<int> &arr, int n, vector<int> &brr, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans; // New vector for storing union

    while (i < n && j < m)
    {
        if (arr[i] <= brr[j])
        {
            if (ans.size() == 0 || ans.back() != arr[i])
            {
                ans.push_back(arr[i]);
            }
            i++;
        }

        else
        {
            if (ans.size() == 0 || ans.back() != brr[j])
            {
                ans.push_back(brr[j]);
            }
            j++;
        }
    }

    // First array is exhausted then second array is their.

    while (j < m)
    {
        if (ans.size() == 0 || ans.back() != brr[j])
        {
            ans.push_back(brr[j]);
        }
        j++;
    }

    // Second Array is exhausted thren first is their
    while (i < n)
    {
        if (ans.size() == 0 || ans.back() != arr[i])
        {
            ans.push_back(arr[i]);
        }
        i++;
    }

    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> brr = {1, 2, 4, 7, 9, 10};
    int n = arr.size();
    int m = brr.size();

    vector<int> ans = UnionArray(arr, n, brr, m);
    cout << "The Union Of the Two array is: " << endl;
    for (int i = 0; i <ans.size(); i++)
        cout << ans[i] << " ";
}