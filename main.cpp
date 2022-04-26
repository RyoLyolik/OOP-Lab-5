#include <iostream>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(nullptr));
    int array[12];
    int (*r)[12] = &array;
    for (int i = 0; i < 12; i++)
    {
        *(*r+i) = (rand()%201)-100;
    }
    cout << "Первоначальный массив\n";
    for (int i = 0; i < 12; i++)
    {
        cout << *(*r+i) << ' ';
    }
    for (int i =0; i<12; i+=2)
    {
        if (i%2 == 0)
        {
            swap(*(*r+i),*(*r+i+1));
        }
    }
    cout << "\nМассив после обработки\n";
    for (int i =0; i<12; i++)
    {
        cout << *(*r+i) << ' ';
    }
    return 0;
}
