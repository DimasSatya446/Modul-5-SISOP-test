#include "std_lib.h"

int div(int a, int b)
{
  //TODO: Implementasi pembagian
  //NOTE: HARUS BISA ANGKA NEGATIF
}

int mod(int a, int b)
{
  //TODO: Implementasi modulus
}

bool strcmp(char *str1, char *str2) {
  int i = 0;
  while (str1[i] != '\0' && str2[i] != '\0') {
    if (str1[i] != str2[i]) {
      return false;
    }
    i++;
  }
  return str1[i] == str2[i];
}


void strcpy(char *dst, char *src) {
  int i = 0;
  while (src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
}

void clear(byte *buf, unsigned int size)
{
  //TODO: Implementasi pembersihan buffer
}

void atoi(char *str, int *num)
{
  //TODO: Implementasi konversi string ke integer
  //NOTE: HARUS BISA ANGKA NEGATIF
}

void itoa(int num, char *str)
{
  //TODO: Implementasi konversi integer ke string
  //NOTE: HARUS BISA ANGKA NEGATIF
}