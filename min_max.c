/* structure is used to return two values from minMax() */
#include<stdio.h>
struct pair
{
int min;
int max;
};

struct pair getMinMax(int arr[], int n)
{
struct pair minmax;	
int i;

/*If there is only one element then return it as min and max both*/
if (n == 1)
{
	minmax.max = arr[0];
	minmax.min = arr[0];	
	return minmax;
}

/* If there are more than one elements, then initialize min
	and max*/
if (arr[0] > arr[1])
{
	minmax.max = arr[0];
	minmax.min = arr[1];
}
else
{
	minmax.max = arr[1];
	minmax.min = arr[0];
}

for (i = 2; i<n; i++)
{
	if (arr[i] > minmax.max)	
	minmax.max = arr[i];

	else if (arr[i] < minmax.min)	
	minmax.min = arr[i];
}

return minmax;
}

/* Driver program to test above function */
int main()
{
    int  n;
    int marks[100];
    
    printf("Enter the number of students : ");
    scanf("%d",&n);
    printf("Enter marks of students : ");

    // taking input and storing it in an array
    for(int i = 0; i < n; ++i) {
        scanf("%d", &marks[i]);
  }
      for(int i = 0; i < n; ++i) {
        printf("%d\t", marks[i]);
  }

struct pair minmax = getMinMax (marks, n);
printf("\nMinimum element is %d", minmax.min);
printf("\nMaximum element is %d", minmax.max);
getchar();
}
