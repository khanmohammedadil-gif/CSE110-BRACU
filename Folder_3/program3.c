 // 01 Array input — print sum and average //
#include <stdio.h>
int main() {
   printf("Enter size of array: ");
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       printf("arr[%d]:",i);
       scanf("%d",&arr[i]);
   }
   int sum=0;
     for(int i=0;i<n;i++){
       sum=sum+arr[i];
   }
   float avg;
   avg=(float)sum/(float)n;
   printf("\n");
   printf("Generated Array: \n");
   for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
   printf("\n");
   printf("Sum: %d \n",sum);
   printf("Average: %0.2f",avg);
   
  return 0;
}
 // 02 Print original and reversed array //
 // 03 Remove all occurrences of an element (skip with continue) //
 // 04Remove an element a specified number of times05Remove only the last occurrence of an element06Keep only the first occurrence of a given element07Count frequency of an element08Bubble sort (with out-of-bounds bug — learning example)092D array filled with row index10Static 3×3 matrix — add 2 to each element11Static 3×3 matrix — calculate total sum12Static 3×3 matrix — calculate diagonal sum13Static 3×3 matrix — compute transpose14Palindrome check using strcpy, strrev, strcmp15Selection sort — ascending and descending order16Static array with pointer arithmetic — sum and average17Static array with pointer arithmetic — remove a given element18Dynamic array with pointer arithmetic — keep first occurrence19Struct student array — compute average CGPA20Struct student array — find maximum CGPA21Struct student array — compute average and maximum CGPA
