/*
 * ============================================================
 * MANGALORE INSTITUTE OF TECHNOLOGY & ENGINEERING
 * (A Unit of Rajalaxmi Education Trust(R), Mangalore)
 * Autonomous Institute affiliated to VTU, Belagavi
 * Approved by AICTE, New Delhi
 * Accredited by NAAC with A+ Grade & ISO 9001:2015 Certified
 *
 * DEPARTMENT OF COMPUTER SCIENCE & ENGINEERING
 * Course Title: Computational Thinking & Programming
 * Course Code:  23ESCC111
 *
 * HOW TO USE:
 *   To run a specific program, uncomment ONLY that program's
 *   code block and comment out all others, then compile:
 *       gcc lab_programs.c -o out -lm && ./out
 * ============================================================
 */


/* ============================================================
 * PROGRAM 1
 * Develop a C program to read a character in upper case and
 * then print it in lower case.
 * ============================================================ */

#include<stdio.h>
void main()
{
    char upper,lower;
    printf("\n Enter any character in uppercase:\n ");
    scanf("%c",&upper);
    lower=upper+32;
    printf("\n The character in lower case is: %c",lower);
}


/* ============================================================
 * PROGRAM 2
 * Vibha has a piggybank in which she regularly saves the
 * remaining amount from her expenditure. The denominations
 * which she saves is of 10,20,50,100. Input the denominations
 * for the same and calculate the total amount of money she saved.
 *
 * (To run: comment Program 1, uncomment this block)
 * ============================================================ */

/*
#include<stdio.h>
void main()
{
    int ten, twenty, fifty,hundred,total_amt=0;
    printf("\n Enter the number of denominations for Rs 10: ");
    scanf("%d",&ten);
    printf("\n Enter the number of denominations for Rs 20: ");
    scanf("%d",&twenty);
    printf("\n Enter the number of denominations for Rs 50: ");
    scanf("%d",&fifty);
    printf("\n Enter the number of denominations for Rs 100: ");
    scanf("%d",&hundred);
    total_amt= ten*10+ twenty*20+ fifty*50+hundred*100;
    printf("\n Total amount in the piggybank= %d rupees",total_amt);
}
*/


/* ============================================================
 * PROGRAM 3
 * C program to find whether the given year is leap year or not
 * check end of centuries.
 * ============================================================ */

/*
#include <stdio.h>
void main()
{
    int year;
    printf("\n Please Enter the year: ");
    scanf("%d", &year);
    if(((year % 4 == 0) && (year % 100 !=0))|| (year % 400==0))
        printf("\n %d is a Leap Year. \n", year);
    else
        printf("\n %d is not a Leap Year. \n", year);
}
*/


/* ============================================================
 * PROGRAM 4
 * Develop a C program to read the coefficients for the equation
 * ax2+bx+c=0 and display the roots of the quadratic equation
 * with appropriate messages.
 * ============================================================ */

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c,x1,x2,disc;
    printf("Enter the values of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("Invalid Input\n");
        exit(0);
    }
    disc=b*b-4*a*c;
    if(disc>0)
    {
        printf("Roots are Real and Distinct\n");
        x1=((-b)+sqrt(disc))/(2*a);
        x2=((-b)-sqrt(disc))/(2*a);
        printf("Root1= %f\n Root2= %f\n",x1,x2);
    }
    else if(disc==0)
    {
        printf("Roots are Real and Equal\n ");
        x1=(-b)/(2*a);
        printf("Root1=Root2=%f\n",x1);
    }
    else
    {
        printf("Roots are Imaginary\n");
        x1=(-b)/(2*a);
        x2=(sqrt(fabs(disc)))/(2*a);
        printf("Root1= %f +i %f\n",x1,x2);
        printf("Root2= %f -i %f\n",x1,x2);
    }
}
*/


/* ============================================================
 * PROGRAM 5
 * Develop a program to find the reverse of a positive integer
 * and check for palindrome or not. Display appropriate messages.
 * ============================================================ */

/*
#include<stdio.h>
void main()
{
    int num,temp,rev,rem;
    printf("Enter an integer number\n");
    scanf("%d",&num);
    rev=0;
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=((rev*10)+rem);
    }
    printf("%d after reversing is %d\n",temp,rev);
    if(temp==rev)
    {
        printf("%d is a palindrome\n",temp);
    }
    else
    {
        printf("%d is not a palindrome\n",temp);
    }
}
*/


