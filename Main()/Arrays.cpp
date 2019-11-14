// Reference link- http://www.cplusplus.com/doc/tutorial/arrays/

#include <iostream>
#include <ctime>
using namespace std;

                                                        /**********
                                                        THE BASICS
                                                        **********/

void arrayBasics()
{
// Declaration and initialization;
    int myArray[5]; // declaration

    /* The number of values between braces {} shall not be greater than the number of elements in the array. */
    int myArray1[5] = {1,2,3,4,5}; // declaring and initializin. 
    cout << myArray1[3] << endl; // Prints value stored at index 4(meaning element 3) i.e 4.
    
    int myArray2[5] = {1,3,5}; // This array can store 5 values, but only 3 are given therefore 4th and 5th index will be 0.
    
    /* and, for example, the following copies the value of the second element of myArray2 to a variable called x: */
    int x = myArray2[2];
    cout << x << endl; // prints 5
    
    /**********************************
    NOTE:
    int foo[5];         // declaration of a new array
    foo[2] = 75;        // access to an element of the array.
    ***********************************/

   /* +++++++++ Some other valid operations with arrays: +++++++*/
    int a = 69;
    cout << "Value before changing: " << endl;
    cout << myArray1[0];
    cout << "\nValue after changing: " << endl;
    myArray1[0] = a; // replaces 0th element of myArray1 arr to the value of variable a;
    cout << myArray1[0] << "\n"; // should print the value of variable a i.e 69;

    myArray1[0] = a + 1; // i.e 69 + 1;
    cout << "value after adding 1:\n";
    cout << myArray1[0] << endl;

    myArray1[myArray1[2]] = 100; // Sets value 100 at 3rd element of myArray1.
    cout << myArray1[3] << endl; // should print 100;

}


    /* ADDING ALL THE NUMBERS IN AN ARRAY! */
 
void example00()
{
    int x[] = {10,20,30,40,50};
    int i, result = 0;
    
    for(i=0; i < 5; i++)
    {
        result += x[i];
    }
    cout << "\n\nAddition is: " << endl;
    cout <<  result;
}


                                                            /**********************
                                                            Multidimensional arrays
                                                            ***********************/

void multiDimentionalArray()
{
    /*
    Multidimentional Arrays can be called as ARRAYS OF ARRAYS.For example, a bidimensional array can be 
    imagined as a two-dimensional table made of elements, all of them of a same uniform data type.
    ->http://www.cplusplus.com/doc/tutorial/arrays/bidimensional_arrays1.png
    jimmy represents a bidimensional array of 3 per 5 elements of type int. The C++ syntax for this is:
    
    int jimmy[3][5]; 3 rows and 5 coloumns

    http://www.cplusplus.com/doc/tutorial/arrays/bidimensional_arrays2.png
    jimmy[1][3]; first row ka 3rd element(4th index)   
    */

   int sally[2][3] = {{2,3,4}, {5,6,7}};; // Multidimentional Array with 2 rows and 3 coloumns

   // Row 1 = 2,3,4
   // Row 2 = 5,6,7

    // printing 7
    cout << sally[1][2] << endl;


    /* PRINTNG MULTIDIMENTIONAL ARRAY 
    1. Loop through 1st row and then loop through 2nd row
    */

   for(int row = 0; row < 2; row++)
   {
        for(int coloumn = 0; coloumn <3; coloumn++)
        {
            cout << sally[row][coloumn] << " ";
        }
        cout << endl;
   }


}

/* THROWING ARRAY IN AAN ARRAY */

void arrayInArray(int arg[], int length)
{
    for(int n = 0; n < length; n++)
    {
        cout << arg[n] << " ";
    }
    cout << "\n";
}




int main()
{
    time_t myTime = time(0);
    cout << ctime(&myTime) << endl;

   // arrayBasics();
    //example00();

    // **** Multidimentional Array ****
    multiDimentionalArray();

    // ARRAY IN ARRAY
    int myArr[] = {5,10,15,20};
    arrayInArray(myArr, 4);

}