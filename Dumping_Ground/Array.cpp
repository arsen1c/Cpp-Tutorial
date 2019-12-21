/*
################### Advantages of an Array in C/C++: #################################

Random access of elements using array index.
-> Use of less line of code as it creates a single array of multiple elements.
-> Easy access to all the elements.
-> Traversal through the array becomes easy using a single loop.
-> Sorting becomes easy as it can be accomplished by writing less line of code.

####################### Disadvantages of an Array in C/C++: ############################

-> Allows a fixed number of elements to be entered which is decided at the time of declaration. Unlike a linked list, an array in C is not dynamic.
-> Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation.
*/




#include <iostream>
using namespace std;

/*
 +++++++++++++++++++++++++++++++++++++++++++++ PROBLEM(GFG): ++++++++++++++++++++++++++++++++++++
    First line of input file contains a single integer T which denotes the number of test cases. For each test case, there will be two lines. 
    First line contains N which denotes number of elements in an array, and second line contains N space seperated integers.
*/

int add()
{
    int test, arraySize, x, i, intake;
    cout << "No of tests:\n";
    cin >> test;
    for(i =0; i < test; i++)
    {
        int addition = 0;
        cout << "ArraySize:\n";
        cin >> arraySize;
        int myArr[arraySize];
        
        for(x = 0; x < arraySize; x++)
        {
            cout << "Give input:\n";
            cin >> intake;
            myArr[x] = intake;
            addition += intake;
        }
        cout << "Addition of " << i + 1 << "'th is: " << addition << endl;
    }
}

int main() {
	add();
}
