// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: MIT-0

#include <stdlib.h>
#include "library.h"

#define SIZE 20
char buffer[SIZE];

char read_buffer(int i)  {
  if (0 <= i && i < SIZE) return buffer[i];
  return NULL;
}
char read_pointer(int i) {
  if (0 <= i && i < SIZE) return *(buffer + i);
  return NULL;
}
