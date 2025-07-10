#include <stdio.h>
#include "../include/ppdt.h"

int main() {
	printf("%d-%02d-%02d %02d:%02d:%02d\n", PPDT_YEAR, PPDT_MONTH, PPDT_DAY, PPDT_HOUR, PPDT_MINUTE, PPDT_SECOND);
	printf("Leap year? %s\n", PPDT_LEAP_YEAR(PPDT_YEAR) ? "true" : "false");
	printf("Month name: %s\n", PPDT_MONTH_STR(PPDT_MONTH));
	printf("Week #%d\n", PPDT_WEEK);
	printf("Day of year: %d\n", PPDT_DAY_OF_YEAR);
	printf("Day of week: %d (%s)\n", PPDT_DAY_OF_WEEK, PPDT_DAY_STR(PPDT_DAY_OF_WEEK));
}
