#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a[5];
  printf("enter the search number:\n" );
  float b;
  scanf("%f", &(b) );
  for (int i = 0; i < 5; i++) {
    printf("enter the numba man\n" );
    scanf("%f", &a[i] );
  }
  for (int j = 0; j < 5; j++) {
    if (a[j]== b) {
      printf("The num is at %dth index.\n", j);
    }
  }
  return 0;
}
