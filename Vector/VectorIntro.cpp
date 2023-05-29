#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    v.pop_back();

    vector<int> v1(3, 500);
    for (auto element : v1)
    {
        cout << element << " ";
    }
    cout << endl;
}