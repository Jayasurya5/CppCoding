#include "ProgramRunner.h"
ProgramRunner::ProgramRunner()
{
	patterns = new Patterns();
	functions = new Functions();
	arrays = new Arrays();
	sorting = new Sorting();
	pointers = new Pointers();
	strings = new Strings();
	singleLL = new SingleLL();

}

ProgramRunner::~ProgramRunner()
{
	delete patterns;
}

void ProgramRunner::run()
{	
	//runPatterns();
	//runFunctions();
	//runArrays();
	//runSorting();
	//runPointers();
	//runStrings();
	//runBitManipulation();
	//runReccursion();
	//runVectors();
	runSingleLL();

}

void ProgramRunner::runPatterns()
{
	int programNumber = 17;
	switch (programNumber) {
	case 1:
		patterns->rectanglePattern();
		break;
	case 2:
		patterns->hollowRectangle();
		break;
	case 3:
		patterns->invertedHalfPyramid();
		break;
	case 4:
		patterns->halfPyramid180Rot();
		break;
	case 5:
		patterns->halfPyramidUsingNum();
		break;
	case 6:
		patterns->floydTriangle();
		break;
	case 7:
		patterns->butterflyPattern();
		break;
	case 8:
		patterns->invertedNumberPattern();
		break;
	case 9:
		patterns->ZeroOnePattern();
		break;
	case 10:
		patterns->rhombusPattern();
		break;
	case 11:
		patterns->numberTriangle();
		break;
	case 12:
		patterns->palindromicPattern();
		break;
	case 13:
		patterns->starPattern();
		break;
	case 14:
		patterns->zigzagPattern();
		break;
	case 15:
		patterns->isPrime();
		break;
	case 16:
		patterns->reverseNumber();
		break;
	case 17:
		patterns->amstrongNumber();
		break;
	default:
		break;
	}
}

void ProgramRunner::runFunctions()
{
	int n = 0;
	int fact = 0;
	int nCr = 0;
	int r = 0;

	int programNumber = 13;
	switch (programNumber) {
	case 1:
		n = 10;
		functions->getPrimesBelowN(n);
		break;
	case 2:
		n = 30;
		functions->fibbanociSeries(n);
	case 3:
		n = 5;
		fact = functions->factorialNumber(n);
		std::cout << fact;
	case 4:
		n = 5; r = 2;
		functions->nCr(n,r);
	case 5:
		functions->pascalTriangle();
	case 6:
		functions->checkPythogranTriplet();
	case 7:
		functions->binaryToDecimal();
	case 8:
		functions->octalToDecimal();
	case 9:
		functions->hexaToDecimal();
	case 10:
		functions->decimalToBinary();
	case 11:
		functions->decimalToOcta();
	case 12:
		functions->decimalToHexa();
	case 13:
		functions->addTwoBinary();
	default:
		break;
	}
}

