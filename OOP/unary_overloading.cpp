// increment counter variable with ++ operator
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
{
private:
    unsigned int count; //count
public:
    Counter() : count(0) //constructor
    { }
    unsigned int get_count() //return count
        { return count; }
    void operator ++ () //increment (prefix)
    {
        ++count;
    }
};
////////////////////////////////////////////////////////////////
int main()
{
    Counter c1, c2; //define and initialize
    cout << "\nget c1=" << c1.get_count(); //display
    cout << "\nget c2=" << c2.get_count();
    ++c1; //increment c1
    ++c2; //increment c2
    ++c2; //increment c2
    cout <<"\nget c1 after increment="<< c1.get_count(); //display again
    cout <<"\nget c2 after increment=" << c2.get_count() << endl;
    return 0;
}