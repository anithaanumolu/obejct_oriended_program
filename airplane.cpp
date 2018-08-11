#include <iostream>
#include <string>
//#include "booking.h"

using namespace std;

class Flight
{

public:

    public:
    struct Seat
        {
            int Available;
            string fullName;
        };// End of struct

// Structure for seat plan (24 spaces available)
    struct Seat seatArray[4][6];

    void seatPlan()
    {   //------
        cout << "Scotia Airlines Seating Plan\n";
        cout << "------------------------\n";
        cout << " 1D  2D  3D  4D  5D  6D\n";
        cout << " 1C  2C  3C  4C  5C  6C\n";
        cout << "                       \n";
        cout << " 1B  2B  3B  4B  5B  6B\n";
        cout << " 1A  2A  3A  4A  5A  6A\n";
        cout << "------------------------\n\n\n";
        //------
        for (int i=0;i<4;i++)
        {
            for (int j=0;j<6;j++)
                {
                if (seatArray[i][j].Available == 0)
                cout << seatArray[i][j].fullName << "=" << i+1;

                else
                cout << "Seating Plan is unavailable";
                break;
                }
        }// End of for loop
    }// End of seatPlan function
};// End of Flight class
