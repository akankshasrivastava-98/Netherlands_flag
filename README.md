# Netherlands_flag

Problem Statement : The flag of the Netherlands consists of three colors: red, white and blue. Given balls of these
three colors arranged randomly in a line , the task is to arrange them such that all balls of the same colors are
together and there collective color groups are in correct order. Design and implement the solution to the above problem.   

***SOLUTION :-***

***Algorithm for solving the problem.***

//Here 0,1 and 2 represents 3 different colours red,white and blue of Netherland’s flag.  

Algo(n,arr[])

/* Input: no. of coloured balls(n) represented with no. 0,1 and 2 and the array(arr[]) storing them.
Output: a sorted array with same colour or number together */

low <- 0
mid <- 0
high <- n-1

while(mid<=high)

	if (arr[mid] = 0)
		swap(arr[mid],arr[low])
		mid++; low++;
		
	if(arr[mid] = 1)
		mid++;
		
	if(arr[mid] = 2)
		swap(arr[mid],arr[high])
		high--;

