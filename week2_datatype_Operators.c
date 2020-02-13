#include <stdio.h>
#define if 20


char f = '\0';
int main()
{
  //  printf("Hello World!");
   int a = 40000 ; // จำนวนเต็ม  มีขนาด 4 byte
   char c = 'a' ; // ตัวอักษร  มีขนาด 1 byte
   char b = 97 ; // output เป็นตัว a อ้างอิงจากตาราง ascii code
   float d = 0.111 ; // จำนวนจริง มีขนาด 4 byte
   double e = 10.111 ; // จำนวนจริง มีขนาด 8 byte
   int ans1 = a + d ; //
   float ans2 = a + d ; //
   float ans3 = 1.0/2 ; // จำนวนเต็ม / จำนวนเต็ม จะเป็นการตัดเศษทิ้ง เอาแต่ผลลัพธ์
   int ans4 = 12%15 ; // ถ้าตัวตั้ง ถูก % ด้วยจำนวนที่มากกว่าจะได้ ตัวที่น้อยกว่า
   short int  // จำนวนเต็ม  มีขนาด 2 byte
   long int  // จำนวนเต็ม  มีขนาด 8 byte
   unsigned int  // จำนวนเต็ม  มีขนาด 4 byte เอาแต่จำนวน +
   unsigned short int  //จำนวนเต็ม  มีขนาด 2 byte เอาแต่จำนวน +
   
   
   
   
   printf("%d %c %d %c\n", c,c,b,b);
   printf( "%llu\n", a );
   
   
   printf("%lf\n", f+500) ;
   printf("%d\n",if);
   printf("%5.4lf %20llu\n" , e , a);
   printf("%d %f %c\n",ans1,ans2,c*c);
   printf("%f\n",ans3);
   printf("%d",ans4);


}

Operator
Arithmetic Operators (ตัวดำเนินการทางคณิตศาสตร์)
เช่น +,-,*,/,% เป็นต้น
unary Operator คือ 1 Operator ทำกับ 1 operand 
เช่น n++ , k-- เป็นต้น
ิbinary Operator คือ 1 Operator ทำกับ 2 operand
เช่น a + b = c

Relational Operators (Operator ที่เอาไว้เปรียบเทียบ)
เช่น >, >= , < , <= ,== ,!= เป็นต้น

Logical Operators (Operator ที่เอาไว้เช็คเงื่อนไข)
เช่น  && (and)
     || (or)
     ! (นิเสธ)