// INCOMPLETE CHECK POINTERS FOR MULTIDIMENTIONAL ARRAY IN GFG

#include <iostream>
using namespace std;


void theBasics()
{
    int first, second;
    int *ptr;

    ptr = &first; // points to the address of first variable.
    cout << "Address of ptr is = " << ptr << endl; // gives the address of first variable
    cout << "Value of *ptr is = " << *ptr << endl; // gives the value stored at first variable's address
    
    *ptr = 10; // changed the value of first variable to 10
    cout << "Value of *ptr is now = " << *ptr << endl;

    // points to second variable now
    ptr = &second;
    cout << "Now Address of ptr is = " << ptr << endl;
    cout << "Now Value of *ptr is = " << *ptr << endl;
    *ptr = 200;
    cout << "Now Value of *ptr is = " << *ptr << endl;

    // creating another pointer which points to second variable
    int *ptr1;
    ptr1 = &second;
    cout << "Address of ptr1 is = " << ptr << endl;
    cout << "Value of *ptr1 is = " << *ptr << endl;
}


void incrementArray()
{
    // Declare an array;
    int v[3] = {10, 100, 200};

    // Declare pointer variable
    int *ptr;

    // Assign the address of v[0] to ptr
    ptr = v; // This is equal to ptr = &v[0]

    for(int i = 0; i < 3; i++)
    {
        cout << "\nValue of *ptr = " << *ptr << endl; 
        cout << "Value of ptr = " << ptr << endl;
        
        // increment pointer ptr by 1;
        ptr++;
    }
}

void printArray()
{
    int val[3] = {10, 20, 30};
    int *ptr;
    ptr = &val[0]; // anohter way of assigning array to the pointer.

    cout << "\n\n" << ptr[0] << " " << ptr[1] << " "
    << ptr[2] << endl;
}


void pointersConsts()
{
    int x;
    int y = 10;
    int *p = &y;
    x = *p;
    cout << "Value of x: " << x << endl;
}



// +++++++++++++++++++++++++++++++++++ Check you progress(pointer problem gfg) +++++++++++++++++++++++++++

/*
Given a pointer to a variable, the task is to complete the function updateVar() which will increment the value of the variable by 10. The function does not returns anything.
*/

void updateVar(int *a)
{
      // write your code here
      *a = *a + 10;
      cout << *a;
}

int main()
{
    incrementArray();
    //printArray();
    //pointersConsts();
    
    // int x = 20;
    // updateVar(&x);

    //theBasics();
}