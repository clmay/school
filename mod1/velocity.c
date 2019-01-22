#include <stdio.h>

int main() {
	int dist;
	int time;
	float vel;

	// Take inputs
	printf("Distance (m):\n");
	scanf("%d", &dist);
	printf("Time (s):\n");
	scanf("%d", &time);

	// Compute the result
	vel = dist / time;
	vel = (dist / 1000) / (time / 3600);
	
	// Display the result
	printf("The velocity is: %f km/hr\n", vel);

	return 0;
}
