#ifndef UNICODE_H
#define UNICODE_H

#include <3ds.h>

ssize_t strulen(u16*, ssize_t);
void struacat(u16 *input, const char *addition);
void printu(u16 *input);
u16 *strucat(u16 *destination, const u16 *source);

#endif