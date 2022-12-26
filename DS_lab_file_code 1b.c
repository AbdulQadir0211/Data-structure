#include <stdio.h>

int main() {

  int n;

  double arr[100];

  printf("Enter the number of elements (1 to 100): ");

  scanf("%d", &n);

  printf("Enter the numbers:");

  for (int i = 0; i < n; ++i) {

    scanf("%d", &arr[i]);

  }

  for (int i = 1; i < n; ++i) {

    if (arr[0] < arr[i]) {

      arr[0] = arr[i];

    }

  }



  printf("Largest element = %d", arr[0]);



  printf("\nThis code is written by ABDUL QADIR\n");

}
