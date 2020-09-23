// Machine Problem 002
// Loreto P. Nastor Jr.
// BSBA-MIS

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include "_pause.h"

using namespace std;

int main () {

    int arr[5][7] = {{1,2,3,4,5,6,7},
                    {8,9,10,11,12,13,14},
                    {15,16,17,18,19,20,21},
                    {22,23,24,25,26,27,28},
                    {29,30,31,32,33,34,35}};
    int var[5][7];
    int r, c, seatnumber;

    loop:

    cout <<"\t\tSeat Reservation\n\n";
    for (int r=0; r < 5; r ++) {
        for (int c = 0; c < 7; c++) {
            cout << arr[r][c] << "\t";
        }
        cout << endl;
    }

cout << "\nEnter a seat number: ";
cin >> seatnumber;
for (int r = 0; r < 5; r ++) {
    for (int c = 0; c < 7; c++) {
        if (seatnumber == var [r][c]) {
            cout << "Seat is taken.\n\n" <<endl;
        }

    }
}

for (int r = 0; r < 5; r++){
    for (int c = 0; c < 7; c++) {
        if (seatnumber == arr [r] [c]) {
            var [r] [c] = arr [r] [c];
            arr [r] [c] = 0;
            cout << "Seat successfully reserved.\n\n" << endl;
        }
    }
}


if (seatnumber < 0 || seatnumber > 35) {
    cout << "You've entered an invalid number.\n\n" <<endl;
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 7; c++) {
            cout << arr [r] [c] << "\t";
        }
        cout << endl;
    }
}
goto loop;

system ("pause");
return EXIT_SUCCESS;

}