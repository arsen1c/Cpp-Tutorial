#include <iostream>
using namespace std;

// Goal of the following programs will be to find out the largest number out of the given ARRAY!

int firstMethod(int arr[], int arrSize)
{
    int Temp = arr[0]; 
    for(int x = 1; x < arrSize; x++)
    {
        if(Temp < arr[x])
            Temp = arr[x];
    }
    return Temp;
}

int secondMethodd()
{
    int arrSize1; cout << "Enter array size : \n>"; cin >> arrSize1;
    int arr1[arrSize1], Temp1;
    
    for(int x=0; x < arrSize1; x++)
    {
        // fillin the array first;
        cout << "Enter " << x+1 << " number:\n>";
        cin >> arr1[x];
    }
    Temp1 = arr1[0];
    
    // getting the largest now
    for(int i = 1; i < arrSize1; i++)
    {
        if(Temp1 < arr1[i])
            Temp1 = arr1[i];
    }
    return Temp1;
}


int main()
{
    // +++++++++++++++++++++++ FIRST METHOD +++++++++++++++++++++++++++++
    int arr[] = {10,4,69,30,11};
    int arrSize  = sizeof(arr) / sizeof(arr[0]);
    
    // calling 1st method:
    //cout << "Largest out of the 1st method is: " << firstMethod(arr, arrSize) << endl;
    
    
    // +++++++++++++++++++++++ SECOND METHOD ++++++++++++++++++++++++++++
    
    cout << "\nLargest out of 1nd method is: \n";
    cout << secondMethodd() << endl;
    
}
