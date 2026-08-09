//INFIX TO POSTFIX CONVERSION
// 1. If the input character is operand, put it in the postfix expression
// 2. If the input character is operator, then:
//    2.1. If the stack is empty, place the operator on the stack.  
//    2.2. If (operator == '('), place it on the stack.
//    2.3. If the priority of the input operator is greater than the priority of the operator on stack[top], place it on the stack.
//    2.4. If the priority of the input operator is less than or equal to the priority of the operator on stack[top], pop the operator from the stack and place it in the postfix expression, 
//         repeat until you find less priority operator on stack[top] or an open brace '( ' or the stack is empty.
//    2.5. If the input character is a closing brace ')', pop all operators until you find an open brace '('. And place them in the postfix expression, and finally pop() the open brace '(' as well.
// 3. If the expression is complete then pop() all the operators from the stack[top] and place them in the postfix expression. (operator = NULL)

#include <iostream>
using namespace std;

