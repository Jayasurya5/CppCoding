#pragma once
#include "Basics\Patterns.h"
#include "Basics\Functions.h"
#include "DS\Arrays.h"
#include "Sorting\Sorting.h"
#include "Basics\Pointers.h"
#include "Basics\Strings.h"
#include "Basics\BitManipulation.h"
#include "DS\Reccursion.h"
#include "DS\Vectors.h"
#include "DS\SingleLL.h"
#include "DS\Node.h"

class ProgramRunner
{
	public:
	ProgramRunner();
	~ProgramRunner();
	void run();
	void runPatterns();
	void runFunctions();
	void runArrays();
	void runSorting();
	void runPointers();
	void runStrings();
	void runBitManipulation();
	void runReccursion();
	void runVectors();
	void runSingleLL();

	Patterns* patterns;
	Functions* functions;
	Arrays* arrays;
	Sorting* sorting;
	Pointers* pointers;
	Strings* strings;
	BitManipulation* bitManipulation;
	Reccursion* reccursion;
	Vectors* vectors;
	SingleLL* singleLL;

};

