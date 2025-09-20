#include <stdio.h>
#include <windows.h>

int main(void) {
	char lyrics[][500] = {
		"And there was something about you that now I can't remember",
		"It's the same damn thing that made my heart surrender",
		"And I miss you on a train, I miss you in the morning",
		"I never know what to think about",
		"I think about you",
		"About you"
	};
	int i, j;
	for (i = 0; i < 6; i++) {
		printf("%s\n", lyrics[i]);
		if (i != 3 && i != 4) {
			Sleep(5000);
		}
		else if ( i == 3 ) {
			Sleep(4100);
		}
		else if ( i == 4 ) {
			Sleep(5600);
		}
	};
	return 0;
}