/**********************************************************************
* Program Name: Lab 5
* Author: Steven Leabo
* Program Description: This program will calculate the cost of a phone call. 
* The program will output an error if incorrect data is submitted, else it 
* will display the result of the submitted minutes and show the final cost. 
**********************************************************************/

/************************** Compiler Directives **********************/

#include <iostream>
#include <string> // For string variables 
#include <iomanip> // For 2 decimal places

using namespace std;
////////////////////////////Initial Algorithm///////////////////////////
/***********************************************************************
*
*     - Ask user to submit the number of minutes talked (as INT)
*     -Output an error message if no minutes were entered
*     -Calculate the results
*     -Display the minutes talked and final cost (showing 2 decimal places)
*     -Pause screen to view output
*
**********************************************************************/


////////////////////////////Refined Algorithm///////////////////////////
/**********************************************************************
*  Pseudocode:
*
*    -Ask user to submit the number of minutes talked (as INT)
*    	-Minutes stored in INT minutes
*    -Output an error message if no minutes were entered
*      	-IF INT minutes == 0 output error message, and have user input a valid INT
*    -Calculate the left over minutes (if minutes > 10)
*    -Calculate the results
*    	-IF minutes <= 10 the final cost will be .99
*     	-Else final cost =  (leftover_minutes * .10) +.99
*    -Display the minutes talked and final cost (showing 2 decimal places)
*    -Pause screen to view output
*
**********************************************************************/

/*************** Begin main Function Executables *****************/

int main()
{
    
/*************************Local Variables*****************************/

int minutes;
int leftover_minutes;
float finalCost;

/**********************************************************************/
    
    //Ask user to submit the number of minutes talked (as INT)
    cout << "Please enter the number of minutes you have talked. " << endl;
    
          //Minutes stored in INT minutes
          cin >> minutes;
          
    //Output an error message if no minutes were entered
    
             //IF INT minutes == 0 output error message, and have user input a valid INT
             if (minutes == 0)
             {
              cout << "You must enter a number greater than 0, plese enter a valid number: " << endl;
              cin >> minutes;           
             }
              
    //Calculate the left over minutes (minutes > 10)
    leftover_minutes = (minutes - 10);
             
    //Calculate the results
    
                //IF minutes <= 10 the final cost will be .99
                if (minutes <= 10)
                {
                finalCost = .99;            
                }
                
                //Else final cost =  (leftover_minutes * .10 )+.99
                else
                {
                finalCost = (leftover_minutes * .10) +.99;    
                }
                
    //Display the minutes talked and final cost (showing 2 decimal places)
    cout << "Your charge for talking " << minutes << " minutes is $" << finalCost << ". " << endl;
    
    //pause screen to view output
    system ("pause");  

           //Here is where you indicate to the OS a successful termination of your program
           return 0;
        
} //end main
