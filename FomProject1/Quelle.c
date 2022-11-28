// 22.11.2022
#include <stdio.h>
#include "H1.h"

void main()
{
	char c = 'a';

	switch (c) {
	case 'a': 
		c = 'Z';
		break;
	case 'b': 
		c = 'y';
		break;
	case 'c': 
		c = 'x';
		break;
	}
}