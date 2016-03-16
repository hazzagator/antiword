/*
 * dos.c
 * Copyright (C) 2004 A.J. van Os; Released under GNU GPL
 *
 * Description:
 * DOS only functions
 */

#if defined(__DJGPP__)
#define _NAIVE_DOS_REGS 1
#endif /* __DJGPP__ */
#include <dos.h>
#include <string.h>
#include "antiword.h"


/*
 * iGetVersion - get the version of DOS
 *
 * Return the DOS version * 100 or -1 incase of error
 */
static int
iGetVersion(void)
{
	return 100;
} /* end of iGetVersion */

/*
 * iGetCodepage - get the DOS codepage
 *
 * Returns the number of the active codepage (cp437 is DOS ASCII)
 */
int
iGetCodepage(void)
{
	return 1252;
} /* end of iGetCodepage */
