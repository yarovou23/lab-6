#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
task_one();
task_two();
homework();
int main(){
	task_one();
	task_two();
	homework();
}
int task_one() {
	puts("TASK ONE----------------------------------------------------------------------------------------------------------------");
	int years;
	puts("Enter the year:");
	scanf_s("%d", &years);
	if (years % 4 == 0) {
		printf("The year %d is a leap year \n", years);
	}
	else {
		printf("The year %d is not a leap year \n", years);
	}
	return 0;
}
int task_two(){
	puts("TASK TWO----------------------------------------------------------------------------------------------------------------");
	double x;
	double f;
	puts("Enter x:");
	scanf_s("%lf", &x);
	f = x <= 7 ? (3 * x) - 9 : (1 / (x * x)) - 4;
	printf("F = %lf\n", f);
	return 0;
}
int homework() {
  puts("HOMEWORK----------------------------------------------------------------------------------------------------------------");
  int h;          
  int m;          
  int total_m;    
  int ans_m;      
  int result;     

  puts("Enter hours (0-12):");
  scanf_s("%d", &h);
  puts("Enter minutes:");
  scanf_s("%d", &m);

  if (h == 12) {
        h = 0;
  }
  total_m = h * 60 + m;
  ans_m = (total_m * 12) / 11;
  if (ans_m < total_m) {
        ans_m = ans_m + 720; // 720 минут - это 12 часов
  }
  result = ans_m - total_m;
  printf("Hands will meet in %d minutes\n", result);
  return 0;
  }
}
