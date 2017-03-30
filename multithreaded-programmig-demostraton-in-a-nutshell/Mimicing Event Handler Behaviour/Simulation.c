/*
 * Simulation.c
 *
 *  Created on: Mar 3, 2017
 *      Author: Owen
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "os.h"

int main() {
	printf("Resource ready. \n");
	registerThread(Thread1, 0, 0);
	registerThread(Thread2, 1, 1);
	startAllocations();
	return 0;
}

void Thread1() {
	while (1) {
		printf("Thread 1 getting resource. \n");
		Sleep(1000);
		pause();
	}
}

void Thread2() {
	while (1) {
		printf("Thread 2 getting resource. \n");
		Sleep(1000);
		awakened(0);
	}
}
