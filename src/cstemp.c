#include "cstemp.h"
#include "cslist.h"
#include "csutil.h"

struct t_temp_ {
	int num;
};

struct t_templist_ {
	csL_list head;
};

csT_temp csT_newtemp(void)
{
	static int count;
	csT_temp foo = csU_malloc(sizeof(*foo));
}