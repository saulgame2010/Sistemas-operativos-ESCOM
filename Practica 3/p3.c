#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main()
{
	int i, j, k, l, m, n;
	for(i = 0; i < 5; i++) {
		if(fork() == 0) {
			if(i == 0){
				for(j = 0; j < 1; j++) {
					if (fork() == 0)	{
						break;
					}
				}
			}
			if(i == 1) {
				for(k = 0; k < 1; k++) {
					if (fork() == 0)	{
						break;
					}
				}
			}
			if(i == 2) {
				for(l = 0; l < 1; l++) {
					if (fork() == 0)	{
						break;
					}
				}
			}
			if(i == 3) {
				for(m = 0; m < 1; m++) {
					if (fork() == 0)	{
						break;
					}
				}
			}
			if(i == 4) {
				for(n = 0; n < 1; n++) {
					if (fork() == 0)	{
						break;
					}
				}
			}
			break;
		}
	}
}