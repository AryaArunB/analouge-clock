#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
int prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        int k = 0;
        if (n % i == 0)
        {
            cout << "prime";
            k = 1;
            return k;
            return 0;
        }
    }
    
    return 0;
}
int main()
{
    list<int> l1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        cin >> k;
        l1.push_back(k);
    }
    int k=0;
    list<int>::iterator iter;
    for (iter = l1.begin(); iter != l1.end(); iter++)
    {
        for (int i = 2; i*i < *iter; i++)
        {
             k = 0;
            if (*iter % i == 0)
            {
                cout << "prime";
                k = 1;
                
            }
        }
        if (k == 1)
        {
            l1.remove(*iter);
        }
    }
    for (iter = l1.begin(); iter != l1.end(); iter++)
    {
        cout << *iter;
    }
}