#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.1415926535

int nround(float n) {
	return (int) (n < 0 ? n - 0.5 : n + 0.5);	// if n < 0 then do n - 0.5 else do n + 0.5
}

void plot(float r, float theta, char graph[10][10]) {
	float x = r * cos(theta * (PI / 180));
	float y = r * sin(theta * (PI / 180));
	printf("(x, y) -> (%.2f, %.2f) -> (%d, %d) -> (%d, %d)\n", x, y, nround(x), nround(y), abs(nround(x)), abs(nround(y)));
	graph[nround(y)][nround(x)] = 'x';
}

int main() 
{
	char graph[10][10];
	float r[2] = {2.0, 5.0};
	float theta[7] = {0, 15, 30, 45, 60, 75, 90};
	for(int i = 0; i < 7; i++) {
		plot(r[1], theta[i], graph);
	}	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			if(graph[i][j] == 'x'){
				printf(".");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
