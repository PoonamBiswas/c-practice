#include <stdio.h>

int main() {
    int i, pos, n;
    float x;
    float marks[100];
    
    printf("Enter the number of students : ");
    scanf("%d",&n);
    printf("Enter marks of students : ");

    // taking input and storing it in an array
    for(int i = 0; i < n; ++i) {
        scanf("%f", &marks[i]);
  }
      for(int i = 0; i < n; ++i) {
        printf("%f\t", marks[i]);
  }
        // element to be inserted
        printf("\n Enter marks to be inserted :");
        scanf("%f", &x);
        // position at which element is to be inserted
        printf("Enetr position of the marks: ");
        scanf("%d", &pos);
        n++;
        // shift elements forward
        for (i = n-1; i >= pos; i--)
            marks[i] = marks[i - 1];
        // insert x at pos
        marks[pos - 1] = x;
        // print the updated array
            for (i = 0; i < n; i++)
                printf("%f ", marks[i]);
                printf("\n");
         // enter the position of the element to be deleted  
    printf( " Define the position of the marks which you want to delete: \n ");  
    scanf (" %d", &pos);  
    // check whether the deletion is possible or not  
    if (pos >= n+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        // use for loop to delete the element and update the index  
        for (i = pos - 1; i < n -1; i++)  
        {  
            marks[i] = marks[i+1]; // assign arr[i+1] to arr[i]  
        }  
          
        printf (" \n The resultant array is: \n"); 
         // display the final array  
        for (i = 0; i< n - 1; i++)  
        {  
            printf (" marks[%d] = ", i);  
            printf (" %f \n", marks[i]);  
        }
    }

  return 0;
}