/* ============================================================
 * PROGRAM 6
 * Develop a C program to evaluate Taylor series
 * f(x) = x - x^3/3! + x^5/5! - 7/7! + ...
 * to compute sin(x).
 * ============================================================ */

/*
#include<stdio.h>
#include<math.h>
#define pi 3.142
void main()
{
    int degree,i;
    float x,num,den,term,sum=0;
    printf("Enter the value of degrees\n");
    scanf("%d",&degree);
    x=(degree*pi)/180;
    num=x;
    den=1;
    i=2;
    do
    {
        term=num/den;
        sum=sum+term;
        num=-num*x*x;
        den=den*i*(i+1);
        i=i+2;
    }while(fabs(term)>0.000001);
    printf("sin(%d)= %f without using library function\n",degree,sum);
    printf("sin(%d)= %f using library function\n",degree,sin(x));
}
*/


/* ============================================================
 * PROGRAM 7
 * Develop a C Program to read two 1-Dimensional arrays perform
 * the addition of the same and store the resultant in the
 * third array.
 * ============================================================ */

/*
#include<stdio.h>
void main()
{
    int a[50],b[50],c[50], n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements for Array A\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements for Array B\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n** ONE DIMENSIONAL ARRAY ADDITION **\n");
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nThe resultant array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",c[i]);
    }
}
*/


/* ============================================================
 * PROGRAM 8
 * Develop a C Program to search a given element in an array
 * using Binary Search technique.
 * Assume that the array is already sorted in ascending order.
 * ============================================================ */

/*
#include<stdio.h>
void main()
{
    int a[100],n,i,low,high,mid,key,flag=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter %d elements in ascending order\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n" );
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else
        if(key>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    if(flag==1)
        printf("Element found at position %d\n",mid+1);
    else
        printf("Element not found\n");
}
*/


/* ============================================================
 * PROGRAM 9
 * Develop a C Program to sort n elements in an array using
 * Bubble Sort.
 * ============================================================ */

/*
#include<stdio.h>
void main()
{
    int a[50],n,i,j,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The entered elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n***** SORTING ******\n");
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
*/


/* ============================================================
 * PROGRAM 10
 * Develop a C program to check the given string is
 * Palindrome or not.
 * ============================================================ */

/*
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    int i,j,len,x;
    printf("Enter a String\n");
    scanf("%s",str1);
    j=0;
    len=strlen(str1);
    for(i=len-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    printf("The original String =%s\n",str1);
    printf("The reversed String= %s\n",str2);
    x=strcmp(str1,str2);
    if(x==0)
        printf("%s is a palindrome\n",str1);
    else
        printf("%s is not a palindrome\n",str1);
}
*/


/* ============================================================
 * PROGRAM 11
 * Develop a C Program to perform any 4 string manipulation
 * functions using switch.
 * ============================================================ */

/*
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    int k,d,choice;
    printf("\n***MENU***\n");
    printf("1. String Length\t 2. String copy\n");
    printf("3. String Concatenate\t 4. String Compare\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("\n**STRING LENGTH**\n");
                printf("Enter a string:");
                scanf("%s",str1);
                k=strlen(str1);
                printf("\nLength of the string=%d\n",k);
                break;
        case 2: printf("\n**STRING COPY**\n");
                printf("Enter a string:");
                scanf("%s",str1);
                printf("The original string=%s\n",str1);
                strcpy(str2,str1);
                printf("the copied string=%s\n",str2);
                break;
        case 3: printf("\n**STRING CONCATENATE**\n");
                printf("Enter the first string:");
                scanf("%s",str1);
                printf("Enter the second string:");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("The Concatenated string=%s\n",str1);
                break;
        case 4: printf("\n**STRING COMPARE**\n");
                printf("Enter the first string:");
                scanf("%s",str1);
                printf("Enter the second string:");
                scanf("%s",str2);
                k=strcmp(str1,str2);
                if(k==0)
                    printf("Strings are same\n");
                else
                    printf("Strings are different\n");
                break;
        default: printf("\n You have entered a wrong choice\n");
                 break;
    }
}
*/


/* ============================================================
 * PROGRAM 12
 * Develop a C Program to swap two numbers using call by value
 * and call by reference.
 * ============================================================ */

