#include "vector.h"

#include <stdlib.h>

struct _ris_vector {
  void** data;
  size_t sz; // size
  size_t cap; // capacity
};

ris_vector* ris_vector_create() {
  ris_vector* rv = malloc(sizeof(ris_vector));
  if (rv) {
    rv->sz = 0;
    rv->cap = 5;
    rv->data = malloc(sizeof(void*) * rv->cap);
    if (!rv->data) {
      free(rv);
      return NULL;
    }
    return rv;
  }
  return NULL;
}

void ris_vector_destroy(ris_vector* rv) {
  if (rv) {
    if (rv->data)
      free(rv->data);
    free(rv);
  }
}
