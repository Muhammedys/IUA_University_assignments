#include <iostream>
#include <conio.h>
 
using namespace std;

int main()
{
    int hours, secs, mins;

    cout << "Enter hours to convert" << endl;
    cin >> hours;

    mins = hours * 60;
    secs = mins * 60;

    cout << "Hours entered equals to: " << mins << " mins and: " << secs << " secs" << endl;


    getch();

    return 0;
}
