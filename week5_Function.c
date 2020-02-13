#include <stdio.h>
#include <stdlib.h>

int addTen (int x) // method sigtnature , fuction phototype
{
    x = x + 10 ;
    return x;// ฟังก์ชันต้องมีการส่งค่ากลับ ถ้าไม่อยากส่งค่ากลับให้ใช่ฟังก์ชัน void

}
int addTwenty(); //การประกาศฟังก์ชั่น fuction phototype 
int x = 1000 // เป็นตัวแปร global 
int main()
{

    // library มี 2 ไฟล์ คือ .h กับ .c
    int x = 50 ; // เป็นตัวแปร local
    int y = addTen(x); //การเรียกใช้ฟังก์ชัน
    printf("x in addTen = %d\n",x);
    printf("addTen in main = %d\n", y);
    printf("addTwenty in  main = %d\n",addTwenty());
    printf("x in addTwenty =  %d\n",x);
}
int addTwenty()
{
    printf("x in addTwenty =  %d\n",x);
    x = x + 20 ;
    return x;
}
// ต้องประกาศตัวแปรก่อน ถึงจะใช้ในฟังก์ชั่นได้

recursion (ฟังก์ชันเรียกตัวเองได้)
เป็นฟังก์ชันเรียกตัวเอง จนกว่าค่าที่พารามิเตอร์รับเข้าไปนั้นกลายเป็นเท็จ จากนั้นจะค่อยๆย้อนทำออกมาจากหลังมาหน้า (stack frame)