/*
#include <stdio.h>
void swap_val(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Values after swapping using call by value\n x = %d\t, y = %d\n", x,y);
}
void swap_ref(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int x,y;
    printf("Enter values for x and y\n");
    scanf("%d%d",&x,&y);
    printf("Values before swapping are\n x = %d\t,y = %d\n", x,y);
    printf("\n Demonstrating call by vale\n");
    swap_val(x,y);
    printf("\n Demonstrating call by reference\n");
    swap_ref(&x,&y);
    printf("Values after swapping using call by reference\n x = %d\t, y = %d\n", x,y);
}
*/


/* ============================================================
 * PROGRAM 13
 * Develop a C Program using dynamic memory to compute the sum,
 * mean and standard deviation of all elements for n real numbers.
 * ============================================================ */

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int i,n;
    float mean,std,sum=0;
    float *ptr;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    ptr=(float*)malloc(n* sizeof(float*));
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",ptr+i);
        sum=sum+ptr[i];
    }
    printf("Sum= %f\n",sum);
    mean=sum/n;
    printf("Mean= %f\n",mean);
    sum=0;
    for(i=0;i<n;i++)
    {
        ptr[i]=mean-ptr[i];
        ptr[i]=ptr[i]*ptr[i];
        sum=sum+ptr[i];
    }
    sum=sum/n;
    std=sqrt(sum);
    printf("Standard Deviation= %f\n",std);
}
*/


/* ============================================================
 * PROGRAM 14
 * Develop a C Program to introduce 2D Array manipulation and
 * implement Matrix multiplication and ensure the rules of
 * multiplication are checked by using functions.
 * ============================================================ */

/*
#include<stdio.h>
int a[50][50],b[50][50],c[50][50],m,n,p,q,i,j,k;

void read_matrix(int a[50][50],int m,int n)
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void print_matrix(int a[50][50],int m,int n)
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void compute_matrix(int a[50][50], int b[50][50], int m,int q)
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}

void main()
{
    printf("Enter the order of Matrix A\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of Matrix B\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("Matrix Multiplication not possible\n");
    }
    else
    {
        printf("Enter the elements of matrix A\n");
        read_matrix(a,m,n);
        printf("Matrix A is displayed as\n");
        print_matrix(a,m,n);
        printf("Enter the elements of matrix B\n");
        read_matrix(b,p,q);
        printf("Matrix B is displayed as\n");
        print_matrix(b,p,q);
        printf("\nMatrix Multiplication\n");
        compute_matrix(a,b,m,q);
        printf("Resultant matrix \n");
        print_matrix(c,m,q);
    }
}
*/


/* ============================================================
 * PROGRAM 15
 * Develop a C Program to Implement structures to read, write
 * and compute average marks of the students, list the students
 * scoring above average marks for a class of N students.
 * ============================================================ */

/*
#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
    char grade[1];
};
void main()
{
    struct student s[20];
    char sname[20];
    int i,n;
    float sum=0,avg=0;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter student %d details\n",i+1);
        printf("\nEnter Roll Number , Name , Marks and Grade\n");
        scanf("%d%s%d %s ",&s[i].rollno, s[i].name, &s[i].marks, s[i].grade);
        sum+=s[i].marks;
    }
    avg=sum/n;
    printf("\nAverage Marks= %f\n",avg);
    printf("\n Student Details are \n");
    printf("ROLL_NO.\t NAME\t MARKS\t GRADE\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t%d\t%s\n",s[i].rollno,s[i].name,s[i].marks,s[i].grade);
    }
    printf("\nDetails of students who scored above Average Marks\n");
    printf("ROLL_NO.\t NAME\t MARKS\t GRADE\n");
    for(i=0;i<n;i++)
    {
        if(s[i].marks>=avg)
            printf("%d\t\t%s\t%d\t%s\n",s[i].rollno,s[i].name,s[i].marks,s[i].grade);
    }
}
*/


/* ============================================================
 * PROGRAM 16
 * Develop a C program to copy a text file to another, read
 * both the input file name and target file name.
 * ============================================================ */

/*
#include <stdio.h>
int main()
{
    char inputFileName[100];
    char outputFileName[100];
    char ch;
    FILE *inputFile, *outputFile;
    printf("Enter the input file name: ");
    scanf("%s", inputFileName);
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL)
    {
        printf("Error: Cannot open input file.\n");
        return 1;
    }
    printf("Enter the output file name: ");
    scanf("%s", outputFileName);
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL)
    {
        printf("Error: Cannot open output file.\n");
        fclose(inputFile);
        return 1;
    }
    while ((ch = fgetc(inputFile)) != EOF)
    {
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    printf("File copied successfully.\n");
    return 0;
}
*/
