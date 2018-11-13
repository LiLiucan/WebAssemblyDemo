
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  struct timeval tv;
  gettimeofday(&tv, NULL);
  long startTime = tv.tv_sec * 1000 + tv.tv_usec / 1000;

  int fibRes = fib(40);

  gettimeofday(&tv, NULL);
  long endTime = tv.tv_sec * 1000 + tv.tv_usec / 1000;

  printf("native fib time: %ld", endTime - startTime);
}

int fib(int n)
{
  if (n <= 2)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}