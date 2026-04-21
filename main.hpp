//
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

int getRandom(void)
{
    // TODO
    return rand() % 100;
    // TODO
}

int getClosestMed(int num1, int num2, int num3)
{
    // TODO
    double mean = (num1 + num2 + num3) / 3.0;
    int closest = num1;
    double minGap = abs(num1 - mean);
    if (abs(num2 - mean) < minGap) {
        closest = num2;
        minGap = abs(num2 - mean);
    }
    if (abs(num3 - mean) < minGap) {
        closest = num3;
    }
    return closest;
    // TODO
}
