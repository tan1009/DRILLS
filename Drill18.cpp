#include "std_lib_facilities.h"

// 1 Define a global int array
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

//function f that takes array and number of elements
void f(int ai[], int n)
{
    //ai = array instance
    //la = local array
    int la[10] = { };
    for (int i = 0; i < n; ++i) la[i] = ai[i]; //assign la array to all elements of ai array - ai array is a parameter

    cout << "Local copy\n";
    for (const auto& a : la)
        cout << a << ' ';
    cout << '\n';

    //allocated n spaces in memory to create array p - a pointer can be dealt with as an array too
    int* p = new int[n]; //new int[n] = allocated number of bytes n in memory
    for (int i = 0; i < n; ++i) p[i] = ai[i];

    cout << "Pointer to free store\n";
    for (int i = 0; i < n; ++i)
        cout << p[i] << ' ';
    cout << '\n';

    delete[] p; //deallocating array to prevent memory leak
}

int fac(int n) { return n > 1 ? n * fac(n - 1) : 1; } //function to get factorial

int main()
try {
    // code
    cout << "Binary array\n";
    f(ga, 10);

    int aa[10] = {};
    for (int i = 0; i < 10; ++i)
        aa[i] = fac(i + 1);

    cout << "Factorial array\n";
    f(aa, 10);
}
catch (exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Unknown exception\n";
    return 2;
}
