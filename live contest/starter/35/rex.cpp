#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;

public:
    A() { cout << "c" << endl; }
    ~A() { cout << "d" << endl; }
};
class B : public A
{
public:
    B() { cout << "c1" << endl; }
    ~B() { cout << "d1" << endl; }
};

// by inforkc
int main()
{
    B k;
    return 0;
}