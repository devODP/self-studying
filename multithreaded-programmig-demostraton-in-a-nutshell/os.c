/*
 * os.c
 *
 *  Created on: Mar 2, 2017
 *      Author: Owen
 */
#include "os.h"

numOfThreads = 0;

void Resource_Handler(){
	int index;

	iHighPriorityTask =10;

	for(index = 0; index < numOfThreads; index++){
		if((threadTable[index].priority <= iHighPriorityTask) && (threadTable[index].ready == 1)){
			iHighPriorityTask = threadTable[index].priority;
			iHighPriorityTaskIndex = index;
		}
	}

	(*threadTable[iHighPriorityTaskIndex].address)();
}

void registerThread(void *threadAddress, int priority, int id){
	threadTable[numOfThreads].address = threadAddress;
	threadTable[numOfThreads].priority = priority;
	threadTable[numOfThreads].ready = 1;
	threadTable[numOfThreads].thread_id = id;
	numOfThreads++;
}

void awakened(int thread_id){
	int index = 0;
	for(index = 0; index < numOfThreads; index++){
		if(thread_id == threadTable[index].thread_id){
			threadTable[index].ready = 1;
			break;
		}
	}

	Resource_Handler();
}

void pause(){
	threadTable[iHighPriorityTaskIndex].ready = 0;
	Resource_Handler();
}

void startAllocations(){
	Resource_Handler();
}
