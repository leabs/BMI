/**********************************************************************
* Program Name: Program_1
* Author: Steven Leabo
* Program Description:
* This program will display the BMI of a user after prompting them to
* input their weight (in pounds) and height (in feet and inches) and finally 
* display the US Department of Health & Human Services BMI index weight 
* catagory the user falls in.
**********************************************************************/

/************************** Compiler Directives **********************/
#include <iostream>
#include <string> 
#include <math.h> // For BMI equation
#include <iomanip> // For 2 decimal places

using namespace std;

/**********************************************************************
* Pseudocode:
*
* -Prompt the user to input their weight
*          -input weight held in float "weight_in_pounds"
* -Prompt the user to input their height
*          -Input height in feet  
*          -Input height in inches
*                  -Find Total_height_in_inches
* -Calculate BMI using the supplied equation
*          -(BMI = weight_in_pounds / pow(total_height_in_inches,2)*703)
* -Display BMI (with 2 decimal places) 
* -Display user's US Department of Health & Human Services BMI rating
* -Pause to read output
* -End main
**********************************************************************/

/*************** Begin main Function Executables *****************/

int main()
{
    
/*************************Local Variables*****************************/
 float height_in_feet; //user's height in feet
 
 float height_in_inches; // user's height in inches
 
 float total_height_in_inches; //The user's total height stored in float
 
 float weight_in_pounds; //The user's weight stored in float
 
 float BMI; //The user's calculated BMI
  
 char endProgram; //Pause screen
 
/**********************************************************************/

    //Prompt the user to input their weight
    cout << "Please enter your weight in pounds."; 
    
              //input weight held in float "weight_in_pounds"
              cin >> weight_in_pounds;
              
    //Prompt the user to input their height in feet
    cout << "Please enter your height. First enter the value for FEET \n(example if you're 5 foot 7 please enter 5): ";
    
              //input height in feet
              cin >> height_in_feet;

    //Prompt the user to input their height in inches
    cout << "Please enter your remaining height in INCHES \n(example if you're 5 foot 7 please enter 7): ";
                  
              //input height in inches
              cin >> height_in_inches;
              
    //Find total height in inches
    total_height_in_inches = (height_in_feet * 12) + height_in_inches;
              
    //Calculate BMI using the supplied equation
    BMI = weight_in_pounds / pow(total_height_in_inches,2)*703;
    
    //Display BMI to user
    cout << "Your BMI is " << fixed << showpoint << setprecision (2) << BMI << endl;
    
    //Display BMI scale based on US Department of Health & Human Services BMI rating
    
            // If BMI < 18.5 user is underweight
            if(BMI <= 18.5)
            {
                     cout << "You are underweight." << endl;    
            }
            
            // If BMI is 18.5-24.9 user is normal weight
            else if(BMI == 18.5 || BMI <= 24.9) 
            {
                     cout << "You are a normal weight."<< endl; 
            }
            
            // If BMI is 25.0-29.9 user is overweight
            else if(BMI ==25.0 || BMI <=29.9) 
            {
                     cout << "You are overweight."<< endl;
            }
            
            // If BMI is 30 or above user is obese
            else if(BMI >= 30) 
            {
                     cout << "You are obese."<< endl; 
            }
            
    //Display US Department of Health & Human Services BMI rating
    cout << endl;
    cout << "BMI          Weight Status" <<endl;
    cout << "---          -------------" <<endl;
    cout << "Below  18.5    Underweight" <<endl;
    cout << "18.5 - 24.9    Normal" <<endl;
    cout << "25.0 - 29.9    Overweight" <<endl;
    cout << "30  &  Above   Obese" <<endl;
    
    //Pause to read output
    cout << "Press Any Key to Terminate Program ---> ";
    cin >> endProgram;
    //Indicate to OS successful termination of program
    return 0;
    
} //end main
