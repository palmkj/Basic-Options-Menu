
// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;
int main() {


char selection {0};
vector<double> numList (0);
double numAdd {};


do
    {
    cout << "--------------------" << endl;        
    cout << "\nP - Print numbers." << endl;
    cout << "A - Add a number." << endl;
    cout << "M - Display mean of numbers" << endl;
    cout << "S - Display smallest number." << endl;
    cout << "L - Display largest number." << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice." << endl;
    cin >> selection;



    if (selection == 'p' || selection == 'P') 
        { 
            if (numList.size() == 0)
                cout << "\nNo data." << endl;

            else {
            cout << "List contains: ";
         
            for (auto &i : numList)
            i = i;
            for (auto i: numList)
            cout << i << " "; 
            cout << endl;
                }
        }
    else
    
    if (selection == 'A' || selection == 'a') 
        {
        cout << "Please enter a number" << endl;

        cin >> numAdd;
        numList.push_back(numAdd);


        cout << "\nNew List contains: ";
         
            for (auto num : numList)
            num = num;
            for (auto num: numList)
            cout << num << " "; 
            cout << endl;
        }
    else 
      
    
    if (selection == 'M' || selection == 'm')
        {
            if (numList.size() == 0)
                cout << "\nNo data." << endl;
            else 
                {
            double sum = accumulate(numList.begin(), numList.end(), 0);
            double avg = sum / numList.size();

            cout << "\nList average: ";
            cout << avg << endl;
                }
        }
    else if ( selection == 'S' || selection == 's')
        {
            if (numList.size() == 0)
                cout << "\nNo data." << endl;
            else 
                {   
        cout << "Smallest number is: " << *min_element(numList.begin(), numList.end()) << endl;
                }
        }
    else if ( selection == 'L' || selection == 'l' )
        {
             if (numList.size() == 0)
                cout << "\nNo data." << endl;
            else 
                {  
            cout << "largest number: " << *max_element(numList.begin(), numList.end()) << endl;
                }
        }
    else if ( selection == 'Q' || selection == 'q')

        { 
        cout << "\nGoodbye" << endl;
        }

        else cout << "\nUnknown selection, please try again" << endl;
    }  
while ( selection != 'Q' && selection != 'q'); 





 
return 0;
}
