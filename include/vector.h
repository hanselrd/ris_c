#ifndef RIS_VECTOR_H
#define RIS_VECTOR_H

#include <stdbool.h>

typedef struct _ris_vector ris_vector;

ris_vector* ris_vector_create();

void ris_vector_destroy(ris_vector* rv);


#endif