void ProgramRunner::runArrays()
{
	int n = 0;
	
	const int size = 28;
	int array[size] = {0,8,3,-1,5,-20,1,2,1,-1,1,1,1,1,1,3,7,9,1,1,1,1,1,1,1,1,1,1};
	const int x = 2;
	const int y = 2;
	int value = 0;
	int** array2D = new int* [x];
	for (int i = 0; i < x; ++i) {
		array2D[i] = new int[y];
		for (int j = 0; j < y; ++j) {
			value++;
			array2D[i][j] = value;
		}
	}
	value = 0;
	int** array2D2 = new int* [x];
	for (int i = 0; i < x; ++i) {
		array2D2[i] = new int[y];
		for (int j = 0; j < y; ++j) {
			value++;
			array2D2[i][j] = value;
		}
	}

	//char array
	const int charArraySize = 16;
	char charArray[charArraySize] = { "apxpa is aasdfg" };

	int sum = 33;
	int programNumber = 22;
	switch (programNumber) {
	case 1:
		arrays->inputOutput();
		break;
	case 2:
		n = arrays->linearSearch(array, size, 6);
		std::cout << n << std::endl;
		break;
	case 3:
		n = arrays->binarySearch(array, size, 3);
		std::cout << n << std::endl;
		break;
	case 4:
		arrays->maxTillI(array, size);
		break;
	case 5:
		arrays->sumOfSubArrays(array, size);
		break;
	case 6:
		arrays->longestArthematicSubArray(array, size);
		break;
	case 7:
		arrays->recordBreakingDay(array, size);
	case 8:
		arrays->firstRepeatingElement(array, size);
	case 9:
		arrays->subArrayGivenSum(array, size, sum);
	case 10:
		arrays->smallestPtveMissingNum(array, size);
		break;
	case 11:
		arrays->printAllSubArrays(array, size);
		break;
	case 12:
		arrays->maxSubArraySum(array, size);
		break;
	case 13:
		arrays->maxCircularSubArraySum(array, size);
		break;
	case 14:
		arrays->pairsum(array, size);
		break;
	case 15:
		arrays->print2DArray(array2D, x, y);
		break;
	case 16:
		arrays->findIn2DArray(array2D, x, y);
		break;
	case 17:
		arrays->spiralOrderTraversal(array2D, x, y);
		break;
	case 18:
		arrays->traverseArray(array2D, x);
		break;
	case 19:
		arrays->multiplyArrays(array2D, array2D2, x,y,x,y);
		break;
	case 20:
		arrays->findInSortedArray(array2D, x, y);
		break;
	case 21:
		arrays->checkPalindrome(charArray, charArraySize);
		break;
	case 22:
		arrays->maxWord(charArray, charArraySize);
		break;
	default:
		break;
	}
}

void ProgramRunner::runSorting()
{
	int n = 0;
	int valueCount = 0;
	const int size = 5;
	int array[size] = {2,3,4,5,1};
	int programNumber = 9;
	switch (programNumber) {
	case 1:
		sorting->selectionSort(array,size);
		break;
	case 2:
		sorting->bubbleSort(array, size);
		break;
	case 3:
		sorting->insertionSort(array, size);
		break;
	case 4:
		sorting->mergeSort(array, 0, 4);
	case 5:
		sorting->quickSort(array, 0, 4);
	case 6:
		sorting->countSort(array, 5);
	case 7:
		sorting->DNFSort(array, 5);
	case 8:
		sorting->waveSort(array, 5);
	case 9:
		valueCount = sorting->inversionCount(array, 0, 4);
	default:
		break;
	}
	std::cout << valueCount;
	//for (int i = 0; i < size; i++) {
	//	std::cout << array[i] << " ";
	//}
}

void ProgramRunner::runPointers()
{
	int programNumber = 2;
	switch (programNumber) {
	case 1:
		pointers->pointerBasics();
		break;
	case 2:
		pointers->pointerArthematic();
		break;
	default:
		break;
	}
}

void ProgramRunner::runStrings()
{
	int programNumber = 3;
	switch (programNumber) {
	case 1:
		strings->basics();
	case 2:
		strings->convertToCapital();
	case 3:
		strings->maxOccuranceOfLetter();
	default:
		break;
	}
}

void ProgramRunner::runBitManipulation()
{	
	int n = 11;
	int pos = 2; //from left
	int programNumber = 9;
	switch (programNumber) {
	case 1:
		bitManipulation->getBitAtPosition(n, pos);
	case 2:
		bitManipulation->setBitAtPosition(n, pos);
	case 3:
		bitManipulation->udpateBitAtPos(n, pos,1);
	case 4:
		bitManipulation->countOnesInNumber(n);
	case 5:
		bitManipulation->subSets();
	case 6:
		bitManipulation->uniqueNumber();
	case 7:
		bitManipulation->twoUniqueNumber();
	case 8:
		bitManipulation->steveOfErastosthenes();
	case 9:
		bitManipulation->euclidGCD();
	default:
		break;
	}
}

