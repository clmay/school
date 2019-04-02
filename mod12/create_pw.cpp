/*
 * =====================================================================================
 *
 *       Filename:  create_pw.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  g++ create_pw.cpp -o create_pw.out [-lm]
 *          Usage:  ./create_pw.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =======================================  ==============================================
 */
#include <iostream>
#include <string>
using namespace std;

// Constants & Globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    string full_name;
    string password;

    cout << "Create an accout" << endl << endl;
    cout << "Enter full name: ";
    // To capture strings with or without spaces, use `getline(cin, <string variable>)`
    getline(cin, full_name);
    cout << "Hi " << full_name << ", welcome to WSU" << endl;

    bool valid_password = false;
    while (!valid_password)
    {
        // At least 8 characters
        // Must contain a number character
        // Must contain a special character
        cout << endl << "Enter your password: ";
        getline(cin, password);
        auto index = password.find_first_of("0123456789");
        bool special_char = false;
        for (char c : password)
        {
            if (ispunct(c)) // check for non-alphanumeric chars
            {
                special_char = true;
                break;
            }
        }

        if (password.length() < 8)
        {
            cout << "Password must be at least 8 characters" << endl;
            cout << "Please enter a longer password." << endl;
        } else if (index == -1) // -1 means no matches found
        {
            cout << "Password must contain at least one number" << endl;
            cout << "Please enter a password with at least one number." << endl;
        } else if (!special_char)
        {
            cout << "Password must include a special character" << endl;
            cout << "Please enter a password with at least one special character." << endl;
        } else
        {
            valid_password = true;
        }
        
        
        
    }
    cout << "Thank you!" << endl;
    
    return 0;
}
// Function Definitions
