#include <iostream> 
#include <vector> 
#include <set> 

using namespace std; 

// this example comes from internet - ChatGPT

int main()
{
    vector <int> vec = {4, 2, 3, 4, 5, 1, 6, 8 };

    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    set<int> uniqueSet(vec.begin(), vec.end());

    for (int num : uniqueSet) {
        cout << num << " ";
    }

    cout << endl;
    
    return 0;
}