// Includes standard input/output stream library
#include <iostream>
// Includes time library for getting time and localtime functions
#include <ctime>
// Includes math library for sqrt and pow functions
#include <cmath>
// Includes Windows library for console text attribute manipulation
#include <Windows.h>
using namespace std;

void hypotenuse() {
	// Declaring variables
	double a, b, c;
	
	// Welcome message
    cout << "Welcome to Hypotenuse Calculator!" << endl;
    
    // Get input for triangle sides
    cout << "Enter the length of the first side: "; cin >> a;
    cout << "Enter the length of the second side: "; cin >> b;
    
    // Calculate hypotenuse using Pythagorean theorem
    c = sqrt(pow(a, 2) + pow(b, 2));
    
    // Print result
    cout << "The length of the hypotenuse is: " << c << endl;
	
	// End function
    cout << "Press any key to continue...";
    cin.get();
    getchar();
}

int modulo(int a, int b) {
	// Declaring resources
  	int res;
  
  	cout << "Calculating the modulo of " << a << " and " << b << "." << endl;
  
  	res = a % b;
  
  	return res;
}

int add(int a, int b) {
	// Declaring resources
	int res;
  
  	cout << "Calculating the addition of " << a << " and " << b << "." << endl;
  
  	res = a + b;
  
  	return res;
}

int subtract(int a, int b) {
	// Declaring resources
	int res;
  
  	cout << "Calculating the substraction of " << a << " and " << b << "." << endl;
  
  	res = a - b;
  
  	return res;
}

int multiply(int a, int b) {
	int res;
  
  	cout << "Calculating the multiplication of " << a << " and " << b << "." << endl;
  
  	res = a * b;
  
  	return res;
}

int divide(int a, int b) {
	int res;
  
	cout << "Calculating the multiplication of " << a << " and " << b << "." << endl;
	if (b == 0) {
		cout << "Error: Cannot divide by 0." << endl;
		return 0;
    }
	res = a / b;
  	
	return res;
}

int power(int a) {
	int res;
	
	cout << "Calculating the power of " << a << endl;
	res = pow(a, 2);
	
	return res;
}

// Main function
int main() {
	// Get handle to console window
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Set console text color to blue
    SetConsoleTextAttribute(hConsole, 10);
    
    // Welcome message
    cout << "Hello!!!\nWelcome to my project!\n\nShort description:\nThis C++ code is a suite that let's you calculate anything!" << endl;
	cout << "Press any key to continue..." << endl;
    getchar();
    
    cout << "--------------------------------\n";
    
    // Options messages
    cout << "1. Hypotenuse Calculator" << endl;
    cout << "2. Modulo Calculator" << endl;
    cout << "3. Addition Calculator" << endl;
    cout << "4. Substraction Calculator" << endl;
    cout << "5. Multiplication Calculator" << endl;
    cout << "6. Division Calculator" << endl;
	cout << "7. Power Calculator" << endl;
    
    // Action choosen
    int choice;
    cout << "Please choose an action to perform: ";
    cin >> choice;
    
    getchar();
    cout << "--------------------------------\n";
    
    // Cases with actions
    switch(choice) {
        case 1: hypotenuse(); break;
        case 2: {
        	// Declarng variables
            int x, y, result;
            
            // Welcome message
            cout << "Welcome to Modulo Calculator!" << endl;
            
            // Reading inputs
            cout << "Enter first number: ";
            cin >> x;
            cout << "Enter second number: ";
            cin >> y;
            
			result = modulo(x, y);

            cout << "The modulo of the two numbers is: " << result << endl;
            
            // End program
            cout << "Press any key to continue." << endl;
  			cin.ignore();
        }
        break;
        case 3: {
        	// Declarng variables
            int x, y, result;
            
            // Welcome message
            cout << "Welcome to Addition Calculator!" << endl;
            
            // Reading inputs
            cout << "Enter first number: ";
            cin >> x;
            cout << "Enter second number: ";
            cin >> y;
            
			result = add(x, y);

            cout << "The addition of the two numbers is: " << result << endl;
            
            // End program
            cout << "Press any key to continue." << endl;
  			cin.ignore();
        }
        break;
        case 4: {
        	// Declarng variables
            int x, y, result;
            
            // Welcome message
            cout << "Welcome to Substraction Calculator!" << endl;
            
            // Reading inputs
            cout << "Enter first number: ";
            cin >> x;
            cout << "Enter second number: ";
            cin >> y;
            
			result = subtract(x, y);

            cout << "The substraction of the two numbers is: " << result << endl;
            
            // End program
            cout << "Press any key to continue." << endl;
  			cin.ignore();
        }
        break;
             case 5: {
        	// Declarng variables
            int x, y, result;
            
            // Welcome message
            cout << "Welcome to Multiplication Calculator!" << endl;
            
            // Reading inputs
            cout << "Enter first number: ";
            cin >> x;
            cout << "Enter second number: ";
            cin >> y;
            
			result = multiply(x, y);

            cout << "The multiplication of the two numbers is: " << result << endl;
            
            // End program
            cout << "Press any key to continue." << endl;
  			cin.ignore();
        }
        break;
        break;
             case 6: {
        	// Declarng variables
            int x, y, result;
            
            // Welcome message
            cout << "Welcome to Division Calculator!" << endl;
            
            // Reading inputs
            cout << "Enter first number: ";
            cin >> x;
            cout << "Enter second number: ";
            cin >> y;
            
			result = divide(x, y);

            cout << "The division of the two numbers is: " << result << endl;
            
            // End program
            cout << "Press any key to continue." << endl;
  			cin.ignore();
        }
        break;
        break;
             case 7: {
        	// Declarng variables
            int x, result;
            
            // Welcome message
            cout << "Welcome to Power Calculator!" << endl;
            
            // Reading inputs
            cout << "Enter your number: ";
            cin >> x;
            
			result = power(x);

            cout << "The power of your number is: " << result << endl;
            
            // End program
            cout << "Press any key to continue." << endl;
  			cin.ignore();
        }
        break;
        default: cout << "Invalid choice.";
    }

    cout << "--------------------------------\n";
    
    // Get current time
    time_t current_time = time(nullptr);
    // Convert current time to local time
    struct tm* local_time = localtime(&current_time);
    int year = local_time->tm_year + 1900;
    
    // End program
    cout << "Thank you for using my program!\n\nCode by: D4rK;\nVersion: 1.0;\nProgramming language: C++;\n\nCopyright " << year << " by D4rK, made with <3 in Romania!";
    return 0;
}