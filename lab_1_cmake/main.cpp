#define USE_DOUBLE
#if defined(USE_DOUBLE)
    #define TYPE double
#else
    #define TYPE float
#endif

#define _USE_MATH_DEFINES
#define ARR_LEN 10000000
#define PERIOD 2*3.14159265358979323846


#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<TYPE> v(ARR_LEN); 

int main(){
    TYPE sum = 0;
    for (int i = 0; i<ARR_LEN; i++) {
        v[i] = sin((TYPE)i / (ARR_LEN) * PERIOD);
        sum += v[i];
    }
    cout << "RESULT: " <<  sum << "\n";
}