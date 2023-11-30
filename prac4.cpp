#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Employee
{
    string name, designation;
    int id;
    double salary;
    public:
        Employee ()
        {
            name="None";
            id=0;
            designation="None";
            salary=0;
        }
        void accept (int x)
        {
            cout<<"\n\nEnter the details of Employee No. "<<x+1<<":";
            cout<<"\n\tEnter the Employee Name: ";
            cin>>name;
            cout<<"\tEnter the Employee ID : ";
            cin>>id;
            cout<<"\tEnter the designation of the Employee : ";
            cin>>designation;
            cout<<"\tEnter the salary of the Employee: Rs.";
            cin>>salary;
        }
        void display(int x)
        {
        cout<<"\n\n-------- Details of Employee No. "<<x+1<<" ---------";
        cout<<"\n\tName: "<<name;
        cout<<"\n\tEmployee ID: "<<id;
        cout<<"\n\tDesignation: "<<designation;
        cout<<"\n\tSalary: Rs."<<salary;
        }
};
int main()
{
    int choice, n, i;
    cout<<"\t\tWELCOME TO EMPLOYEE DATABASE";
    cout<<"\nHow many employee records would you like to enter ?";
    cin>>n;
    Employee obj[n];
    ofstream fout;
    ifstream fin;
    do
    {
        cout<<"\n\n\t\t****** MENU ******";
        cout<<"\n\tl.Write Employee Details into File\n\t2.Read Employee Details from File\n\t3.Exit\n";
        cout<<"\nEnter your choice: ";
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: fout.open("Employee Records.dat", ios:: out); 
            cout<<"\nEmployee File has been opened for writing."; 
            cout<<"\n\tWriting Employee Information to File...."; 
            for(i=0;i<n;i++)
            {
            obj[i].accept (i); 
            fout.write((char*) &obj[i], sizeof (obj[i]));
            }
            cout<<"\nEmployee Information written to File successfully !";
            fout.close(); 
            cout<<"\nEmployee File has been closed.";
            break;

            case 2: fin.open("Employee Records.dat", ios::in);
            cout<<"\nEmployee File has been opened for reading."; 
            cout<<"\n\tReading Employee Information from File....";
            for(i=0;i<n;i++)
            {
            fin.read((char*) &obj[i], sizeof (obj[i]));
            obj[i].display(i);
            }
            cout<<"\nEmployee Information read from File successfully !"; 
            fin.close();
            cout<<"\nEmployee Information written to File successfully!";
            fout.close();
            cout<<"\nEmployee File has been closed.";
            break;
            case 3: cout<<"\n\t-------- EXIT---------";
            break;
            default: cout<<"\n Your have entered an invalid choice. Enter a valid choice!";
        }  
    }
    while(choice!=3);
    cout<<"\n*** End of Program ***";
    cout<<"\nThank You !";
    return 0;
}

// File handling in C++ refers to the process
//  of working with files, which allows you to read data from 
//  files and write data to files. The C++ standard library provides 
//  classes and functions for file input and output operations. 
//  File handling in C++ is typically done using the <fstream> header, which provides
//   the necessary classes for file operations.


// In C++, `ofstream` and `ifstream` are classes provided by the Standard Template Library (STL) that are used for file input/output operations.

// - **`ofstream` (Output File Stream):**
//   - This class is used to create and write to files.
//   - Objects of `ofstream` are used for output operations, such as writing data to a file.
//   - It is part of the `<fstream>` header.

//   Example:
//   ```cpp
//   ofstream fout;
//   fout.open("output.txt");  // Opens a file named "output.txt" for writing
//   fout << "Hello, World!";  // Writes data to the file
//   fout.close();             // Closes the file
//   ```

// - **`ifstream` (Input File Stream):**
//   - This class is used to read from files.
//   - Objects of `ifstream` are used for input operations, such as reading data from a file.
//   - It is part of the `<fstream>` header.

//   Example:
//   ```cpp
//   ifstream fin;
//   fin.open("input.txt");   // Opens a file named "input.txt" for reading
//   string data;
//   fin >> data;              // Reads data from the file
//   fin.close();              // Closes the file
//   ```

// In the provided code you shared earlier:

// ```cpp
// ofstream fout;
// ifstream fin;
// ```

// This code declares two objects, `fout` and `fin`, of the `ofstream` and `ifstream` classes, respectively. These objects are used for file output and input operations in the later part of the program. The program opens and closes files using these objects to write and read employee data.