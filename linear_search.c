/*Linear Search
Difficulty Level : Basic
Problem: Given an array arr[] of n elements, write a function to search a given element x in arr[].

Examples :  

Attention reader! All those who say programming isn't for kids, just haven't met the right mentors yet. Join the  Demo Class for First Step to Coding Course, specifically designed for students of class 8 to 12. 

The students will get to learn more about the world of programming in these free classes which will definitely help them in making a wise career choice in the future.

Input : arr[] = {10, 20, 80, 30, 60, 50, 
                     110, 100, 130, 170}
          x = 110;
Output : 6
Element x is present at index 6

Input : arr[] = {10, 20, 80, 30, 60, 50, 
                     110, 100, 130, 170}
           x = 175;
Output : -1
Element x is not present in arr[].
*/



#include <stdio.h>
#include <stdbool.h>
int main()
{
int arr[]={10,20,80,30,110,100,130,170};
    int n;
    //1 find how many elements n are in the array
    n = sizeof(arr) / sizeof(arr[0]);
    bool present=false;
    //2 loop n times
    for (int i=0;i<n;i++){
          //3 if arr[n]= 110 print Element 110 is present at index n
        if (arr[i]==110){
            printf("Element 110 is presnt at index %i",i);
            //flag for element presence
            present=true;
            } 
    }
     //if non flag print the element was not present in the array
     if (!present)    printf("Element 110 is not present in array");
            
    return 0;
}
