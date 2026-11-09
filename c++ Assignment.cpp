#include <iostream>
using namespace std;
void get(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter mark " << i + 1 << ": ";
        cin >> a[i];
    }
}
int tot(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    return s;
}
double avg(int a[], int n)
{
    int s = tot(a, n);
    return (double)s / n;
}
int high(int a[], int n)
{
    int h = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > h)
        {
            h = a[i];
        }
    }
    return h;
}
int low(int a[], int n)
{
    int l = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < l)
        {
            l = a[i];
        }
    }
    return l;
}
int pass(int a[], int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 40)
        {
            p++;
        }
    }
    return p;
}
void show(int a[], int n)
{
    int t = tot(a, n);
    double av = avg(a, n);
    int h = high(a, n);
    int l = low(a, n);
    int p = pass(a, n);
    int f = n - p;
    cout << "\n--- RESULTS ---" << endl;
    cout << "total: " << t << endl;
    cout << "avg: " << av << endl;
    cout << "high: " << h << endl;
    cout << "low: " << l << endl;
    cout << "pass: " << p << endl;
    cout << "fail: " << f << endl;
}
int main()
{
    int a[100];
    int n;
    char ch;
    do
    {
        cout << "enter students: ";
        cin >> n;
        if (n < 1 || n > 100)
        {
            cout << "wrong number\n";
        }
        else
        {
            get(a, n);
            show(a, n);
        }
        cout << "repeat? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');
    return 0;
}