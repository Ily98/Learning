#include <stdio.h>
#include <fmt/format.h>
using namespace std;

int main()
{
    double celsius;
    double lower = 0;
    double fahr = lower;

    double upper = 300;
    double step = 20;

    while(fahr <= upper){
        celsius = 5*(fahr - 32) / 9;
        fmt::print("{:8} \t {:16f}\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
