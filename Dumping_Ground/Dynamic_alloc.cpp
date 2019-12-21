/*
THEORY:
    Dynamically allowed memory is allocated on HEAP. You need to allocate and deallocate memory manually.
   
   How is it different from memory allocated to normal variables?
    
  ->  For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated. 
  ->  For dynamically allocated memory like “int *p = new int[10]”, it is programmers responsibility to deallocate memory when no longer needed. 

*/


#include <iostream>
#include <new>
using namespace std;

void theBasics()
{
    /*
    LINK- https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
    
    Pointer initialized with NULL
    Then request memory for the variable
    */
    
    int *ptr = NULL;
    ptr = new int;
    cout << "Address of ptr = " << ptr << endl;
    cout << "Value at *ptr = " << *ptr << endl;
    delete []ptr; // deletes the pointer and free up space for next pointers.

    /* ___________________ OR _____________________  
    Combine declaration of pointer and their assignment
    */

    int *ptr1 = new int;
    cout << "\nAddress of ptr1 = " << ptr1 << endl;
    cout << "Value at *ptr1 = " << *ptr1 << endl;
    delete []ptr1;

   // INITIALIZING THE MEMORY USING NEW OPERATOR
    int *ptr2 = new int(20);
    cout << "\nAddress of ptr2 = " << ptr2 << endl;
    cout << "Value at *ptr2 = " << *ptr2
    << " and address is = " << ptr2 << endl;

    *ptr2 = 21;
    cout << "Value at *ptr2 is now = " << *ptr2 << endl;
    delete []ptr2;

    // float type
    float *float_ptr = new float(2.112);
    cout << "\nAddress of float_ptr = " << float_ptr << endl;
    cout << "Value at *float_ptr = " << *float_ptr;
    delete []float_ptr; 
}


void noEnoughMem()
{
    /*
        LINK- https://aticleworld.com/dynamic-memory-and-new-operator-c/
        
        If enough memory is not available in the heap to allocate, the new request indicates failure by throwing an exception of type std::bad_alloc, 
        unless “nothrow” is used with the new operator, in which case it returns a NULL pointer
    */

   int *ptr = NULL;

   try
   {
       ptr = new int[99999999999999]; // allocate huge amount of memorys
   }

   catch(...)
   {
       cout << "Free memory is not available\n";
   }

   delete []ptr;
}


void noThrow()
{
    /*
        LINK- https://aticleworld.com/dynamic-memory-and-new-operator-c/

        To avoid the exception throw we can use “nothrow” with the new operator. When we are used “nothrow” with new operator then it returns 
        a valid address if it is available either return 0 (NULL).

        But here one point need to remember we need to include file <new> for the use of “nothrow” with the new operator.
    */

    int *ptr = NULL;

    ptr = new(nothrow) int[909999999999999];

    if(ptr == NULL) cout << "Memory is not available\n";
    else
    { 
        cout << "Memory is avaiable and assigned\n";
        delete []ptr;
    }
     

}


void roughWork()
{
    //int *piValue = NULL;
    
    // try
    // {
    //     piValue = new int[9999999999999]; // allocate huge amount of memory
    // }
    
    // catch(...)
    // {
    //     cout << "Free memory is not available\n";
    //     return -1;
    // }
    
    // delete []piValue;
    // piValue = new int[689];
    // piValue[0] = 111;
    // piValue[1] = 2;
    // cout << "Value at pi[0] is = " << piValue[0] << endl;
    // cout << "Value at pi[100] is = " << piValue[100]<< endl;
    // cout << "Value at pi[200] is = " << piValue[200]<< endl;
    
    // cout << "address of piValue[0] = " << &piValue[0] << endl; 
    // cout << "address of piValue[1] = " << &piValue[1] << endl;
    // cout << "Value stored at piValue[1] = " << piValue[1] << endl;
    
    // piValue[1] = 100;
    // cout << "After changin Value stored at piValue[1] = " << piValue[1] << endl;
    // delete []piValue;
}

int main()
{
    //theBasics();
    //noEnoughMem();
    //noThrow();
    return 0;
}