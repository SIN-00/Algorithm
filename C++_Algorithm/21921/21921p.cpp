#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int until, period;
    int array[250000] = {0};
    int sum = 0, maxSum=0, maxSumCnt=1;
    cin >> until >> period;

    if((period>until)||(until>250000))
    {
        cout << "OutOfBounds" <<endl;
        return 1;
    }

    for(int i = 0 ; i < until; i ++)
    {
        cin >> array[i];
    }
    for (int i = 0 ; i < until; i++)
    {
        for(int j = 0 ; j < period; j++)
        {
            if(i+j>until)
            {
                break;
            }
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