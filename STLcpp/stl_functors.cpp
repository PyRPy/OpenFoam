#include <functional>
#include <iostream> 
using namespace std;
// code comes from geeksforgeeks.org, part used.
int main() 
{
    // create functors
    greater<int> gt;
    equal_to<int> eq;

    cout << boolalpha;

    // print output in terminal screen 
    cout << "Functors and their outputs: \n";
    cout << "greater, (10, 20) " << gt(10, 20) << endl;
    cout << "equal to, (10, 10) " << eq(10, 10) << endl;

    return 0;

}