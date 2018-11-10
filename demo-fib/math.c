#include <emscripten/emscripten.h>

int EMSCRIPTEN_KEEPALIVE square(int x)
{
  return x * x;
}