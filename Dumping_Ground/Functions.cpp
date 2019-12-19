// functions GFG

/*
    A function which converts the value provided to a specific value
*/


#include  <iostream>
using namespace std;
int addition(int a, int b); 
inline int cube(int a);
int fact(int x); // example of recursion

// The hero function
void func(int *ptr)
{
    *ptr = 30; // Given value wil always be converted to 30;
}



// +++++++++++++++++++++++++++++++++ INLINE FUNCTION AND CLASSES +++++++++++++++++++++++++++++
/*
    NOTE:  All the functions defined inside the class are implicitly inline.
    -> If you need to explicitly declare inline function in the class then just declare the function inside the class and define it outside the class using inline keyword

    -> Example:
    class S{
        public:
        int sqr(int s);
    };

    inline int S::sqr(int s){};
*/

class operation
{
    int a, b, add, subtract, mult;
    float div;

    public:
    void get();
    void sum();
    void diff();
    void product();
};


inline void operation :: get()
{
    cout << "Enter 1st number: \n";
    cin >> a;
    cout << "Enter 2nd number: \n";
    cin >> b;
}

inline void operation :: sum()
{
    add = a + b;
    cout << "Addition is: " << add << endl;
}

inline void operation :: diff()
{
    subtract = a - b;
    cout << "Diff is: " << a - b << endl;
}

inline void operation :: product()
{
    mult = a * b;
    cout << "Multiplication is: " << a*b << endl;
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++ BEGINNING_OF_MAIN_FUNCTION +++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main()
{   


    // +++++++++++++++++++++ Inline Function and class +++++++++++++++++++++++++++++
    cout << "Inline function\n";
    operation s;
    s.get();
    s.sum();

    cout << "\n\n+++++++++++++++ Normal stuff ++++++++++++++\n\n";

    int x = 10;
    func(&x);
    cout << "Vaule of x is now: " << x << endl;

    // ++++ Simple Addition ++++
    int z = addition(5, 3);
    cout << "Simple addition is: " << z << endl;

// ++++++++++++ INLINE FUNCTIONS +++++++++++++++++++++++
    cout << "Cube of 78 is: " << cube(78) << endl;
    cout << "Cube of 2 is: " << cube(2) << endl;

    // ++++++++++++++++++++++++++++ RECURSIVE FUNCTION +++++++++++++++++++++++++++
    cout << "\n\n+++++++++++++++++ RECURSIVE FUNCTION +++++++++++++++++++\n";
    cout << "Factorial of 5 is: " << fact(5) << endl;
}

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++ END_OF_MAIN_FUNCTION +++++++++++++++++++++++++++++++++++++++++++++++++++++++++



/*
    What happened in the func function?
    -> int x = 10;
    int *ptr = &x; // accessed the address of x
    cout << ptr << endl; // value of ptr is now the address of x;
    *ptr = 30; // accced the value of x and changed it 30;
*/



// +++++++++++++++ SIMPLE ADDITION FUNCTION(cplusplus) +++++++++++++++++++++

int addition(int a, int b)
{
    int r = a + b;
    return r;
}


// ++++++++++++ INLINE FUNCTIONS +++++++++++++++++++++++
/***********************************************************************************************************************************
*    Definition- Used when the execution time of the functino is less than switching time from the called functino to called function.
*    Used for small, commonly used function

inline return-type funcion-name(params)
{
    // function code;
}
**************************************************************************************************************************************/

inline int cube(int a)
{
    return a * a * a; 
}



// ++++++++++++++++++++++++++ RECURSIVE FUNCTION +++++++++++++++++++++++
/*
    The process in which the function calls itself is called recursion
*/

int fact(int x)
{
    if(x < 1) return 1;
    else return x * fact(x - 1);
}

