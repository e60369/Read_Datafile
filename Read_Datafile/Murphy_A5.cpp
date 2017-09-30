//----------------------------------------------------------------------------
// EGR 126 ELI Fall 2017
//----------------------------------------------------------------------------
// Student Name : Rich MURPHY
// Assignment : A5
// Submission Date: 9/30/17
// Compiler Info : MacOS, Xcode
// Purpose : This program reads data from an external data file and displays it's contents.
//----------------------------------------------------------------------------

#include<iostream>
#include<fstream>

using namespace std;

int main()

{
    int i = 0, psi; // We establish a variable "i" with an initial value 0 that we'll call "psi"
    ifstream tiretemps("TruckTireTemp.txt"); // We reference our data file and assign it a name.
    
    cout << "----------------------------------------" << endl;
    cout << "\tRich MURPHY\t\t" << endl;
    cout << "\tSolution for Assignment # 5\t\t" << endl;
    cout << "----------------------------------------" << endl;
    cout << "DUMP TRUCK TIRE #1 PRESSURE READINGS" << endl;
    cout << "----------------------------------------"<< endl;

// We first do a data integrity check to ensure we have 10, and only 10 values. If we have more or less we'll throw some error messages otherwise we print the values in the data file into a table.
    while (tiretemps >> psi)
            {
            i++;
            }
                if (i < 10)
                    {
                    cout << "\nError, file has less than 10 wheels. Check your input data file and re-run the code.\n";
                    }
    
                else if (i > 10)
                    {
                    cout << "\nError, file has more than 10 wheels. Check your input data file and re-run the code.\n";
                    }
    
                else if (i == 10) // If we pass our data integrity check we now reset "i" back to 0 re-read from the file and print a table of the values it contains.
                    {
                    ifstream tiretemps("TruckTireTemp.txt");
                    i = 0; // reset "i" to 0
                        while ( tiretemps >> psi )
                            {
                                i++; // re-iterate the reading of each file line.
                                cout << "\tTire # " << i << "\tPressure = " << psi << "\tPsi" << endl; // Output our table.
                            }
                    }
        cout << endl;
        cout << "----------------------------------------" << endl;
        cout << "\tEnd of Assignment # 5" << endl << endl;
    
    system("pause"); // So program won't auto-exit after running.
    
return 0;
    
}
