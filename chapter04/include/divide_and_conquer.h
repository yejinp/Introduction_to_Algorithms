#ifndef _DIVIDE_AND_CONQUER_H_
#define _DIVIDE_AND_CONQUER_H_

struct max_array
{
	int	first;
	int	last;
	int	sum;
};

void find_max_crossing_subarray(int A, int low, int mid, int high);
void find_maximum_subarray(int A, int low, int high);

#endif
