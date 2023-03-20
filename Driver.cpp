#include <iostream>
#include <string>
#include "Rainfall.h"
#include "list.h"

using namespace std;

int main()
{
    int numMonths;
    cout << "Enter the number of months to be saved: ";
    cin >> numMonths;
    cin.ignore(); // Ignore newline character
    
    Rainfall rainfall(numMonths);
    
    char choice;
    do {
        cout << endl << "Enter your choice:" << endl;
        cout << "A -- Add a month of statistics" << endl;
        cout << "E -- Edit a month of statistics" << endl;
        cout << "P -- Print report" << endl;
        cout << "Q -- Quit" << endl;
        cout << "Choice: ";
        
        cin >> choice;
        cin.ignore(); // Ignore newline character
        
        switch (toupper(choice)) {
            case 'A': {
                string month;
                double rainfallAmount;
                
                cout << "Enter Month: ";
                getline(cin, month);
                
                cout << "Enter Rainfall (in Inches): ";
                cin >> rainfallAmount;
                cin.ignore(); // Ignore newline character
                
                rainfall.addMonth(month, rainfallAmount);
                break;
            }
            case 'E': {
                string month;
                double rainfallAmount;
                
                cout << "Enter Month: ";
                getline(cin, month);
                
                cout << "Enter Rainfall (In Inches): ";
                cin >> rainfallAmount;
                cin.ignore(); // Ignore newline character
                
                rainfall.editMonth(month, rainfallAmount);
                break;
            }
            case 'P': {
                rainfall.printReport();
                break;
            }
            case 'Q': {
                cout << "Goodbye!" << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (toupper(choice) != 'Q');
    
    return 0;
}
