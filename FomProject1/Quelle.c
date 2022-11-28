// 22.11.2022
#include <stdio.h>
#include "H1.h"

void main()
{
	char c = 'a';

	switch (c) {
	case 'a': c = 'Z';
	case 'b': c = 'y';
	case 'c': c = 'x';
	}
}