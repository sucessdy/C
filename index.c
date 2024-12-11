#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// function decarlartion
// void printHello() ;
// void printGoodbye();

// void namaste();
// void bonjour();
// // function call
// int main()
// {
//   printf("pls enter i or f for checking the nationality so pls ... type : ");

//   char ch;
//   scanf("%c", &ch);
//   if (ch == 'i')
//   {
//     namaste();
//   }
//   else if (ch == 'f')
//   {
//     bonjour();
//   }
//   else
//   {
//     printf("Invalid number");
//   }
//   return 0;
// }

// // // function definition
// // void printHello()
// // {
// //   printf("Hello world\n");
// // }

// // void printGoodbye(){
// //   printf("Goodbye!!\n");
// // }

// void namaste()
// {
//   printf("Namaste indian");
// }

// void bonjour()
// {
//   printf("Bonjour french");
// }

//  multiple of table function

// int sum(int a, int b);
// void printTable(int n);

// int main()
// {
//   int n;
//   printf("enter a number: ");
//   scanf("%d", &n);
//   // printf("enter b");
//   // scanf("%d", &b);
//   printTable(n);

//   return 0;
// }

// int sum(int a, int b)
// {
//   return a + b;
// }

// void printTable(int n)
// {
//   for (int i = 1; i <= 10; i++)
//   {
//     printf("multiple of %d\n", n * i);
//   }

// }

//  calculate the gst of goods

// void calculatePrice(float value);

// int main(){
//     float value = 100.0;
//   printf("enter a number : ");
//   scanf("%f", &value);

// calculatePrice(value);
//   return 0;

// }

// void calculatePrice(float value){
//   value = value + (0.18 * value);
//   printf("final price %f\n", value);

// }

//

// int main(){
//   int square =  4;
//   printf("%f \n", pow(square, 2));
//   return 0;
// }

// float squareArea(float side);
// float cirlceArea(float radius);

// float rectangleArea(float a, float b);

// int main()
// {
//   float a = 5.0;
//   float b = 10.0;

//   printf("area of: %f \n", reactangleArea(a, b));
//   return 0;
// }

// float squareArea(float side)
// {
//   return side * side;
// }

// float circleArea(float radius)
// {
//   return 3.14 * pow(radius, 2);
// }

// float rectangleArea(float a, float b)
// {
//   return a * b;
// }

// void swap(int *var1, int *var2)
// {
//   int temp = *var1;
//   *var1 = *var2;
//   *var2 = temp;
// }

// int main()
// {
// int var1 = 3, var2 = 2;
//   printf("Before swap Value of var1 and var2 is: %d, %d\n",
//           var1, var2);
//   swap(&var1, &var2);
//   printf("After swap Value of var1 and var2 is: %d, %d",
//           var1, var2);

//   return 0;
// }

// recursion

// int sum(int n);
// int main()
// {
//   printf("sum of nth value %d\n" , sum(15));
//   return 0;
// }

// int sum(int n)
// {
//   if(n ==1) return 1;

//   int sumMone = sum(n - 1);
//   int sumN = sumMone + n;
//   return sumN;
// }

// int factorial(int n);
// int main()
// {

//   printf("factorial of %d", factorial(4));
//   return 0;
// }

// int factorial(int n)
// {

//   if (n == 1)
//     return 1;
//   int facto = factorial(n - 1) * n;

//   return facto;
// }

// find the temperature of celsius
// float Temperature (float celsius);

// int main (){
//   float temp = Temperature(37);
//   printf("temperture of %f", temp);
//   return 0;
// }

// float Temperature (float celsius){
//   int temp = celsius * (0.9/0.5)  + 32;
//   return temp;
// }

//  find the value of the science , math , sanskrit ;

// int calSubject(int math, int science,int sanskrit);
// int main (){
// int math = 56;
// int science = 90;
// int sanskrit = 88;
// printf("my marks %d" , calSubject(math, science, sanskrit));
//   return   0;
// }

// int calSubject(int math, int science , int sanskrit){
//   int findingTheMarks =( (math + science + sanskrit ) / 3  ) ;
//   return findingTheMarks;
// }

// int fib(int n);
// int main()
// {
//     int   n;
//    printf("enter the number : ");
// scanf("%d", &n);

//   printf("Factorial of : %d \n %d: " ,n,  fib(n));

//   return 0;
// }

// int fib(int n)
// {
//   if (n == 0)
//   {
//     return 0;
//   };
// if (n == 1)
//   {
//     return 1;
//   };
//   int finbonacci = fib(n - 1) + fib(n - 2);
//   printf("Factorial: %d \n :%d ", n,  finbonacci);
// //   printf(" numm %d\n", (100 / 5) % 2);

