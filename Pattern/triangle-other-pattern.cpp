
#include <iostream>
using namespace std;

void triangle1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "* ";
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        cout << endl;
    }
}

void triangle2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "  ";
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            cout << "* ";
        for (int j = 0; j < i; j++)
            cout << "  ";
        cout << endl;
    }
}

void diamond1(int n)
{
    triangle1(n);
    triangle2(n);
}

void diamond2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            cout << "* ";
        for (int j = 0; j < 2 * i ; j++)
            cout << "  ";
        for (int j = 0; j <= n - i - 1; j++)
            cout << "* ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "* ";
        for (int j = 0; j < 2 * (n - i-1); j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

void diamond3(int n){
  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "* ";
        for (int j = 0; j < 2 * (n - i-1); j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            cout << "* ";
        for (int j = 0; j < 2 * i ; j++)
            cout << "  ";
        for (int j = 0; j <= n - i - 1; j++)
            cout << "* ";
        cout << endl;
    }

}

void triangle3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "* ";

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            cout << "* ";

        cout << endl;
    }
}

void triangle4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << i - j + 1 << " ";
        cout << endl;
    }
}

void triangle5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (char ch = 'A'; ch <= i + 'A'; ch++)
            cout << ch<< " ";
        for (char ch = 'A'+i-1; ch>= 'A'; ch--)
            cout <<ch<<" ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    diamond3(n);
    return 0;
}