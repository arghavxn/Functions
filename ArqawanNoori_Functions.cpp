//Part I - Identification / Algorithm
/*
Arqawan Noori
04/25/2024
CS203-Computer Programming I

Program: This program calculates the quarterly sales figures for four divisions and identifies the division with the highest sales using functions to store the values. 
it also uses formatting options to clarify the code.

*Design (Pseudo/Algorithm)*

Step 1: Start.
Step 2: Define/Identify the variables and function prototypes.
Step 3: Prompt the user to enter the quarterly sales figure for each division.
Step 4: Validate the input to ensure non-negative values.
Step 5: Calculate and store the sales figures for each division.
Step 6: Determine the division with the highest sales.
Step 7: Output the division with the highest sales.
Step 8: End.
*/

//Part II - Preprocessor files / Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Part III - Declare / Initialize Variables
//Declare function prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main() {
    //Declare division names and sales variables
    string division1 = "Northeast", division2 = "Southeast", division3 = "Northwest", division4 = "Southwest";
    double northeastSales, southeastSales, northwestSales, southwestSales;

    //Part IV - Algorithmic Process
    //Get sales figures for each division
    northeastSales = getSales(division1);
    southeastSales = getSales(division2);
    northwestSales = getSales(division3);
    southwestSales = getSales(division4);

    //Find the division with the highest sales
    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}

//Function to get sales figure for a division
double getSales(string division) {
    double divisionSales;
    cout << "Enter the quarterly sales figure for " << division << ": ";
    cin >> divisionSales;

    //Input validation for non-negative sales figure
    while (divisionSales < 0) {
        cout << "Sales figure cannot be negative. Please enter again.\n";
        cin >> divisionSales;
    }
    return divisionSales;
}

//Function to find the division with the highest sales
void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales) {
    double highestSales = northeastSales;
    string highestDivision = "Northeast";

    //Compare sales figures of all divisions to find the highest
    if (southeastSales > highestSales) {
        highestSales = southeastSales;
        highestDivision = "Southeast";
    }
    if (northwestSales > highestSales) {
        highestSales = northwestSales;
        highestDivision = "Northwest";
    }
    if (southwestSales > highestSales) {
        highestSales = southwestSales;
        highestDivision = "Southwest";
    }

    //Output the division with the highest sales
    cout << setprecision(2) << fixed << "The division with the highest sales is " << highestDivision << " with sales of $" << highestSales << endl;
}

								//Part 6 - Verification / Validation
/*
Test Cases:
								//Part 6 - Verification / Validation
Enter the quarterly sales figure for Northeast: 3000
Enter the quarterly sales figure for Southeast: 4000
Enter the quarterly sales figure for Northwest: 5000
Enter the quarterly sales figure for Southwest: 6000
The division with the highest sales is Southwest with sales of $6000.00

--------------------------------

Enter the quarterly sales figure for Northeast: 50000
Enter the quarterly sales figure for Southeast: 70000
Enter the quarterly sales figure for Northwest: 20
Enter the quarterly sales figure for Southwest: 6
The division with the highest sales is Southeast with sales of $70000.00

--------------------------------

Enter the quarterly sales figure for Northeast: 6000
Enter the quarterly sales figure for Southeast: 242345
Enter the quarterly sales figure for Northwest: 34523
Enter the quarterly sales figure for Southwest: 2346457
The division with the highest sales is Southwest with sales of $2346457.00

--------------------------------

*/