void ProgramRunner::runReccursion()
{	
	int n = 7;
	int power = 3;
	int array[] = { 4,2,3,4 };
	int arrSize = 4;
	int key = 4;
	int answer{};

	int value[] = { 100,50,150 };
	int weight[] = { 10,20,30};
	int W = 50;

	//backtracking
	n = 5;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//std::cin>>arr[i][j];
		}
	}

	int** solArr = new int* [n];
	for (int i = 0; i < n; i++) {
		solArr[i] = new int[n];
		for (int j = 0; j < n; j++) {
			solArr[i][j] = 0;
		}
	}


	int programNumber = 23;
	switch (programNumber) {
	case 1:
		answer = reccursion->sum(n);
		break;
	case 2:
		answer = reccursion->nPowP(n,power);
		break;
	case 3:
		answer = reccursion->factorial(n);
		break;
	case 4:
		answer = reccursion->nthFibonacciNum(n);
		break;
	case 5:
		answer = reccursion->isArraySorted(array,arrSize);
		break;
	case 6:
		reccursion->printValueAsc(n);
		break;
	case 7:
		reccursion->printValueDsc(n);
		break;
	case 8:
		answer = reccursion->firstOccuranceInArray(array,arrSize,0,key);
		break;
	case 9:
		answer = reccursion->lastOccuranceInArray(array, arrSize, 0, key);
		break;
	case 10:
		reccursion->reverseString("master");
		break;
	case 11:
		reccursion->replacePi("pippippiiidvsd3fsacdscppaspppipii");
		break;
	case 12:
		reccursion->towerOfHanoi(3,'A','C','B');
		break;
	case 13:
		reccursion->removeDuplicates("AAASSSSSEEEMMMMEM");
		break;
	case 14:
		reccursion->moveXtoLast("axaxaxaxaaafafacazx");
		break;
	case 15:
		reccursion->subSequence("ABCD","");
		break;
	case 16:
		reccursion->subSeqASCII("AB","");
	case 17:
		reccursion->keypad("23", "");
	case 18:
		reccursion->permutations("ABC", "");
	case 19:
		answer = reccursion->countPath(0,3);
	case 20:
		answer = reccursion->countPathMaze(3, 0,0);	
	case 21:
		answer = reccursion->zeroOneKnapsack(value,weight, 3, W);
	case 22:
		if (reccursion->ratInMaze(arr, 0, 0, n, solArr)) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					std::cout<<solArr[i][j]<<" ";
				}
				std::cout << std::endl;
			}
		}
		break;
	case 23:
		if (reccursion->nQueen(solArr, 0, n)) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					std::cout << solArr[i][j] << " ";
				}
				std::cout << std::endl;
			}
		}
		break;
	default:
		break;
	}
	//cout << answer << endl;
}

void ProgramRunner::runVectors()
{	
	std::vector<int> vec;
	int programNumber = 2;
	int n = 8;
	int array[] = { 10,16,7,14,5,3,12,9 };
	switch (programNumber) {
	case 1:
		vectors->printVector(vec);
		break;
	case 2:
		vectors->reduceArray(array,n);
	default:
		break;
	}
}


//1 0 1 0 1
//1 1 1 1 1
//0 1 0 1 0
//1 0 0 1 1
//1 1 1 0 1


void ProgramRunner::runSingleLL() {
	int programNumber = 5;
	Node* head = NULL;
	switch (programNumber) {
	case 1:
		singleLL->insertAtTail(head, 1);
		singleLL->insertAtTail(head, 2);
		singleLL->insertAtTail(head, 3);
		singleLL->insertAtTail(head, 4);
		singleLL->displayList(head);
		break;
	case 2:
		singleLL->insertAtHead(head, 1);
		singleLL->insertAtHead(head, 2);
		singleLL->insertAtHead(head, 3);
		singleLL->insertAtHead(head, 4);
		singleLL->displayList(head);
	case 3:
		singleLL->insertAtHead(head, 1);
		singleLL->insertAtHead(head, 2);
		singleLL->insertAtHead(head, 3);
		singleLL->insertAtHead(head, 4);
		singleLL->searchValue(head,6);
	case 4:
		singleLL->insertAtHead(head, 1);
		singleLL->insertAtHead(head, 2);
		singleLL->insertAtHead(head, 3);
		singleLL->insertAtHead(head, 4);
		singleLL->deleteValue(head, 1);
		singleLL->displayList(head);
	case 5:
		singleLL->insertAtHead(head, 1);
		singleLL->insertAtHead(head, 2);
		singleLL->insertAtHead(head, 3);
		singleLL->insertAtHead(head, 4);
		head = singleLL->reverseLLRec(head);
		singleLL->displayList(head);
	default:
		break;
	}
}

