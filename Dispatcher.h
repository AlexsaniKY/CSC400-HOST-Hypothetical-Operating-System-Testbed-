#pragma once

#include "pcb.h"


class Dispatcher
{
private:
	PcbPtr input_queue;
	unsigned long systime;
public:
	Dispatcher();
	~Dispatcher();
	void addToInitQueue(PcbPtr process);
	void queueJobs();
	void initializeProcesses();
	void printInitQueue();
	bool hasJobs();
	void run();
};

