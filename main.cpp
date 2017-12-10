#include <iostream>
using namespace std;

int nextfib = 0;

int fibo(int first,int second)
{
    int n;
    while(nextfib<4000000)
    {
        if(nextfib%2 == 0)
        {
            n += nextfib;
        }
        nextfib = first+ second;
        first = second;
        second = nextfib;
    }
    return n;
}

int main()

{
    int x;
    x = fibo(0,1);
    cout << x;
}