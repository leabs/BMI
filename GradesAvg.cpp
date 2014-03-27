/**********************************************************************
* Program Name: Lab 6
* Author: Steven Leabo
* Program description: This program will find the average of a user defined
* amount of grades. It will first ask how many grades the user would like to enter,
* computer a running total of grades entered, calculate the average, TEST to make
* sure the number of grades is not set to 0, and then display the average to the user.
**********************************************************************/

/************************** Compiler Directives **********************/

#include <iostream>
#include <string> // For string variables 


using namespace std;

///////////////////////////Initial Algorithm/////////////////////////////
/*
        -Prompt the user for the number of grades they wish to enter
        -Compute a running total of the grades entered
        -Calculate the average of the grades entered
        -Test to make sure the average is not computed if the number of grades is zero
        -Display a message stating the average of the grades entered

/////////////////////////////////////////////////////////////////////////

///////////////////////////Refined Algorithm////////////////////////////
    
    Start Main
    
        DO WHILE loop to test number of grades is not 0
        {
        
            Prompt user for number of grades (INT n)
               
               if (n ==0)
               DISPLAY Invalid entry. Please try again
                        
        } while (n == 0);      
    
                While loop runs while counter < number of grades
                }
                      
                Prompt user to enter a grade (INT x)
                
                Calculate running total (r=r+x)
    
                Counter = counter + 1;
                                 
                End while counter 
                } 
        
        Calculate average a = (r / n)
        
        Display average to user
            
        Pause screen to view output
              
        Indicate to the OS a successful termination of your program
         
    End main   
        
///////////////////////////////////////////////////////////////////////

/*************** Begin main Function Executables *****************/

int main()
{
    
/*************************Local Variables*****************************/

    int n; //Number of Grades
    int x; //Grades
    int r = 0; //Running total, starts at zero to begin with
    int a; //Grade average
    int counter = 0;  //initialize counter to zero to begin with

/**********************************************************************/

    //DO WHILE loop to test number of grades is not 0
    do
    {
         
    //Prompt user for number of grades
    cout << "Please enter the number of grades you would like to average (must be > 0): " << endl;
        
    //Input number of grades in INT n
    cin >> n;
                    
        if (n ==0)
                           
        cout << "\nInvalid entry. Please try again.\n";
                    
    } while (n == 0);      

            //While loop runs while counter < number of grades
            while (counter < n)
            {
                  
            //Prompt user to enter a grade
            cout << "Please enter a grade: " << endl;
            
            //Store grade in INT x
            cin >> x;
            
            //Calculate running total
            r=r+x;
            
            //Counter = counter + 1;
            counter++;    
                          
            //End while counter 
            } 
    
    //Calculate average
    a = (r / n);
    
    //Display average to user
    cout << "The average of the " << n << " number(s) you've entered is " << a << ". " << endl; 
    
    //pause screen to view output
    system ("pause");  
        
    //Here is where you indicate to the OS a successful termination of your program
    return 0;
       
//end main         
} 
