#include <stdio.h>
#include "../include/ppdt.h"

int main() {
	printf("%d-%02d-%02d %02d:%02d:%02d\n", PPDT_YEAR, PPDT_MONTH, PPDT_DAY, PPDT_HOUR, PPDT_MINUTE, PPDT_SECOND);
}
