#include<iostream> 
using namespace std;

template<typename T>
void display (T arr[], int n)
{
    for (int i=0;i<n;i++)
      cout<<arr[i]<<"\t";
}
template<typename T>
void selectionsort(T arr[], int no)
{
    int i,j,n=no;
    T temp;
    cout<<"\nThe array before performing Selection Sort: \t";
    display (arr,n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (arr[j]<arr[i])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            arr[j]=temp;
            }
          
        }
    }
    cout<<"\nThe array after performing Selection Sort: \t";
    display (arr,n);
}
int main()
{
    int i,n;
    cout<<"\n------- SELECTION SORT FOR INTEGER ARRAY ---------"<<endl;
    cout<<"\n\tEnter the total numbers in the array: ";
    cin>>n;
    int arr1 [n];
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<"Enter the number in array at position ["<<i<<"]";
        cin>>arr1[i];
    }
    selectionsort (arr1,n);
    cout<<"\n\n------ SELECTION SORT FOR FLOAT ARRAY ------"<<endl;
    cout<<"\n\tEnter the total numbers in the array: "; 
    cin>>n;
    float arr2[n];
    cout<<"\n";
    for(i=0;i<n;i++)
    {
    cout<<"Enter the number in array at position ["<<i<<"]: ";
    cin>>arr2[i];
    }
    selectionsort (arr2, n);
    return 0;
};






// Templates in C++ provide a way to create generic classes and functions. They allow you to write code that can work with any data type, providing flexibility and code reusability. Templates are a powerful feature that enables you to write functions or classes without specifying the data type explicitly, making your code more generic.

// There are two main types of templates in C++:

// 1. **Function Templates:**
//    - A function template allows you to define a function with a placeholder for the data type. You can use this template to create functions that operate on different types without duplicating the code.

//    ```cpp
//    template <typename T>
//    T add(T a, T b) {
//        return a + b;
//    }
//    ```

//    In this example, `typename T` is a template parameter that represents the data type. You can use the `add` function with integers, floating-point numbers, or any other type that supports the `+` operator.

//    ```cpp
//    int result_int = add(5, 3);         // result_int = 8
//    double result_double = add(2.5, 3.5); // result_double = 6.0
//    ```

// 2. **Class Templates:**
//    - Class templates are similar to function templates but are used for creating generic classes. You can define a class with one or more template parameters.

//    ```cpp
//    template <typename T>
//    class Pair {
//    private:
//        T first;
//        T second;

//    public:
//        Pair(T a, T b) : first(a), second(b) {}

//        T getFirst() const {
//            return first;
//        }

//        T getSecond() const {
//            return second;
//        }
//    };
//    ```

//    You can instantiate the `Pair` class with different data types:

//    ```cpp
//    Pair<int> intPair(5, 10);
//    Pair<double> doublePair(2.5, 3.5);
//    ```

//    The `Pair` class can be used with both `int` and `double` types.

// Templates provide a way to achieve generic programming in C++, making your code more versatile and adaptable to different data types. They are extensively used in the C++ Standard Template Library (STL), where containers and algorithms are implemented as templates to work with various types of data.




// #include<iostream>: Includes the input/output stream library.
// using namespace std;: Brings the entire std namespace into scope.
// Template Functions (display and selectionsort):
// template<typename T>: Declares a template parameter T for generic programming.
// void display(T arr[], int n): Template function to display the elements of an array.
// void selectionsort(T arr[], int no): Template function to perform selection sort on an array.
// display Template Function:
// Iterates through the array and prints each element with a tab space.
// selectionsort Template Function:
// Displays the array before sorting.
// Implements the selection sort algorithm on the array.
// Displays the array after sorting.
// Note: There is a redundant line (arr[j] = temp;) that can be removed.
// main Function:
// Declares variables i and n.
// SELECTION SORT FOR INTEGER ARRAY:
// Prompts the user to enter the size of the integer array (n).
// Takes input for each element of the integer array (arr1).
// Calls the selectionsort function for the integer array.
// SELECTION SORT FOR FLOAT ARRAY:
// Prompts the user to enter the size of the float array (n).
// Takes input for each element of the float array (arr2).
// Calls the selectionsort function for the float array.
// Note:
// The code uses templates to make the sorting algorithm generic, allowing it to work with both integer and float arrays.
// The display and selectionsort functions are instantiated with the appropriate data types based on the arrays provided in main.
// The redundant line in the selectionsort function (arr[j] = temp;) can be removed.
// This program demonstrates the selection sort algorithm on both integer and float arrays using C++ templates. The sorted arrays are displayed before and after sorting.