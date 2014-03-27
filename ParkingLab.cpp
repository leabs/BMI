/**********************************************************************
* Program Name: Parking Lab
* Author: Steven Leabo
* Program Description: This program will ask the user to input the number
* of minutes they've been parked in a garage. The program will then display
* how many hours and minutes they've been parked and display their parking
* fee of $1.00 per hour with 2 decimal places. 
**********************************************************************/

/************************** Compiler Directives **********************/

#include <iostream>
#include <string> // For string variables 
#include <iomanip> // For 2 decimal places

using namespace std;

/**********************************************************************
*
* Pseudocode:
*
* -Display output for user to input number of minutes parked in the garage
*    
*    -Assign to int minutes       
*        
*         -If minutes ==0, cout << "enter a valid time" and return 
*                  
*    -Finding int total_hours (minutes/60)      
*                          
*    -Find remainder of minutes left over (minutes%60)      
*                            
*         -Calculate payment ($1.00 per hour). If vehicle is parked in any part 
*         of an hour they're charged for that hour.
*                   
*    -Display total time in hours and minutes
*     
*    -Display parking charge as float $X.XX
*      
*    -Pause screen to view output
*     
*           -Indicate to the OS a successful termination of your program
*
**********************************************************************/

/*************** Begin main Function Executables *****************/

int main()
{
    
/*************************Local Variables*****************************/
int minutes; // Parked minutes
int total_hours; // Total hours (if minutes are > 60)
int leftOverMinutes; // New value of minutes (if minutes are > 60)
float payment; //Total payment owed
/**********************************************************************/
    
    //Display output for user to input number of minutes parked in the garage
    cout << "Enter the total number of MINUTES that you've been parked in the garage: ";
    
        //Assign to int minutes
        cin >> minutes;
        
            //If minutes ==0, cout << "enter a valid time" and return 
            if ( minutes == 0)
                  {
                  cout << "Please enter a valid number of minutes you've been parked \n(Must be greater than 0): ";
                  
                  cin >> minutes;
                  }
                  
            //Finding int total_hours by dividing minutes by 60      
            total_hours=(minutes/60); 
                  
            //Find remainder of minutes left over      
            leftOverMinutes = (minutes%60);  
                  
               //Calculate payment ($1.00 per hour). If vehicle is parked in any part of an hour they're charged for that hour.
               if (leftOverMinutes > 0)
                   {
                   payment = (total_hours + 1);
                   } 
                   else
                       
                   payment = total_hours;
        
    //Display total time in hours and minutes
    cout << "You've been parked for "<< total_hours << " hours and " << leftOverMinutes << " minutes. \n";
    
    //Display parking charge as float $X.XX
    cout << "Your parking fee is $" << fixed << showpoint << setprecision (2) << payment << ". Thank you\n";
    
    //pause screen to view output
    system ("pause");  

           //Here is where you indicate to the OS a successful termination of your program
           return 0;
        
} //end main
