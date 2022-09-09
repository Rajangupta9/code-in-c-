// Given below is the list of mark obrained by a class of 50 students in an annal examination. 
// 43 65 51 27 79 11 56 61 82 09 25 36 07 49 55 63 74 81 49 37 40 49 16 75 87 91 33 24 58 78 65 56 76 
// 67 45 54 36 63 12 21 73 49 51 19 39 49 68 93 85 59
// write a program to count the number of students belonging to each of following groups of marks 0-9, 10-19, 20-29, ........,100.
#include<stdio.h>
#include<math.h>


int main (){
    int arr[50]={43 ,65, 51, 27, 79, 11, 56, 61 ,82, 9 ,25, 36, 07, 49 ,55, 63, 74, 81 ,49, 37, 40 ,49, 16, 75 ,87, 91 ,33, 24, 58 ,78 ,65, 56, 76, 
 67, 45 ,54, 36, 63, 12, 21, 73 ,49 ,51 ,19 ,39 ,49 ,68 ,93 ,85, 59};
 int a=0, b=0, c=0, d=0, e=0;

 for(int i=0; i<50; i++)
 {
    if(arr[i]<10)
    {
        printf("%d\n", arr[i]);
      a++;
    }

 }
 printf("the no of student who takes the marks below 10 :- %d \n", a);

 for(int i=0; i<50; i++)
 {
    if(arr[i]<20 && arr[i]>9)
    {
        printf("%d\n", arr[i]);
      b++;
    }

 }
 printf("the no of student who takes the marks below 10-20:- %d", b);
    
    
    return 0;
}