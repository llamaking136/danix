// common.h -- Defines typedefs and some global functions.
//             From JamesM's kernel development tutorials.

#ifndef COMMON_H
#define COMMON_H

#include "string.h"

// Some nice typedefs, to standardise sizes across platforms.
// These typedefs are written for 32-bit X86.
typedef unsigned int   u32int;
typedef          int   s32int;
typedef unsigned short u16int;
typedef          short s16int;
typedef unsigned char  u8int;
typedef          char  s8int;

void memcpy(u8int *dest, const u8int *src, u32int len);
void memset(u8int *dest, u8int val, u32int len);
int strcmp(char *str1, char *str2);
char *strcpy(char *dest, const char *src);
// char *strcat(char *dest, const char *src);

#endif // COMMON_H
