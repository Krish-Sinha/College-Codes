#include <bits/stdc++.h>
using namespace std;

void TowerofHanoi(int n, char source, char helper, char destination)
{
    if (n == 0)
        return;

    TowerofHanoi(n - 1, source, helper, destination);
    cout << "Move Disk " << n << " from Source " << source << " to helper " << helper << endl;
    TowerofHanoi(n - 1, destination, helper, source);
}

int main()
{
    int n = 3;
    TowerofHanoi(n, 'A', 'B', 'C');
}