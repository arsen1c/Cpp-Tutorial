#include <iostream>
using namespace std;

/*C++ string class has a lot of functions to handle string easily. Most useful of them are demonstrated in below code.
    Some of the most usefuls are mentioned below.
*/


void checkProgress();
void checkChar();

int main()
{

    // initialization by raw string 
    string str1("first string"); 
  
    // initialization by another string 
    string str2(str1); 
  
    // initialization by character with number of occurrence 
    string str3(5, '#'); 
  
    // initialization by part of another string 
    string str4(str1, 6, 6); //    from 6th index (second parameter) 
                             // 6 characters (third parameter) 
  
    // initialization by part of another string : iteartor version 
    string str5(str2.begin(), str2.begin() + 5); //from to 
  
    cout << str1 << endl; 
    cout << str2 << endl; 
    cout << str3 << endl; 
    cout << str4 << endl; 
    cout << str5 << endl; 

    //  assignment operator 
    string str6 = str4; 
    cout << str6 << endl; 
  
    // clear function deletes all character from string 
    str4.clear(); 
    cout << str4 << endl;  // clears whats in the str4 variable;

    //  both size() and length() return length of string and 
    //  they work as synonyms 
    int len = str6.length(); // Same as "len = str6.size();" 
  
    cout << "Length of string is : " << len << endl; 


    // # front and back to get data stored at a place in the string;
    string myStr = "Aashish Dayanad Gajadhane";
    cout << "Using front() function(get 0th word): "<< myStr.front() << endl;
    cout << "Using back() function(get last alphabet): " << myStr.back() << endl;
    char ch = myStr.at(2);
    cout << "Using AT: "<< ch << endl;

    myStr.append(" is a student");
    cout << "Appended sentence: " << myStr << endl;

    myStr.append("Hello", 0, 5);
    cout << "Append2: " << myStr << endl;


    // ++++++++++++++++++++++++++++ String Practice(gfg) +++++++++++++++++++++++++
    //checkProgress();

    // ++++++++++++++++++++++++++ Check Char ++++++++++++++++++++++++++++++++
    checkChar();
}



// ++++++++++++++++++++++++++++ CHECK PROGRESS(gfg string practice) +++++++++++++++++++++++++++++


/*
Input: 
    First line of the input file contains an integer T which denotes the number of test cases. For each test case, there will be two lines. 
    First line contains string A, and second line contains string B.

Output:
    Corresponding to each test case, In the first line print the length of the longer string and 
    In the second line print the string obtained by concatenating the two strings.


Example:
Input:
1
Geeks
forGeeks

Output:
8
GeeksforGeeks
*/


void checkProgress()
{
    cout << "+++++++++++++++++++ STRING PRACTICE ++++++++++++++++++++++++\n";
    int testCase, x, i;
    string intake1, intake2;

    cout << "\n\nEnter test cases:\n";
    cin >> testCase;

    for(x = 0; x < testCase; x++)
    {
        cout << "Enter 2 strings:\n";
        cin >> intake1 >> intake2;

        if(intake1.length() > intake2.length()) cout << intake1.length() << endl << intake1 << intake2 << endl;
        else cout << intake2.length() << endl << intake1 << intake2 << endl;
    }
}



void checkChar()
{
    string a = "Astrix Arsenic Vector";

    // check if a char is present in the string or not;
    if(a.find('x') != std::string::npos) cout << "\n\nChar found\n";
    else cout << "\n\nChar not found\n";
}
