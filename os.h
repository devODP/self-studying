/*
 * os.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Owen
 */

#ifndef OS_H_
#define OS_H_

struct thread_table{
	void (*address) (void);
	int priority;
	int ready;
	int thread_id;
}threadTable[2];


int iHighPriorityTask;
int iHighPriorityTaskIndex;
int numOfThreads;


void startAllocations();
void Resource_Handler();
void registerThread(void *threadAddress, int priority, int id);
void awakened(int thread_id);
void pause();

void Thread1();
void Thread2();

#endif /* OS_H_ */
