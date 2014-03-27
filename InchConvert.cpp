/**********************************************************************
* Program Name: Program 3
* Author: Steven Leabo
* Program description: This program will ask the user to input two values
* in inches. The first is the starting value which is the start of a range
* and the second is a larger value or the end of the range. The program takes
* those two values and converts them to centimeters in increments of 6 which 
* is then displayed to the user in a chart of converted numbers in increment of 6.
* At the end of the program the user will be asked if they want to repeat
* the program using an outer do/while loop, or if they would like to quit.
**********************************************************************/

/************************** Compiler Directives **********************/

#include <iostream>
#include <string> // For strings
#include <iomanip> // For number formatting

using namespace std;

///////////////////////////Initial Algorithm/////////////////////////////
/*
        - Get starting range number from user (in Inches)
        - Get ending range number from user (in Inches) 
                     (Range must be less than 36 inches and more than 6)
        - Convert numbers to centimeters
        - Display the results in increments of 6
        - Ask the user if they want to repeat the program or quit

/////////////////////////////////////////////////////////////////////////


///////////////////////////Refined Algorithm////////////////////////////

      DO
      {
                 DISPLAY program description
                 DISPLAY output for user to enter smaller value
                         Assign input to smaller value INT A
                         
                 DISPLAY output for user to enter larger value
                         ASSIGN input to larger value INT B
                         
                                IF B > a+36 || b < a+6
                                
                                   DISPLAY error and ask user to enter a valid number
                         
                                FOR (a; a < b; a+=6)
                                    {                
                                     c= a*2.54 ;
                                     DISPLAY the result
                                     }
                                     
                         Ask user to input 2 if they'd like to repeat the program 
                         INPUT int x                                                 
      }
      WHILE (x==2)
      
      Pause to display output
      
///////////////////////////////////////////////////////////////////////



/*************** Begin main Function Executables *****************/

int main()
{
    
/*************************Local Variables*****************************/

int a;
int b;
float c;
int x;

/**********************************************************************/

        //Outer do/while loop for option program restart
        do 
        {
                           
                //Describe the program to the user     
                cout << "This program will convert a range of numbers from INCHES " <<
                "to CENTIMETERS \nin increments of 6.The max range is 36 inches " << 
                "and the minimum difference \nis 6 inches" << endl;
                
                //Ask user for the smaller number in the range
                cout << "\nEnter the smaller number in INCHES:" << endl;
                cin >> a;
                
                do
                {
                //Ask user for the larger number in the range
                cout << "\nEnter the larger number in INCHES (can only be 36 inches greater \n";
                cout << "than the smaller number and must be 6 inches larger):"<< endl;
                cin >> b;
                
                if (b > a+36 || b < a+6)
                   
                   cout << "\nInvalid entry. Please try again.\n";
                
                } while (b > a+36 || b < a+6);
                //output chart of results
                cout << "\n          Inches    Centimeters" << endl;
                cout << "          ------    -----------" << endl;
                
                
                        //FOR loop to find conversion
                        for (a; a < b; a+=6) //Adds 6 to smaller value and repeats equation
                        {
                            //Equation to convert inches to centimeters (stored in C)
                            c= a*2.54 ; 
                            
                            //Display the results with formatting technique set precision
                            cout << "           " << a << "         " << fixed << setprecision(2) << c << endl;    
                        }
                    
                    
                //Ask user if they would like to restart (using DO/WHILE loop        
                cout << "\nDo you want to quit or restart and try again? (1 to quit, 2 to restart)" << endl;
                cin >> x;
                
        }             
        
        //If user inputs 2 the program restarts
        while (x==2); 
            
    //pause screen to view output
    system ("pause");  
        
    //Here is where you indicate to the OS a successful termination of your program
    return 0;
                
    } //end main
