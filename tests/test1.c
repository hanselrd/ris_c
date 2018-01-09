#include "vector.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
  ris_vector* rv = ris_vector_create();
  for (int i = 0; i < 12; i++) {
    ris_vector_push(rv, (void*)i);
  }
  void** data = ris_vector_data(rv);
  size_t sz = ris_vector_size(rv);
  for (int i = 0; i < sz; i++) {
    printf("data[%d]: %p\n", i, data[i]);
  }
  printf("rv: %p | sz: %lu | cap: %lu | data: %p\n", rv, ris_vector_size(rv), ris_vector_capacity(rv), ris_vector_data(rv));
  ris_vector_destroy(rv);
  return 0;
}