//   return finbonacci;
// }

//  POINTERS

// syntax ;;

// int age = 22;
// int *ptr = &age;  * = value at address  || & = address of
// int main (){
// int age = 11;
// int *ptr = &age;
// // int _age = *ptr;
// // printf("%d\n", _age);
// // printf("%p\n", &age);
// // // printf("%u\n", &age);
// // printf("%p\n", ptr);
// // printf("%p\n", &ptr);

// // value at address
// printf("%d\n", age);
// printf("%d\n", *ptr);
// printf("%d\n", *(&age));
// return 0;
// }

// Practice question

// int main (){

//     int *ptr;

//     int x;

//     ptr = &x;
//     *ptr  = 0;

//     printf("%d\n", x);
//     printf("%d\n", *ptr);
//     *ptr += 5;
//     printf("%d\n", x);
//     printf("%d\n", *ptr);

//     (*ptr)++;

//     printf("x value %d\n", x);
//     printf("*ptr value %d\n", *ptr);
//     return 0;

// }

// printt the value of i  pointer to it's pointer ;
// int main(){
// int i = 5;
// int *ptr = &i;
// int **pptr = &ptr;

// printf("%d\n", **pptr);

// return 0;
// }

// call by value  and call by reference

// void square(int n);
// void _square(int* n);
// int main (){

// int number = 5;
// square(number);
// printf("  number of %d\n", number);

// _square(&number);

// printf("number of addrss %d\n", number);

//     return 0;
// }
// void square (int n){
//     n = n*n;
//     printf("suare of %d\n", n);
// }

// void _square(int* n){
//     *n =( *n) * (*n);

//      printf("suare of %d\n", *n);
// }

//  swapping two number ;

// void swap(int a, int b);
// void _swap(int *a, int *b);
// int main()
// {
//     int x = 3;
//     int y = 5;
//     swap(x, y);
//     printf(" x1 = %d\n y1 = %d\n ", x, y);
//     _swap(&x, &y);
//     printf(" x2 = %d\n y2 = %d\n ", x, y);

//     return 0;
// }

// void swap(int a, int b)
// {
//     int t = a;
//     a = b;
//     b = t;

//     printf("a = %d\n  & b = %d\n ", a, b);
// }

// void _swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// void printAddress(int *a);
// int main(){
//     int a =4;
//     printAddress(&a);
//     printf("It's me Point Address %u\n", &a ) ;
// return 0;
// }
// void printAddress(int *a){
//     printf(" this is the  point address of a %u\n", a);
// }

// write the function to calcute the sum, product, average of 2 number. print the average in the main function ;

// void doWork(int a , int b , int *sun, int *product ,int *average);
// int main (){
//     int a = 4;
//     int b = 8;
//     int sum, product, average;
//     doWork(a,b, &sum, &product, &average);
//     printf("sum = %d, product = %d, average = %d\n", sum, product, average);

//     return 0;

// }

// void doWork(int a , int b ,int *sum, int *product, int *average){
//     *sum = a + b;
//     *product = a * b;
//     *average = (a + b)/2;
// }

// //  array
// int main()
// {
//     int marks[3];

//     printf(" math ");
//         scanf("%d", &marks[0]);

//     printf(" science");
//     scanf("%d", &marks[1]);

//     printf(" sanskrit ");
//         scanf("%d",  &marks[2]);
//     printf(" math %d\n science %d\n sanskrit %d\n", marks[0], marks[1], marks[2]);
//     return 0;
// }

//  prunt the  value of the 3 tiems and print with gst

// int main()
// {
//     float items[3]; // float items[] = {1000 ,2000, 3333};

//     printf("enter your first item : ");
//     scanf("%f", &items[0]);

//     printf("enter your second item : ");
//     scanf("%f", &items[1]);

//     printf("enter your third item : ");
//     scanf("%f", &items[2]);
//     printf("Total price of first item: %f\n", items[0] + ( items[0] * 0.18));
//     printf("Total price of first item: %f\n", items[1] + ( items[1] * 0.18));
//     printf("Total price of first item: %f\n", items[2] + ( items[2] * 0.18));

//     // printf(" your value of 3 items:%f\n, second value %f\n,  third value %f \n ", items[0], items[1], items[2] * (0.18));
//     return 0;
// }

// pointer arithemetic

// pointer can be incremented or decremented

// it's means they are create or incremnet by one integerr/ char/ float this can be any data type:

// pointer arithmetic

// // we can also subtract one pointer from one another /
// int main()
// {

