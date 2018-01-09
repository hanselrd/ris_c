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

size_t ris_vector_size(ris_vector* rv) {
  if (rv) {
    return rv->sz;
  }
}

size_t ris_vector_capacity(ris_vector* rv) {
  if (rv) {
    return rv->cap;
  }
}

void** ris_vector_data(ris_vector* rv) {
  if (rv) {
    return rv->data;
  }
}

void* ris_vector_push(ris_vector* rv, void* ptr) {
  if (rv) {
    if (rv->data) {
      if (rv->sz == rv->cap) {
        void* temp = realloc(rv->data, sizeof(void*) * (rv->cap *= 2));
        if (!temp) return NULL;
        rv->data = temp;
      }
      rv->data[rv->sz++] = ptr;
      return ptr;
    }
  }
  return NULL;
}

void ris_vector_pop(ris_vector* rv) {

}

void* ris_vector_back(ris_vector* rv) {

}

void ris_vector_destroy(ris_vector* rv) {
  if (rv) {
    if (rv->data) free(rv->data);
    free(rv);
  }
}
