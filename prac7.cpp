#include<iostream> 
#include<string> 
#include<map> 
using namespace std;

class Map
{
    string name;
    float population;
    public:
    Map ()
    { 
        name="None";
        population=0.0;
    }
    void accept()
    {
        cout<<"\nEnter the name of the state: ";
        cin>>name;
        cout<<"Enter the population of the state (in crores): "; 
        cin>>population;
    }
    void display (map<string, float>::iterator it, int x)
    {
        cout<<"\n\t---------- Record "<<x+1<<"----------";
        cout<<"\n\t\tName of State: "<<it->first;
        cout<<"\n\t\tPopulation : "<<it->second<<" crores\n";
        cout<<"\n\t\tPopulation: "<<it->second<<" crores\n";
        } 
    inline string getname ()
    {
     return name;
    }
    inline float getpopulation()
    {
    return population;
    }
};
int main()
{
    Map obj;
    string s;
    float f;
    map <string, float> mobj;
    map <string, float>::iterator it;
    int i, choice;
    do
    {
        cout<<"\n\n\t*** MENU ***";
        cout<<"\n\tl. Insert Record\n\t2.Delete Record\n\t3. Display Record\n\t4.Exit\n";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1: obj.accept();
                    s=obj.getname();
                    f=obj.getpopulation();
                    mobj.insert(pair<string, float>(s, f));
                    cout<<"\n\tRecord Inserted Successfully";
                    break;

            case 2: if(!mobj.empty())
            {
                    cout<<"Enter the state name whose record is to be deleted: ";
                    cin>>s;
                    it=mobj.find(s);
                    if(it!=mobj.end())
                {
                mobj.erase (s);
                cout<<"\n\tRecord of state "<<s<<" has been deleted successfully";
                }
                else
                cout<<"\n\tRecord Not Found!";
            }
            else
            cout<<"\n\tContainer is Empty. Cannot Delete Record.";
            break;

            case 3: if(!mobj.empty())
            {
            cout<<"\n\t\tDisplay of All Records\n";
            for(it=mobj.begin(),i=0;it!=mobj.end(), i<mobj.size(); it++, i++) obj.display(it, i);
            cout<<"\n\nAll Records have been displayed Successfully";
            }
            else
            cout<<"\n\tContainer is Empty. Cannot Display Records.";
            break;

            case 4: break;
            default: cout<<"\n Invalid choice entered. Enter a valid choice!";
        }
    } while(choice!=4);
    cout<<"\n\t\t*** End of Program ***";
    cout<<"\nThank You !";
    return 0;
}





// In C++, a "map" generally refers to an associative container provided by the C++ Standard Template Library (STL). The map is part of the C++ Standard Template Library (STL) and is a container that stores key-value pairs. It is implemented as a balanced binary search tree, typically a red-black tree.

// Here are some key concepts related to the map container in C++:

// 1. **Key-Value Pairs:**
//    - A map stores elements in key-value pairs. Each element has a unique key associated with it, and the key is used to access the associated value. The combination of a key and its associated value is known as a "key-value pair."

// 2. **Ordered Container:**
//    - Maps in C++ are ordered containers, which means that the elements are stored in a specific order. The order is based on the keys, and it is typically sorted.

// 3. **No Duplicate Keys:**
//    - Each key in a map must be unique. If you try to insert a key that already exists in the map, the insertion operation will fail.

// 4. **Search and Access:**
//    - Searching for a specific key in a map is efficient. The map structure allows for fast lookups based on the keys.
//    - Accessing the value associated with a key is also quick.

// 5. **Insertion and Deletion:**
//    - Elements (key-value pairs) can be inserted into a map using the `insert` function or using the `[]` operator.
//    - Elements can be removed using the `erase` function.

// 6. **Iterators:**
//    - Maps support iterators that allow you to traverse the elements in order.

// 7. **Balanced Binary Search Tree:**
//    - The underlying implementation of a map is often a balanced binary search tree, typically a red-black tree. This ensures efficient search, insertion, and deletion operations.

// Here's a simple example of using a map in C++:

// ```cpp
// #include <iostream>
// #include <map>

// int main() {
//     // Creating a map with string keys and int values
//     std::map<std::string, int> myMap;

//     // Inserting key-value pairs
//     myMap["Alice"] = 25;
//     myMap["Bob"] = 30;
//     myMap["Charlie"] = 22;

//     // Accessing values using keys
//     std::cout << "Age of Alice: " << myMap["Alice"] << std::endl;

//     // Iterating through the map
//     for (const auto& pair : myMap) {
//         std::cout << pair.first << ": " << pair.second << std::endl;
//     }

//     return 0;
// }
// ```

// In this example, `std::map<std::string, int>` is a map that uses strings as keys and integers as values. The program inserts key-value pairs into the map, accesses values using keys, and iterates through the map.