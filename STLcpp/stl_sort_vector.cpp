#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 

// this example comes from internet - ChatGPT

int main()
{
    // toy example of a vector
    vector <int> vec = {4, 0, 2, 3, 4, 5, 9, 1, 6, 8 };

    // print out the vector on terminal screen 
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    // find the max value in the array, max is a pointer / index in python
    auto max = max_element(vec.begin(), vec.end());

    cout << "Maximum value in the array: " << *max << endl;

    // sort the vector 
    sort(vec.begin(), vec.end());

    // print out the vector on terminal screen
    for (int num : vec) {
        cout << num << " ";
    }

    cout << endl;
    
    return 0;
}