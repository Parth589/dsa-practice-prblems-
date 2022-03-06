#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void seive(vector<int> &prime, int n) // tc:O(n log log n) sc: O(n)
    {
        vector<bool> isPrime(n + 1, true);
        for (size_t i = 2; i * i <= n; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        for (int i = 2; i < isPrime.size(); i++)
        {
            if (isPrime[i])
                prime.push_back(i);
        }
    }
    pair<int, int> findPair(int n, vector<int> &prime) // tc:O(n) sc:O(1)
    {
        int i = 0, j = prime.size() - 1;
        while (i <= j)
        {
            if (prime[i] + prime[j] == n)
            {
                pair<int, int> res = {prime[i], prime[j]};
                return res;
            }
            if (prime[i] + prime[j] < n)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return {-1, -1};
    }
    pair<int, int> pairOfPrimes(int n) // tc:O(n log log n) sc:O(n)
    {
        vector<int> prime;
        seive(prime, n);
        cout << "primes: \n";
        for (int element : prime)
        {
            cout << element << " ";
        }
        cout << " \n";

        return findPair(n, prime);
    }
};
solution obj;

int main()
{
    // Driver code
    int n;
    cin >> n;
    pair<int, int> r = obj.pairOfPrimes(n);
    cout << r.first << " " << r.second << "\n ";
    return 0;
}