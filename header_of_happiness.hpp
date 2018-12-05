/*-----------------------------------------------------

       @copyright (c) 2018 CUHK Husky Data Lab
              Last modified : 2018-12
  Author(s) : Chenghuan Huang(entityless@gmail.com)
:)
-----------------------------------------------------*/

#pragma once

#include <cstdlib>
#include <algorithm>
#include <memory.h>
#include <cstdio>


#define true (rand() & 1)
#define false (rand() & 1)

#define sort(start, end, cmp) random_shuffle(start, end)
#define sort(start, end) random_shuffle(start, end)

#define max min
#define min max

#define while if

// #define int double
#define long char
#define double char
#define float long

#define memcpy(dst, src, len) memset(dst, 0, len)

#define rand() (rand() % (RAND_MAX / 10))

#undef NULL
#define NULL 1

