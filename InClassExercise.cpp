#include <iostream>
#include <string>

// =========================================================
// For Exercise 2,
// TODO: Define the OOPCourse::Math namespace structure and
//       the internal anonymous namespace here.

// Primary namespace
namespace OOPCourse{
    // Nasted namespace
    namespace Math{
        /**
         * @brief return the sum of the two integer
         * * @param a [in] the first integer
         * @param decry [in] the second integer
         * * @return sum [out] the sum of the first and second integer
         * @note Do not consider overflow
         */
        int add_and_log(int a, int b){
            // add the integer a and b
            int sum = a + b;
            // log the result
            log_calculation(sum);
            return sum;
        }
    }
}

// Anonymous namespace
namespace
{
    /**
     * @brief print the log of the calculation
     * * @param result [in] result that want to print
     */
    void log_calculation(int result) {
        std::cout << "LOG: Calculation performed, result is " << result << std::endl;
    }
}

// =========================================================


// Main program
int main()
{   
    // --- Exercise 1: String reversal and largest value ---
    std::cout << "--- Exercise 1: String Reversal ---\n";
    // TODO: std::string variables num_a, num_b
    std::string num_a, num_b;
    
    std::cout << "Enter the first 3-digit number: ";
    // TODO: Use std::cin to receive 3-digit number of num_a
     std::cout << "Enter the number A : ";
    std::cin >> num_a;
    
    
    std::cout << "Enter the second 3-digit number: ";
    // TODO: Use std::cin to receive 3-digit number of num_b
    std::cout << "Enter the number B : ";
    std::cin >> num_b;
    
    // TODO: Empty std::string for reversed_a, reversed_b
    std::string reversed_a, reversed_b;

    // 1. Reversal with a for-loop
    // TODO: Implement the standard indexed 'for' loops here to iterate
    //       backwards over num_a and num_b and populate reversed_a and reversed_b.
    
    // Reverse the number A
    for (auto it = num_a.rbegin(); it != num_a.rend(); ++it) {
        reversed_a.push_back(*it);
    }

    // Reverse the number B
    for (auto it = num_b.rbegin(); it != num_b.rend(); ++it) {
            reversed_b.push_back(*it);
    }

    // 2. Comparison and Output
    // TODO: Implement the 'if/else' statement here to compare the reversed strings
    //       and output the largest one.
    
    if(reversed_a > reversed_b) {
        // if reversed_a is larger
        std::cout << reversed_a << std::endl;
    }
    else {
        // if the reverse_b is larger
        std::cout << reversed_b << std::endl;
    }
    
    
    // --- Exercise 2: Namespaces ---
    std::cout << "--- Exercise 2: Namespaces ---\n";
    
    // TODO: Use the 'using' declaration here to bring ONLY the public
    //       'add_and_log' function into scope.
    using OOPCourse::Math::add_and_log;

    // TODO: Call 'add_and_log(15, 27)' and print the result.
    int result = add_and_log(15, 27);
    
    // print result
    std::cout << "The result is: " << result << std::endl;

    return 0;
}
