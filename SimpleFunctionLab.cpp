/**********************************************************************
* Program Name: Lab 8
* Author: Steven Leabo
* Program description: This program will use functions (3) to display my
* initials in block letters. I have included all function documentation.
**********************************************************************/

/************************** Compiler Directives **********************/

#include <iostream>

using namespace std;

//functions used. . .

void printL(); // Draws L

void printM(); // Draws M

void printS(); // Draws S

/*************** Begin main Function Executables *****************/

int main()
{

//Prints S
printS(); 

//Prints M
printM(); 

//Prints L 
printL(); 
              
    //pause screen to view output
    system ("pause");  
        
    //Here is where you indicate to the OS a successful termination of your program
    return 0;
          
} //end main


/*******************************Functions********************************/
        
            //Prints letter L
            void printL()
            {
            cout << " ** " << endl;
            cout << " **   " << endl;
            cout << " ** " << endl;
            cout << " **     " << endl;
            cout << " ********" << endl;
            cout << endl;
            } //end printL
            
            //Prints letter M
            void printM()
            {
            cout << " **    ** " << endl;
            cout << " ***  *** " << endl;
            cout << " ** ** ** " << endl;
            cout << " **    ** " << endl;
            cout << " **    **" << endl;
            cout << endl;
            } //end printM
            
            
            //Prints letter S
            void printS()
            {
            cout << " ******** " << endl;
            cout << " **   " << endl;
            cout << " ******** " << endl;
            cout << "       ** " << endl;
            cout << " ********" << endl;
            cout << endl;
            } //end printS
