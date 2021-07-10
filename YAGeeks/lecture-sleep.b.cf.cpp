#include <iostream>
using namespace std;

int const N = 1e5 + 1;
int n, k, total_sum = 0, max_sum = 0;
int a[N], s[N], cs[N];

int main()
{
    // Take input
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    
    for(int i = 0; i < n; i++)
        if(s[i] == 1)
        {
            total_sum += a[i];
            a[i] = 0;
        }

    // Create cumualtive sum array
    cs[0] = a[0];
    for(int i = 1; i < n; i++)
        cs[i] = cs[i - 1] + a[i];
    
    // Calc max_sum
    for(int i = 0, l, r, sum; i < n; i++)
        if(s[i] == 0)
        {
            l = i;
            r = i + k - 1;
            if(r > n - 1) r = n -1;
            sum = cs[r] - cs[l - 1];
            if(sum > max_sum) max_sum = sum;
        }

    total_sum += max_sum;
    cout << total_sum << endl;

    return 0;
}