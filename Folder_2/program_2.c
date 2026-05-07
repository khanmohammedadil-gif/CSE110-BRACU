  // 01 Copy one array into another //
#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input Array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int copy[n];
    for(int i=0;i<n;i++){
        copy[i]=arr[i];
    }
    printf("Copy Array: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",copy[i]);
    }
   
  return 0;
}

  // 02 Reverse an array into a new array //
 #include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input Array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int reverse[n];
    for(int i=0;i<n;i++){
        reverse[i]=arr[n-1-i];
    }
    printf("Reverse Array: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",reverse[i]);
    }
   
  return 0;
}

  // 03 Remove all occurrences of a given element  //
 #include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input Array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter element that is to be remved: ");
    scanf("%d",&x);
    printf("New Array: \n");
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        continue;
        printf("%d\n",arr[i]);
    }
   
  return 0;
}


  // 04 Remove a specified element a given number of times //
#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input Array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    int count=0;
    printf("Enter element that is to be remved: ");
    scanf("%d",&x);
    printf("Enter no of time the element is to be removed: ");
    scanf("%d",&y);
    printf("New Array: \n");
    for(int i=0;i<n;i++){
        if(count<y){
        if(arr[i]==x){
             count++;
               continue;
        }
        }
        printf("%d\n",arr[i]);
    }
   
  return 0;
}


  // 05 Remove elements from the back a specified number of times //
#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,value;
    int count=0;
    printf("Enter value that is to be removed: ");
    scanf("%d",&value);
    printf("Enter how many values to be removed: ");
    scanf("%d",&x);
    for(int i=n-1;i>=0;i--){
       if(arr[i]==value && count<x){
        count++;
        continue;
    for(int j=0;j<n-x;j++){  
        arr[j]=arr[i];
        }
    }
    }
    printf("Output array: \n");
    for(int i=0;i<n-x;i++){
        printf("%d \n",arr[i]);
    }

  // 06 Keep only the first occurrence of a given element // 
#include <stdio.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int value;
    int count=0;
   
    printf("Enter value to be kept only once: ");
    scanf("%d",&value);
    printf("Array after removal: \n");
    for(int i=0;i<n;i++){
        if(arr[i]==value){
          if(count==0){
              printf("%d\n",arr[i]);
              count++;
          }
        }else{
              printf("%d\n",arr[i]);
          }
    }
    return 0;
}

  // 07 Count frequency of a given element //
#include <stdio.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int value;
    int count=0;
   
    printf("Enter value for checking frequency: ");
    scanf("%d",&value);
    
    for(int i=0;i<n;i++){
        if(arr[i]==value){
              count++;
          }
    }
    printf("Frequency: %d",count);
    return 0;
}

  // 08 Bubble sort (ascending order)
#include <stdio.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    printf("Sorted Array: \n");
    for(int i=0;i<n-1;i++){ //arr length
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

  // 09 Input and display a 2D matrix //
#include <stdio.h>

int main() {
   
  int x,y;
  printf("Enter Row value: ");
  scanf("%d",&x);
  printf("Enter Column value: ");
  scanf("%d",&y);
  int arr[x][y];
  printf("Input Array Matrix: \n");
  for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
      scanf("%d",&arr[i][j]);
      }
  }
  printf("Output Array Matrix: \n");
  for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
          printf("%d ",arr[i][j]);
      }
      printf("\n");
  }

    return 0;
}

  // 10 Fill a 2D matrix with row index values112D matrix with labeled input prompts122D matrix — add 2 to each element //
int main() {
   
  int x,y;
  printf("Enter Row value: ");
  scanf("%d",&x);
  printf("Enter Column value: ");
  scanf("%d",&y);
  int arr[x][y];
  printf("Input Array Matrix: \n");
  for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
      printf("Arr[%d][%d] = ",i,j);
      scanf("%d",&arr[i][j]);
     
      }
  }
  for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
         arr[i][j]+=2;
      }
  }
  printf("Output Array Matrix: \n");
  for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
         printf("%d ",arr[i][j]);
      }
      printf("\n");
  }
    return 0;
}

README.md
