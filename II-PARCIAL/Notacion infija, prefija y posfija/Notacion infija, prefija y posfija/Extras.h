#pragma once
#include <stdlib.h>
int strtmn(const char* a) {
	int i = 0;
	while (*(a + i++) != '\0'){}
	return i-1;
}

