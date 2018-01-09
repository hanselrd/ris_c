#ifndef RIS_VECTOR_H
#define RIS_VECTOR_H

#include <stdbool.h>
#include <stddef.h>

typedef struct _ris_vector ris_vector;

ris_vector* ris_vector_create();
size_t ris_vector_size(ris_vector* rv);
size_t ris_vector_capacity(ris_vector* rv);
void** ris_vector_data(ris_vector* rv);
void* ris_vector_push(ris_vector* rv, void* ptr);
void ris_vector_pop(ris_vector* rv);
void* ris_vector_back(ris_vector* rv);
void ris_vector_destroy(ris_vector* rv);


#endif
