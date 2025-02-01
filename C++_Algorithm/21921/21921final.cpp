#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int until, period;
    int array[250000] = {0};
    int sum = 0, maxSum = 0, maxSumCnt = 1;
    cin >> until >> period;
    for (int i = 0; i < until; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < period; i++)
    {
        sum += array[i];
    }
    maxSum = sum;

    for (int i = period; i < until; i++)
    {
        sum -= array[i - period];
        sum += array[i];
        if (sum > maxSum)
        {
            maxSum = sum;
            maxSumCnt = 1;
        }
        else if (sum == maxSum)
        {
            maxSumCnt++;
        }
    }

    if (maxSum == 0)
    {
        cout << "SAD";
    }
    else
    {
        cout << maxSum << endl;
        cout << maxSumCnt << endl;
    }

    return 0;
}
