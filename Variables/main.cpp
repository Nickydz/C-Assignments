#include <iostream>

using namespace std;

int main()
{
    const int MINUTES_PER_HOUR =60;
    int numHours = 3;


    cout << "There are " << numHours*MINUTES_PER_HOUR << " mins in " << numHours << " Hours" << endl;
 //   MINUTES_PER_HOUR++;
 /*Error
 mingw32-g++.exe -Wall -fexceptions -g -std=c++98  -c D:\CPP_Projects\Variables\main.cpp -o obj\Debug\main.o
mingw32-g++.exe  -o bin\Debug\Variables.exe obj\Debug\main.o
D:\CPP_Projects\Variables\main.cpp: In function 'int main()':
D:\CPP_Projects\Variables\main.cpp:12:21: error: increment of read-only variable 'MINUTES_PER_HOUR'
     MINUTES_PER_HOUR++;

 */
    numHours++;

    unsigned int zeroHour = 0;
    zeroHour--;
    cout << "1 hour before zero hour is " << zeroHour << endl;

    return 0;
}
