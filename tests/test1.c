#include "vector.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
  ris_vector* rv = ris_vector_create();
  printf("rv: %p\n", rv);
  ris_vector_destroy(rv);
  return 0;
}
