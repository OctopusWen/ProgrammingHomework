#include <stdio.h>

void reverse(int n);

int main() {
  int n;

  scanf("%d", &n);
  reverse(n);
  printf("\n");
  return 0;
}

/* 请在这里填写答案 */
void reverse(int n) {
  putchar(n % 10 + 48);
  if (n >= 10)
    reverse(n / 10);
}