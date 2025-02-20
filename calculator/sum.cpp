#include "ops.h" 
// this example comes from "C++ Programming in easy steps, 5th Edition"

int main()
{
    Calculator* pCalc = new Calculator;
    pCalc -> launch();

    while (pCalc -> run())
    {
        pCalc -> readInput();
        pCalc -> writeOutput();
    }
    return 0;
}