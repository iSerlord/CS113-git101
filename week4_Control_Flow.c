#include <stdio.h>
#include <stdlib.h>
char number[5] ;
char name[20] ;
int chr, chr1 ;
int main (){

    //printf("Enter name : ");
    //gets(name);
    //fgets(name , 20, stdin); 20 คือ กำหนดขนาด (buffer)
    //getchar(chr);
    //printf("%s", name);
    //fgets(number , 5, stdin);
    //int i = atoi(number); //atoi = allay to integer
    //printf("%d", number);
    //printf ("number = %s, i = %d",number,i);
    //atol(); = allay to long 
    //atof(); = allay to float 
    //long l = atol();

    //double f = atof():
    //chr = getchar();
    //getchar();
    //chr1 = getchar();
    //fgets(number, 5 , stdin);
    //int i = atoi(number);
    //puts(number);
    //putchar(100);
    //putchar('u');

    // ภาษาซีไม่มี บูลลีนนะจ้ะ ไม่มี true false ใช้ data type อื่นแทน
    //int found = 0 ; 
    //float isExist = 0.0 ;
    //char isOnline = '\0';
    //  มีแค่ 3 ข้างบนนี้เท่านั้น ที่มีค่าเป็น false นอกนั้นเป็น true หมด

    //fgets(number, 5 , stdin);
    //int i = atoi(number);
    
    
    if , else if , else  เป็นการเช็คค่าต่างๆ เพื่อนำไปใข้งาน
    
            เช็คเงื่อนไขถ้าใช่ ให้ทำ
    //if ( i > 0 && i <= 10 )
    //{
    //    printf ("if = %d\n",i > 0 && i <= 10) ;
       else if เมื่อ if เป็นเท็จ จะลงมาเช็คกรณีของ else if  ต่อ
    
    //}else if (i <= 20 || !found){
     //   printf("else if\n");
        else มื่อ if และ else if เป็นเท็จ จะลงมาเช็คกรณีของ else ต่อ
    //}else{

    //}

    //fgets(number , 5, stdin);
    //int i = atoi(number) ; 
    //int count = 0 ;
    
    
    loop while 
            เงื่อนไขเช็ค ถ้าใช่ให้ทำ ถ้าไม่ใช่ให้หยุด loop
    //while (count < i ){

        เมื่อเช็คเงื่อนไขแล้วใชก็ทำ
        //count++ ; ++count; // มีค่าเท่ากัน
        //printf("count = %d\n" , count);
        //count++; (เปลี่ยนค่าตัวแปรเพื่อให้หลุด )
    //}
    
    
    loop for
            ตัวตั้งต้น          เงื่อนไขเช็ค ถ้าใช่ให้ทำ ถ้าไม่ใช่ให้หยุด loop                หลังจากทำให้เปลี่ยนค่าตัวแปรแล้วกลับไปเช็คเงื่อนไขใหม่
    //for (int j = 0    ;                  j < 1                       ;                            j=10                   )
          เมื่อเช็คเงื่อนไขแล้วใชก็ทำ
       // printf("j = %d\n", j) ;



    }

    loop while true ต้องมีเงื่อนไขเพื่อนหยุด loop
    while (1) 
    {
        fgets(x , 20 , stdin) ;
        if (x=="...")
        {
            break ;
        }
    }
คำสั่ง
ิbreak = เมื่อเจอคำสั่งนี้จะทำให้หยุด loop ทันที่ (ในกรณที่เป็ร loop ซ้อน loop จะหลุดแค่ลูปใน)
continue = เมื่อเจอคำสั่งนี้จะทำให้ไม่ทำข้างล่างคำสั่งนี้ต่อ แล้วเริ่ม loop ใหม่



}    

