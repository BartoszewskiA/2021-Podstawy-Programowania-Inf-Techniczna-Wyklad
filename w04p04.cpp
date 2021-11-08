#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL)); //1x na program
    for (int i = 0; i < 20; i++)
    {
        cout << rand() % 10 << " ";
    }
    return 0;
}