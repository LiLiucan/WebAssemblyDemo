#include <emscripten/emscripten.h>

int EMSCRIPTEN_KEEPALIVE fib(int n)
{
  if (n <= 2)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}