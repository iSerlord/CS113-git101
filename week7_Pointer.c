#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x = 100 ; // การประกาศตัวดปรอย่างงี้ ได้ ชื่อตัวแปรที่ผูกกับตัวแปร และค่าของ แอดเดรส
    int a = 0144 ; // ฐานแปด
    int b = 0x64 ;// ฐาน 16
    
    //printf("x = %d\n", x);
    //printf("reference x = %ld\n", &x);// reference คือแอดเดรส , 
    //printf("reference x = %p\n", &x); // %p คือ เลขฐาน 16 , %o print ฐานแปด ,
    
    //int number[] = {3 , 4 , 5 , 6 , 7} ; // 
    //int number[100] ; // 
    //int number[100] ; {3 , 4 , 5 , 6 , 7} ; //
    //printf("index 1 = %d\n", number[1]) ; 
    //printf("reference number[1] = %p\n", &number[1]);
    //printf("reference number[0] = %p\n", &number[0]); // ตัวแปรธรรมดาเก็บค่า
    //printf("reference number = %p\n", number + 1); // ตัวแปร pointer เก็บ แอดเดรส , ถ้ารู้แอดเริ่มต้น จะสามารถเข้าถึงได้ทุก alley โดยการ + address ตาม type 
    // ชื่อ alley เป็น pointer พิเศษ
    //number[2000] = 2000 ;
    //printf("index 1 = %d\n", number[2000]) ; 
    //printf("reference number[1] = %p\n", &number[2000]);
    // int number[] = {3 , 4 , 5 , 6 , 7} ;
    // int *ptr = &x ;  //ให้ ptr ชี้ไปที่แอดเดราของ x 
    // int *arrPtr ; // การประกาศว่าเป็น pointer
    // arrPtr = number ; // ถ้าจะ addside ค่า ไม่ต้องมี * 
    // arrPtr += 2 ;
    // *arrPtr = *arrPtr + 10 ;
    // printf("arrptr = %p, *arrPtr = %d\n" , arrPtr , *arrPtr) ; // *ชือ่ตัวแปร เป็นการดึงค่าในแอดเดรสนั้นออกมา
    // printf("number[2] = %d\n", number[2]) ;
    // int number[] = {3 , 4 , 5 , 6 , 7} ;
    // for (int *ptr = number ; ptr <= &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n" ,ptr , *ptr) ;


    // }
    // int *ptr2 = number ;
    // for (int i = 0 ; i < 5 ; i++)
    // {
    //     printf("[%p] = %d\n" ,ptr2+i , *(ptr2 + i)) ;

    // }
    // char input[100] ;
    // int count = 0;
    // char c ; 
    // while((c = getchar()) != '\n')
    // {
    //     input[count] = c ;
    //     ++count ;

    // } 
    // input[count] = '\0';
    // for (char *cPtr = input ;*cPtr != '\0' ; cPtr++)
    // {
    //     printf("%c\n", *cPtr) ;


    // }
    char c ;
    int i ;
    char s[100] ;
    scanf("%d-%c-%s",&i,&c,s);
    printf("%d  %c  %s",i,c,s);
    
    Segmentation fault
    คือการที่เราจะเข้าถึง memory ที่เราไม่ได้จองไว้

}