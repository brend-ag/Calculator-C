//include <stdio.h>

int add(int n1, int n2){
  int sum;
  sum = n1 + n2;
  printf("%d\n",sum);
  return 0;
}

int subtract(int n1, int n2){
  int diff; //difference
  diff = n1 - n2;
  printf("%d\n",diff);
  return 0;
}

int multiply(int n1, int n2){
  int prod; //product
  prod = n1 * n2;
  printf("%d\n",prod);
  return 0;
}

int mod(int n1, int n2){
  int rem; //remainder
  rem = n1 % n2;
  printf("%d\n",rem);
  return 0;
}

int div(int n1, int n2){
  int quot; //quotient
  quot = n1 / n2;
  printf("%d\n",quot);
  return 0;
}

int main() {
  int num1;
  int num2;
  char op; //operation
  int add(int n1, int n2);
  int subtract(int n1, int n2);
  int multiply(int n1, int n2);
  int mod(int n1, int n2);
  int div(int n1, int n2);

  printf("Enter two integers. Press enter after each integer.\n");
  scanf("%d", &num1);//%d for format spec for signed int(-int, 0 +int)
  scanf("%d", &num2);
  printf("Enter an operation(+,-,*,/, or %%). Then press enter.\n");
  scanf(" %c", &op);
     // Note: Leading space in
     // format string is necessary!
  
  if(op=='+'||op=='-'||op=='*'||op=='/'||op=='%'){
     
     if(op=='+'){
       add(num1,num2);  
     }
     if(op=='-'){
       subtract(num1,num2);  
     }
     if(op=='*'){
       multiply(num1,num2);  
     }
     if(op=='%'){
       mod(num1,num2);  
     }
     if(op=='/'){
       div(num1,num2);  
     }

  }
  else{
     return 0; 
  }

  return 0;
}

