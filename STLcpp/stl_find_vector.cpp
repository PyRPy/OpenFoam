#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

// this example comes from "Sams Teach Yourself C++"

int main()
{
    vector <int> intArray;

    // create an integer array 
    intArray.push_back( 50 );
    intArray.push_back( 60 );
    intArray.push_back( 70 );
    intArray.push_back( 80 );

    cout << "The contents of the vector are: " << endl;
    vector <int>::iterator arrIterator = intArray.begin();

    while (arrIterator != intArray.end()) 
    {
        cout << *arrIterator << endl; 
        ++ arrIterator;
    }

    vector <int>::iterator elFound = find(intArray.begin(), intArray.end(), 70);

    if (elFound != intArray.end()) 
    {
        int elPos = distance( intArray.begin(), elFound);
        cout << "Value " << * elFound;
        cout << " found in the vector at position: " << elPos << endl;
    }
    
    return 0;
}