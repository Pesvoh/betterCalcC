#include <stdio.h>

// operator formulas
float add(float total, float num) { return total + num; }
float subrtact(float total, float num) { return total - num; }
float multiple(float total, float num) { return total * num; }
float divide(float total, float num) { return total / num; }

int main() {
while (1){ 
  float num;
  int count;
  printf("How many numbers do you want to enter?: ");
  scanf ("%d", &count);
  
  int operator;
  printf ("What operation do you want to enter [1]+ [2]- [3]* [4]/: ");
  scanf("%d", &operator);
  float total;
  printf("Enter your first number: ");
  scanf("%f", &total);

  for (int i = 1; i < count; i++){
  printf("Enter the number: ");
  scanf("%f", &num);
  if (operator == 1) {
      total = add(total, num);
      printf("Total: %.2f\n", total);
  }else if (operator == 2) {
      total = subrtact(total, num);
      printf("Total: %.2f\n", total);
  }else if (operator == 3) {
      total = multiple(total, num);
      printf("Total: %.2f\n", total);
  }else if (operator == 4){
      total = divide(total, num);
      printf("Total: %.2f\n", total);
  }else{
    printf("invalid\n");
    continue;
  }
  } 
 }
  
  return 0;
}
