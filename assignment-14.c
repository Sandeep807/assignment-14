// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],i,sum=0;
//     printf("Enter 10 element: ");
//     for(i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
//     }
//     printf("Sum of number store in an array: %d",sum);
//     return 0;
// }

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],i,avg,sum=0;
//     printf("Enter 10 element: ");
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
//     }
//     printf("Average of 10 element: %d",(sum/10));
//     return 0;
    
// }

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],i,esum=0,osum=0;
//     printf("Enter 10 element: ");
//     for ( i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//         if(arr[i] % 2==0){
//             esum=esum+arr[i];
//         }
//         else
//         {
//             osum=osum+arr[i];
//         }
//     }
//     printf("Sum of even number in array: %d\n",esum);
//     printf("Sum of odd number in array: %d\n",osum);
//     return 0;

    
// }


// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.


// #include<stdio.h>
// int main(){
//     int arr[10],max=0,min=0,i;
//     printf("Enter 10 element : ");
//     for ( i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//         if(arr[i]>max){
//             max=arr[i];
//         }   
//     }
//     printf("Maximum element in array: %d",max);
//     return 0; 
// }

// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.



// #include<stdio.h>
// int main(){
//     int arr[10],max=65322,i;
//     printf("Enter 10 element : ");
//     for ( i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//         if(arr[i]<max){
//             max=arr[i];
//         }   
//     }
//     printf("Minimum element in array: %d",max);
//     return 0; 
// }

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.

// #include<stdio.h>
// int main(){
//     int arr[10],i,j,temp;
//     printf("Enter 10 element: ");
//     for ( i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);        
//     }
//     printf("Sorted element : ");
//     for ( i = 0; i < 10; i++)
//     {
//         for (j =i+1 ; j < 10; j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
        
//     }
//     printf("Sorted array: ");
//     for ( i = 0; i < 10; i++)
//     {
//         printf(" %d\n",arr[i]);
        
//     }
//     return 0;
    
// }


// 7. Write a program to find second largest in an array.Take array values from the user.
// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.


// #include<stdio.h>
// int main(){
//     int arr[10],i;
//     printf("Enter 10 element : ");
//     for ( i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Reverse array: \t");
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d\t",arr[9-i]);
//     }
//    return 0; 
    
// }

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.


// #include<stdio.h>
// int main(){
//     int arr[10],i,arr1[10];
//     printf("Enter 10 element : ");
//     for ( i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//         arr1[i]=arr[i];
//     }
//     printf("Copy one array to anoyher array : ");
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d\t",arr1[i]);
        
//     }
    
//     return 0;
    
// }