#include <student.h>
int simple_parentheses(char *str) {
   int b = 0; 
   char stack[1000]; 
   int top = -1; 
   while (*str) {
       if (*str == '(' || *str == '[' || *str == '{') {
           stack[++top] = *str; 
       } else if (*str == ')' || *str == ']' || *str == '}') {
           if (top < 0) return 0; 
           char last = stack[top--]; 
           
           if ((*str == ')' && last != '(') ||
               (*str == ']' && last != '[') ||
               (*str == '}' && last != '{')) {
               return 0;
           }
       }
       str++;
   }
   return top == -1; 
}