//     char star = '*';
//     char _star = '@';
//     char *ptr = &star;
//     char *ptr2 = &_star;
//     // printf("diff  %u\n", ptr - ptr2);
//     //  ptr++;
//     //      printf("diff  %u\n", ptr - ptr2);
//     //      printf("first value %u\n", ptr);
//     //      printf("second value   %u\n", ptr2);
// ptr2 = &star;
//          printf("comparsion  %u\n", ptr == ptr2);

//       ptr--;
//      printf("star 2 %u\n", ptr);
//     int number = 34;

//     // int *ptr = &number;
//     // printf("number %u\n", ptr);
//     // ptr++;
//     // printf("number one %u]\n", ptr);
//     // ptr--;
//     // printf("number is %u\n", ptr);
//     return 0;
// }

//  aadharr

// int main(){
// //  input
//     int aadhar [5];
//     int *ptr = &aadhar[0];
//     for(int i =0; i <5; i++){
// printf("aadhar index: %d\n, " , i);
// scanf("%d", (ptr+i));

//     }

//     // output

// for(int i = 0; i < 5; i++){
//     printf("%d index:  = %d\n", i, aadhar[i]);
// }
//     return 0;

// }

// void printNumber(int arr[], int n);
// int main(){
//     int arr[] = {0, 1,2,3,4,5,6};
// printNumber(arr, 7);
//     return 0;
// }

// void printNumber(int arr[], int n){
//     for (int i = 0 ; i < n; i++){
//     printf(" aa %d \t", arr[i]);

//     };

//     printf("\n");
// }

// C Program to demonstrate the use of array

//  character

//  multi dimension array;

// 2d array

// int main()
// {
//     int marks[2][3];
//     marks[0][0] = 90;
//     marks[0][1] = 66;
//     marks[0][2] = 89;

//     marks[1][0] = 90;
//     marks[1][1] = 66;
//     marks[1][2] = 89;
//     printf("%d\n", marks[0][0]);
//     return 0;

// }

// int oddCount(int arr[], int n);
// int main()
// {

//     int arr[] = {0, 1, 2, 3, 4, 5, 6};
//     printf("%d \n", oddCount(arr, 6));
//     return 0;
// }

// int oddCount(int arr[], int n)
// {

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             count++;
//         }
//     }

//     return count;
// }

// // reverse the array
// void reverse(int arr[], int n);
// void printArr (int arr[], int n);
// int main()
// {
//     int arr[] = {1,2,3,4,5};
// reverse(arr, 5);
// printArr(arr, 5);
//     return 0;
// }
// void  printArr ( int arr[], int n){
//     for(int i = 0; i < n ; i++){
//     printf("%d \t", arr[i]);

//     }
//      printf("\n");
// }
// void reverse (int arr[], int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         int firstValue = arr[i];
//         int secondValue = arr[n - i - 1];
//         arr[i] = secondValue;
//         arr[n - i -  1] = firstValue;
//     }
// }

// int main(){
//     int arr[6];
//     printf("%d",  arr[8]);
//     return 0;
// }

// int main ()
// {
//     int num, sum = 0, digit;
//     // Input the number
//     printf("Enter a 5-digit number: ");
//     scanf("%d", &num);

//     if(num < 10000 || num > 99999){
// printf("Invalid number");
// return 1;

//     }

// for(; num > 0; num/=10){
// sum += num%10;
// }

//  printf("The sum of the digits is: %d\n", sum);
// return 0;

// }

// // void swapping (int a , int b);
// void _swapping(int *a, int *b);

// int main(){

// int x = 5;
// int y = 10;
//     _swapping(&x, &y);
//  printf(" x number = %d & y number = %d\n", x, y);

//  return 0;
// }
// void _swapping(int *a , int *b)
// {

//     int t = *a;
//     *a = *b;
//     *b= t;

//     // int temp = a;
//     // a = b;
//     // b= temp;
//     printf("swapping the a number %d & b number %d\n", *a, *b);

//     }

//  still revison the array;

// int main(){
//     int marks[3];
//     printf("enter the py: ") ;
//   scanf("%d", &marks[0]) ;

//     printf("enter the mt: ") ;
//   scanf("%d", &marks[1]) ;

//     printf("enter the sc: ") ;
//    scanf("%d", &marks[2]) ;

// printf("scored in py = %d\nscored in mt = %d \nscored in sc = %d\n", marks[0] ,
//  marks[1], marks[2]);

// printf("scored %d\n", marks[0]);
// printf("scored%d\n", marks[1]);
// printf("scored%d\n", marks[2]);

//     return 0;

// }

//  final goods

// int main()
// {

//     float items[3];

