#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) os << a[i] << '\n';
    return os;
}

ostream& print_vector(ostream& os, vector<int>& vec)
{
    for (int num : vec) os << num << '\n'; //ranged-based for loop to print elements of the vector
    return os;
}

int main()
try {
    // Drill - free-store allocation

    int* arr = new int[20]; //allocate 20 spaces in memory as array of numbers

    int x = 100;
    //loop to assign arrays to 100 then icrease that 100 by 1
    for (int i = 0; i < 20; ++i) {
        arr[i] = x; //assign the current index of the array to 100
        ++x; //increase 100 by 1
    }

    print_array(cout, arr, 20); //operator overloading to pring the array
    delete[] arr; //deallocate pointer of array to prevent memory leak

    vector<int> v10(10);

    int y = 100;
    for (int& v : v10) {
        v = y;
        ++y;
    }

    print_vector(cout, v10);
}
catch (exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Unknown exception\n";
    return 2;
}
