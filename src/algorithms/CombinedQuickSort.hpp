#ifndef IMPROVEDQUICKSORT
#define IMPROVEDQUICKSORT

// #include "../util/ArrayTools.hpp"

// //temp
// #include <iostream>

using namespace std;

class ImprovedQuickSort
{
	private:
		unsigned long long int StepCounter;
		vector<int> InputArray;
		int DuplicatesFound;

	public:
		ImprovedQuickSort(vector<int> &_inputArray) : StepCounter(0), DuplicatesFound(0)
		{
			StepCounter = StepCounter + 1;
			Init(_inputArray);
		}		
		ImprovedQuickSort() : StepCounter(0), DuplicatesFound(0){}
		
		void Init(vector<int> & _inputArray)
		{
			StepCounter = StepCounter + 1;
			InputArray = _inputArray;
		}
		int GetDuplicateCounter()
		{
			StepCounter = StepCounter + 1;
			return DuplicatesFound;
		}

		int GetStepCounter()
		{
			StepCounter = StepCounter + 1;
			return StepCounter;
		}

		void Do()
		{
			StepCounter = StepCounter + 4;
			DuplicatesFound = 0;
			vector<int> TempArray = InputArray;

			QuickSort(TempArray);	

			FindDuplicates(TempArray);
		
		}
	private:

		void Swap(vector<int> & _inputArray, int _index1, int _index2)
		{
			StepCounter = StepCounter + 3;
			int temp = _inputArray[_index1];
			_inputArray[_index1] = _inputArray[_index2];
			_inputArray[_index2] = temp;
		}

		// Standard QuickSort implementation according to Data Structures and Algorithms 3rd ed by Adam Drozdek, pg 501
		void QuickSort(vector<int> & _inputArray, int _first, int _last)
		{
			StepCounter = StepCounter + 7;
			int lower = _first + 1;
			int upper = _last;

			Swap(_inputArray, _first, (_first+_last)/2);
			int bound = _inputArray[_first];

			while (lower <= upper)
			{
				StepCounter = StepCounter + 3;
				while (bound > _inputArray[lower])
				{
					StepCounter = StepCounter + 1;
					lower++;
				}
				while (bound < _inputArray[upper])
				{
					StepCounter = StepCounter + 1;
					upper--;
				}
				if (lower < upper)
				{
					StepCounter = StepCounter + 3;
					Swap(_inputArray, lower++, upper--);
				}
				else
				{
					StepCounter = StepCounter + 1;
					lower++;
				} 
			}
			Swap(_inputArray, upper, _first);
			StepCounter = StepCounter + 4;
			if(_first < upper-1)
			{
				StepCounter = StepCounter + 2;
				QuickSort(_inputArray, _first, upper-1);
			}
			if (upper+1 < _last)
			{
				StepCounter = StepCounter + 2;
				QuickSort(_inputArray, upper+1, _last);
			}
		}

		void QuickSort(vector<int> & _inputArray)
		{
			StepCounter = StepCounter + 1;
			if (_inputArray.size() < 2)
			{
				StepCounter = StepCounter + 1;
				return;
			}
			StepCounter = StepCounter + 8;
			int min = 0;
			// find the smallest element and put it at the end of _inputArray
			for (int i = 0; i < _inputArray.size(); i++)
			{
				StepCounter = StepCounter + 1;
				if (_inputArray[min] < _inputArray[i])
				{
					StepCounter = StepCounter + 1;
					min = i;				
				}
			}
			Swap(_inputArray, _inputArray.size()-1, min);			
			QuickSort(_inputArray, 0, _inputArray.size()-2);
		}


		void FindDuplicates(vector<int> & _inputArray)
		{
			StepCounter = StepCounter + 2;
			for (int i = 0; i < _inputArray.size(); )
			{
				StepCounter = StepCounter + 3;
				if (_inputArray[i] == _inputArray[i+1])
				{
					StepCounter = StepCounter + 1;
					DuplicatesFound++;				
				}
				else
				{
					StepCounter = StepCounter + 1;
					break;
				}
				i = i+2;
			}
		}
};

#endif