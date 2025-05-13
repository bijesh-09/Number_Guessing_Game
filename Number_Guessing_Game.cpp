#include<iostream>
#include<cstdlib> // for rand() and srand() functions
#include<ctime> // for time() function
// The above header files are included to use the functions and classes defined in them
using namespace std;
int main()
{
    
    cout << "----------------------------------------" << endl;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;
    
    // Seeding the random number generator
    //time() returns the current time in seconds since the epoch (January 1, 1970) when nullptr is passed to it
    // This is used to ensure that the random number generated is different each time the program runs
    srand(time(nullptr)); 
    
    // Generating a random number between 1 and 100
    // rand() generates a random number between 0 and RAND_MAX
    // The modulo operator (%) is used to limit the range of the random number
    //rand() % 100 generates a random number between 0 and 99
    // Adding 1 to shift the range to 1-100
    // This is done to ensure that the user has a valid range to guess from
    int randomNumber = rand() % 100 + 1;
    
    int userGuess; // Variable to store the user's guess
    int attempts = 0; // Variable to count the number of attempts made by the user
    
    do
    {
        // Prompting the user to enter their guess
        cout << "----------------------------------------" << endl;
        cout << "Attempt-" << attempts+1 << ": " << "Enter your guess number: " << endl;
        
        // Taking input from the user
        cin >> userGuess; // Taking input from the user
        
        attempts++; // Incrementing the attempts counter
        
        // Calculating the absolute difference between the user's guess and the random number
        // abs() function is used to get the absolute value of the difference
        // This is done to provide feedback to the user on how close their guess is
        int differenceNumber = abs(userGuess - randomNumber);
        
        // if the user's guess is greater than the random number
        if (userGuess > randomNumber) 
        {
            if (differenceNumber <= 5)
            {
                cout << "Very close! Try again." << "Maybe 5 less or 5 more than "<< userGuess << endl;
            }
            else if (differenceNumber <= 10)
            {
                cout << "Close! Try again." << "Maybe 10 less or 10 more than "<< userGuess << endl; 
                
            }
            else{
                cout << "Too high! Try again." << endl;
            }
            
            
        }
        // if the user's guess is less than the random number
        else if (userGuess < randomNumber)
        {
            if (differenceNumber <= 5)
            {
                cout << "Very close! Try again." << "Maybe 5 less or 5 more than "<< userGuess << endl;
            }
            else if (differenceNumber <= 10)
            {
                cout << "Close! Try again." << "Maybe 10 less or 10 more than "<< userGuess << endl; 
                
            }
            else{
                cout << "Too high! Try again." << endl;
            }
        }
        
        // If the user's guess is equal to the random number
        // This means the user has guessed the correct number
        else
        {
            cout << "Congratulations! You guessed the right number in " << attempts << " attempts!" << endl;
            cout << "----------------------------------------" << endl;
        }
        
    } while (userGuess != randomNumber); 
    // Loop continues until the user guesses the correct number
    // The loop will terminate when the user guesses the correct number
    
    return 0;
}