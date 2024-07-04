#include <bits/stdc++.h>
using namespace std;

int main()
{
    int until, period;
    int array[250000] = {0};
    int sum = 0, maxSum, maxSumCnt=1;
    cin >> until >> period;

    for(int i = 0 ; i < until; i ++)
    {
        cin >> array[i];
    }
    for (int i = 0 ; i < until; i++)
    {
        for(int j = 0 ; j < period; j++)
        {

            sum += array[i+j];
        }
        if(sum > maxSum)
        {
            maxSum = sum;
        }
        else if(sum == maxSum)
        {
            maxSumCnt++;
        }
        sum = 0;
    }
    if(maxSum == 0)
    {
        cout << "SAD";
    }
    else{
        cout << maxSum << endl;
        cout << maxSumCnt << endl;
    }





    return 0;
}