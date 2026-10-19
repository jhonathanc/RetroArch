#ifndef LIBRETRO_COMPAT_PS3_H
#define LIBRETRO_COMPAT_PS3_H

#if defined(__PS3__) && !defined(__PSL1GHT__)
#include <stddef.h>
#include <stdlib.h>
#include <retro_inline.h>

/* CellOS has no process environment. */
static INLINE char *getenv(const char *name)
{
   (void)name;
   return NULL;
}
#endif

#endif
