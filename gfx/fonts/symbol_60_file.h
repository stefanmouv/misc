#ifndef SYMBOL_60_FILE_H
#define SYMBOL_60_FILE_H

/*Use UTF-8 encoding in the IDE*/

#include "misc_conf.h"

#if  USE_FONT_SYMBOL_60_FILE != 0

#include <stdint.h>
#include "misc/gfx/font.h"

font_t * symbol_60_file_get_dsc(void);

#endif   /*USE_FONT_SYMBOL_60_FILE != 0*/

#endif   /*SYMBOL_60_FILE_H*/