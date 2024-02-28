#include <iostream>
using namespace std;
class counter
{
    int count;

public:
    counter()
    {
        count = 0;
        void show _count()
        {
            cout << count;
        }
        void operator++();
    };
    void counter ::operator++()

    {
        ++count;
    }
    int main()
    {
        counter c1, c2;
        c1.show_ count();
        c2.show _count();
        ++c1;
        ++c2;
        ++c2;
        c1.show _count();
        c2.show_ count();
        return 0;
)
    }