//     printf("enter your first item : ");
//     scanf("%f", &items[0]);

//     printf("enter your second item : ");
//     scanf("%f", &items[1]);

//     printf("enter your third item : ");
//     scanf("%f", &items[2]);
//     // gst =  price * 18 /100
//     printf("first items : %f\t", items[0] + (items[0] * 18 / 100));
//     printf("second items: %f\t ", items[1] + (items[1] * 18 / 100));
//     printf("third items : %f\t", items[2] + (items[2] * 18 / 100));

//     // printf("first items : %f\t  second items: %f \t  third items : %f\t" ,  items[0], items[1], items[2]  * 18/100 );
//     return 0;
// }

// int main (){
//     int addharr[3];

//     int *inr = &addharr[0];
//     for(int i  = 0; i < 3; i++){
//         printf("%d", i);
//         scanf("%d", &addharr[i]);
//     }
//     for(int i = 0; i < 3; i++){
//         printf("%d index= %d\n", i, addharr[i] );
//     }
//     return 0;
//     }

// void printNumber (int arr[], int n);

//  fibonacci number with array
// int main()
// {
//     int n;
//     printf("enter the number (n>2): ");
//     scanf("%d", &n);
//     if (n < 2)
//     {
//         printf ("the value should be greater then 2" );
//         return 1;
//     }
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     for (int i =2; i < n; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//         printf("%d\n", fib[i]);
//     }
//     return 0;
// }

//  2d array tables

// void storeTable(int arr[][10], int n, int m, int number);
// int main()
// {
//     int tables[2][10];
//     storeTable(tables, 0, 10, 2);
//     storeTable(tables, 1, 10, 3);

//     for (int i = 0; i < 10; i++)
//     {
//         printf("2 table %d\t", tables[0][i]);
//     }
// printf("\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("3 tables %d\t", tables[1][i]);
//     }
//     return 0;
// }

// void storeTable(int arr[][10], int n, int m, int number)
// {
//     for (int i = 0; i < m; i++)
//     {
//         arr[n][i] = number * (i + 1);
//     }
// }

//  String

// A character array terminated by a "\0" null char
// void printString(char arr[]);

// int countLength (char arr[]);
// int main()
// {
//     // char firstName[] = "MUKTA";
//     // char LastName[] = "KUMARI";
//     // printString(firstName);
//     // printString(LastName);
//     // char name[10];
//     // printf("Enter ur name: ");
//     // scanf("%s", name);

//     // printf("%s", name);

// //     char str[100];
// //     fgets(str, 99, stdin);
// // puts(str);

// // char *firstName = "Hello My Name is Mukta";
// // puts(firstName);
// // firstName = "MUKta";
// // puts(firstName);

// // char FirstName[] = "Hello My Name is Mukta";
// // puts(FirstName);
// // FirstName = "MUKta";
// // puts(FirstName);

// char name [100];
// fgets(name, 100 , stdin);
//  printf("%d\n", countLength(name));
// //  puts(name);
//      return 0;
// }
// int countLength(char arr[]){
//     int count = 0;
//     for(int i =0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count -1;
// }
// void printString(char arr[])
// {
//     for (char i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c\t", arr[i]);

//     }
//     printf("\n");
// }

// int SearchString(char arr[], char ch);

// int main(){

//    char name[100];
//     char search;
//     printf("enter the string :  ");

//     fgets(name, 100, stdin);
//     printf("enter the character you want to search :");

//     scanf("%c", &search);

//    char countSearch = SearchString(name, search);
//     printf("The character '%c' appears %d \n times in the string.\n", search, countSearch);
//     return 0;
// }

//     int SearchString(char arr[], char ch)
// {
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         if (arr[i] == ch)
//         {
//             count++;
//         }

//     }    return count;
// }

// int main(){
//     // char name[]= "MUKta";
//     // int count = strlen(name);

// char name[100] = "mukta kumari";
// char firstname[] = "first nam";
// strcmp(name, firstname);

//     // fgets(name, 100, stdin);
// puts(name);
//     // printf("%c", firstname, name);
//         return 0;

// }

// int  main(){
//      char firstName[100] = "aUKTA";
//      char secondName[] = "aUKTT";
//      printf("%d", strcmp(firstName, secondName ));

//      return 0;

// }

// int main()
// {
//     char str[100];
//     char ch;
//     char i = 0;
//         printf("Enter a string: ");
//     // fgets(str, 100, stdin);
//     while( ch != '\n'){
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';

// printf("You entered: ");

//     puts(str);
// }

// int salting(char password) ;

// void salting (char password[]);
// int main (){

//     char password[100];
//     scanf("%s", password);
// salting(password);
// }

// void salting(char password[]){
//     char salt[] = "123";
//     char newPassword[200];

//     strcpy(newPassword, password);  //new password = "test "
//     strcat(newPassword, salt); //
//     puts(newPassword);
// }

// ...................................
//

// void slice(char str[], int n, int m);

// int main()
// {
//     char str[] = "Helloo , how are u";
//     slice(str, 3, 7);

//     // char sliceWord[] = "Hello , world!!";
//     // char slice[6];
//     // strncpy(slice, sliceWord +  3, 5);
//     // slice[5] = '\0';
//     //  printf("Extracted substring: %s\n", slice);

//     return 0;
// }
// void slice(char str[], int n, int m)
// {
//     char newStr[100];
//     int j = 0;
//     for (int i = n; i <=m; i++, j++)
//     {
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     puts(newStr);
// }

// // wowel

// int countVowel(char str[]);
// int main()
// {
//     char str[] = "helloewssfs";
//     printf("vowel is %d\n", countVowel(str));

//     return 0;
// }

// int countVowel(char str[])
// {
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
//         {
//             count++;
//         }
//     }

//     return count;
// }

//  struture

// struct student
// {
// int rollno;
// float cgpa;
// char name[100];
// };

// void printStudent (struct student s1);
// int main (){

//     // struct student s1;
//     // s1.rollno = 1;
//     // s1.cgpa =  9.5;
//     // strcpy( s1.name, "mukta");
//     // printf("student name %s\n", s1.name);
//     // printf("student roll %d\n", s1.rollno);
//     // printf("student cgpa %f\n", s1.cgpa);

//     //   struct student s2;
//     // s2.rollno = 2;
//     // s2.cgpa =  9.5;
//     // strcpy( s1.name, "mukta");
//     // printf("student name %s\n", s2.name);
//     // printf("student roll %d\n", s2.rollno);
//     // printf("student cgpa %f\n", s2.cgpa);

//     //   struct student s3;
//     // s3.rollno = 3;
//     // s3.cgpa =  9.5;
//     // strcpy( s1.name, "mukta");
//     // printf("student name %s\n", s3.name);
//     // printf("student roll %d\n", s3.rollno);
//     // printf("student cgpa %f\n", s3.cgpa);

//     struct student  s1 = {12323, 66.6, "ssutkajkls"};
//     printf("student bio %d\n", s1.rollno);
//     printf("student bio %s\n", s1.name);
//     printf("student bio %d\n", s1.rollno);
// ;      /* data */

// // struct student *ptr =  &s1;

// // printf("stduent bio data %d\n", ptr->rollno);

// printStudent(s1);

//     return 0;

// }

// void printStudent (struct student s1){
//     printf("student the information \n");
//     printf("student name : %s\n", s1.name);
//     printf("student roll number : %d\n", s1.rollno);
//     printf("student cgpa : %f\n", s1.cgpa);
// }

int main()
{

    // char ch;
    // FILE *fptr ;
    // fptr = fopen("newtext.txt","a");
    // if(fptr == NULL) { printf("file donet not exist") ;

    // } else {
    //     printf("file is open");
    //     fclose(fptr);

    // }

    // fscanf(fptr, "%c\n ", &ch);
    // printf("file  character %c \n", ch);

    // fscanf(fptr, "%c\n", &ch);
    // printf("file  character %c\n", ch);

    // fscanf(fptr, "%c\n", &ch);
    // printf("file  character %c\n", ch);

    // fscanf(fptr, "%c\n", &ch);
    // printf("file  character %c\n", ch);
    // fprintf(fptr, "%s", "M");
    // fprintf(fptr, "%s", "u");
    // fprintf(fptr, "%s", "K");
    // fprintf(fptr, "%s", "T");
    // fprintf(fptr, "%s", "A");
    // fprintf(fptr, "%s", "M");

    // fclose(fptr);

    //  malloc

int *ptr;
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    ptr = (int *)malloc(5 * sizeof(int));
    // ptr = (float *) calloc (5, sizeof(float));

    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[2] = 4;
    // ptr[3] = 9;

    printf("enter the number (4):  "); 
    for (int i = 0; i < 4; i++)
    {
        // printf("%f\n", ptr[i]);
        scanf("%d\n", &ptr[i] ); 
    }

ptr =  realloc(ptr, 8 ); 
for(int i = 0;  i < 8; i++){
    scanf("%d\n", &ptr[i]); 
}

for(int i = 0;  i < 8; i++){
   printf("number  %d\n %d\n", i, ptr[i]); 
}

    free(ptr);
    // printf("%d", sizeof(int));
    return 0;
}