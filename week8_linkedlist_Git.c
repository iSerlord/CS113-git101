week8_linkedlist_Git

linked list  คือ โครงสร้างข้อมูลที่ใช้เก็บข้อมูลเชื่อมโยงเป็นสาย

Structure คือ โครงสร้างที่เก็บข้อมูลหลายตัวแปร อาจจะมีประเภทมี่แตกต่างกันได้
เช่น
struct student 
{
    char id[12];
    char name[40];
    int age;
};

การประกาศตัวแปร struct 
struct student human ; เป็นการประกาศว่า ตัวแปร human มีโครงสร้างเหมือน student

การกำหนดค่าเริ่มต้นใน struct
struct student people = {"0123456789" , "john chowrai" , 56} ; 

การเข้าถึงฟิลด์ ใน struct 
เข้าได้โดย ชื่อตัวแปร.ชื่อฟิลด์ เช่น human.id = "john chowrai"
หรืออาจเข้าผ่านตัวแปร pointer เช่น 

struct student std, *p_std;
(*p_std).age = 28;

การใช้ typedef
เป็นการเปลี่ยนประเภทเป็นคำที่เราต้องการ เช่น typedef long int li ;
กับ struct ก็เช่นกัน เช่น
struct student 
{
    char id[12];
    char name[40];
    int age;
}human;

Self-Referential Structures
เป็นโครงสร้างที่สร้างมาเพื่อจัดการกับ linked list โดยข้างใน struct จะมีตัวแปร pointer เพื่ออ้างอิงไปถึง struct อีก
ตัวอย่าง struct
struct node {
int data;
struct node *next;
};


Git 
คือ Version Control ตัวหนึ่ง มีหน้าที่จัดเก็บการเปลี่ยนแปลงของโค้ดที่เราทำ และสามารถดูไฟล์ก่อนแก้ไขได้
พื้นฐานการใช้คำสั่งบน Command Prompt (Windows)

mkdir ชื่อโฟลเดอร์ สร้าง directory ชื่อ ....
dir ดูรายการ directories และ files ใน working directory ปัจจุบัน
...:  ตรง... คือไดฟ์ที่ต้องการจะเปลี่ยน
cd ชื่อโฟลเดอร์  คือ เปลี่ยน working directory เป็น directory ชื่อไฟล์ ซึ่งอยู่ใน working directory
cd .. คือ เปลี่ยน working directory เป็น directory ที่บรรจุ working directory
git --version คือ ตัวสอบเวอร์ชั่นของ git
git init คือ สร้าง git repository (git project) (ขั้นตอนนี้จะทำทุกครั้งที่มี git repository ใหม่)
git status คือ ตรวจสอบสถานะของไฟล์ ว่ามีไฟล์ใดเปลี่ยนแปลงใน git repository
git add ชือไฟล์ เพิ่มไฟล์เข้า staging area เพื่อพร้อมจะ commit
git commit -m "แล้วแต่จะใส่เพื่อเป็นการกำกับว่าเปลี่ยนแปลงอะไรไป" คือ Commit ไฟล์ เพื่อเก็บ Checkpoint
git log --all --decorate --oneline --graph คือ ตรวจสอบ Checkpoint ทั้งหมด
git checkout <commit-id> คือ การนำไฟเก่ามาทำงานทั้งหมด แต่ถ้ามีต้องการไฟล์ใดไฟล์หนึ่ง ให้ใส่ชื่อไฟล์ที่ต้องการข้างหลัง



