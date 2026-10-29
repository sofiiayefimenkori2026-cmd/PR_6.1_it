// PR_6.1.it.cpp
// Варіант 8 (ітераційний спосіб)
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void Create(int* b, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        b[i] = Low + rand() % (High - Low + 1);
}

void Print(const int* b, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << b[i];
    cout << endl;
}

int Count(const int* b, const int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i] % 2 == 0 && b[i] <= 0)
            count++;
    }
    return count;
}

int Sum(const int* b, const int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i] % 2 == 0 && b[i] <= 0)
            sum += b[i];
    }
    return sum;
}

void Replace(int* b, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (b[i] % 2 == 0 && b[i] <= 0)
            b[i] = 0;
    }
}

#if !defined(_WINDLL)
int main()
{
    srand((unsigned)time(NULL));
    const int n = 24;
    int b[n];
    const int Low = -15;
    const int High = 75;

    Create(b, n, Low, High);
    cout << "Initial array b:" << endl;
    Print(b, n);

    int count = Count(b, n);
    int sum = Sum(b, n);
    cout << "Count = " << count << endl;
    cout << "Sum   = " << sum << endl;

    Replace(b, n);
    cout << "Modified array b:" << endl;
    Print(b, n);

    return 0;
}
#endif
