  // 01 Print memory addresses of two variables using %d  //

#include <stdio.h>

int main() {
    int x;
    int y;
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    int *p;
    int *q;
    p=&x;
    q=&y;
    printf("Here, x & y location = %d & %d \n",p,q);
    int *temp;
    temp=p;
    p=q;
    q=temp;
    printf("Here, x & y location = %d & %d",p,q);

    return 0;
}

// 02 Print values via dereferenced pointers using %d  //

#include <stdio.h>

int main() {
    int x;
    int y;
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    int *p;
    int *q;
    p=&x;
    q=&y;
    printf("Here, x & y location = %d & %d \n",*p,*q);
    int *temp;
    temp=p;
    p=q;
    q=temp;
    printf("Here, x & y location = %d & %d",*p,*q);

    return 0;
}

 // 03 Print both address and value of two pointer variables //

#include <stdio.h>

int main() {
    int x;
    int y;
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    int *p;
    int *q;
    p=&x;
    q=&y;
    printf("Here, x & y address = %d & %d \n",p,q);
    printf("Here, x & y value = %d & %d \n",*p,*q);
    int *temp;
    temp=p;
    p=q;
    q=temp;
    printf("Here, x & y address = %d & %d \n",p,q);
    printf("Here, x & y value = %d & %d",*p,*q);
    return 0;
}

  // 04 Print addresses in unsigned format %u //

#include <stdio.h>

int main() {
    int x;
    int y;
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    int *p;
    int *q;
    p=&x;
    q=&y;
    printf("Here, x & y address = %u & %u \n",p,q);
    printf("Here, x & y value = %d & %d \n",*p,*q);
    int *temp;
    temp=p;
    p=q;
    q=temp;
    printf("Here, x & y address = %u & %u \n",p,q);
    printf("Here, x & y value = %d & %d",*p,*q);
    return 0;
}

 // 05 Print addresses in hexadecimal format %x  //

#include <stdio.h>

int main() {
    int x;
    int y;
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    int *p;
    int *q;
    p=&x;
    q=&y;
    printf("Here, x & y address = %x & %x \n",p,q);
    printf("Here, x & y value = %d & %d \n",*p,*q);
    int *temp;
    temp=p;
    p=q;
    q=temp;
    printf("Here, x & y address = %x & %x \n",p,q);
    printf("Here, x & y value = %d & %d",*p,*q);
    return 0;
}

 //  06 Single pointer reused for three variables — print address & value //

int main() {
    int x;
    int y;
    int z;
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    printf("Enter z value: ");
    scanf("%d",&z);
    int *p;
    p=&x;
    printf("x value: %d \n",*p);
    printf("x address: %d \n",p);
    printf("x pos(+) address: %u \n",p);
    printf("x hexadecimal address: %x \n",p);
    printf("\n");
    p=&y;
    printf("y value: %d \n",*p);
    printf("y address: %d \n",p);
    printf("y pos(+) address: %u \n",p);
    printf("y hexadecimal address: %x \n",p);
    printf("\n");
    p=&z;
    printf("x address: %d \n",*p);
    printf("z address: %d \n",p);
    printf("z pos(+) address: %u \n",p);
    printf("z hexadecimal address: %x \n",p);
    return 0;
}

 // 07 Sum of two numbers using pointers //

#include <stdio.h>

int main() {
    int x;
    int y;
    int sum;
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    int *p;
    int *q;
    int *s;
    p=&x;
    q=&y;
    s=&sum;
    *s=*p+*q;
    printf("Sum: %d",*s);
    return 0;
}

 // 08 Swap two values using a function with pointer parameters //

#include <stdio.h>

void swap (int *p, int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

int main() {
    int x;
    int y;
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    int *a;
    int *b;
    a=&x;
    b=&y;
    printf("Before swapping x & y: %d & %d \n",*a,*b);
    
    swap(&x,&y);
    
    printf("After swapping x & y: %d & %d", x,y);
    
    return 0;
}

  // 09 Traverse array with pointer — print value & address //

#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input array: \n");
    for(int i=0;i<n;i++){
        printf("%d: ",i);
        scanf("%d",&arr[i]);
    }
    int *p;
    for(int i=0;i<n;i++){
        p=&arr[i];
        printf("Array value: %d \n",*p);
        printf("Value address: %d \n",p);
    }

    return 0;
}

  // 10 Array traversal with pointer — print values, sum, average, and filter a value  //

#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input Array: \n");
    for(int i=0;i<n;i++){
        printf("%d: ",i);
        scanf("%d",&arr[i]);
    }
    
    int *p;
    for(int i=0;i<n;i++){
    p=&arr[i];
    printf("value%d: %d\n",i,*p);
    }
    
   int sum=0;
   for(int i=0;i<n;i++){
       p=&arr[i];
       sum=sum+*p;
   }
   printf("Sum: %d \n",sum);
   float avg;
   avg=(float)sum/(float)n;
   printf("Average: %0.2f \n",avg);
   
   int x;
   printf("Enter value you want to remove: ");
   scanf("%d",&x);
   for(int i=0;i<n;i++){
       p=&arr[i];
       if(*p==x){
       continue;
       }
    printf("value%d: %d\n",i,*p);
   }
    return 0;
}

README.md
