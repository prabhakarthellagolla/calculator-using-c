🔢 Mini Project: Console-Based Arithmetic Calculator in C
📌 Overview
This mini project is a simple C-based calculator that performs a set of arithmetic operations using modular functions and a structured switch statement. The user can choose how many operations to perform (up to 6 predefined actions) on two operands. It demonstrates clean function structuring, control flow, and user interaction—all essential building blocks for C programming.

💡 Features
- Addition, Subtraction, Multiplication, and Division
- Increment and Decrement operations
- Modular function design for readability and reusability
- Console-based I/O interaction
- Switch-case control based on user selection

🧠 Logic Flow
- Input Phase:
- User inputs number of operations (d) they want to perform.
- Two integer operands op1 and op2 are captured.
- Function Definitions:
- add(int a, int b) → Adds two numbers
- sub(int a, int b) → Subtracts second from first
- mul(int a, int b) → Multiplies two numbers
- div(int a, int b) → Divides a by b, prints quotient and remainder
- inc(int a) → Increments a and prints result
- dec(int a) → Decrements a and prints result
- Control Phase:
- A switch(d) statement calls the appropriate functions based on user input.

🔍 Code Summary
int main() {
    int op1, op2, d;
    printf("Enter the number of operations needed: ");
    scanf("%d", &d);

    printf("Enter the first operand: ");
    scanf("%d", &op1);

    printf("Enter the second operand: ");
    scanf("%d", &op2);

    switch(d) {
        case 1: add(op1, op2); break;
        case 2: add(op1, op2); sub(op1, op2); break;
        case 3: add(op1, op2); sub(op1, op2); mul(op1, op2); break;
        case 4: add(op1, op2); sub(op1, op2); mul(op1, op2); div(op1, op2); break;
        case 5: add(op1, op2); sub(op1, op2); mul(op1, op2); div(op1, op2); inc(op1); break;
        case 6: add(op1, op2); sub(op1, op2); mul(op1, op2); div(op1, op2); inc(op1); dec(op1); break;
        default: printf("INVALID CHOICE");
    }
    return 0;
}



🚀 How to Run
- Compile the program using GCC:
gcc -o calculator calculator.c
- Run it:
./calculator



