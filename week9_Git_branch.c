week9_Git_branch 
ิbranch คือ กิงที่แยกออกมาจากต้นหลัก สำหรับเอาไว้พัฒนาต่อ

คำสั่งต่างๆ
    การสร้าง branch 
        git branch ชื่อตามที่ต้องการจะใส่  เช่น git branch yoho

    การตรวจสอบว่ามี branch ไรบ้าง
        git branch

    การเปลี่ยน branch 
        git checkout (branch ที่ต้องการ) เช่น git checkout yoho 

การ  Merge 
Merge คือ การรวมไฟล์ของทั้งสอง branch มายังจุดปลายทาง (branch ที่เราอยู่)
เช่น หากเรา จะให้ไฟใน branch yoho มาอยู่ใน branch master เราก็ต้องกลับมาที่ branch master ก่อน
    
    git checkout master 

จากนั้นค่อย Merge โดยคำสั่ง 

    git merge (branch ที่เก็บไฟล์ที่ต้องการให้มารวมกับ master) เช่น git merge yoho

การ Merge แบบมี conflict
คือ การไฟล์เดียวกันใน 2 branch มีข้อมูลที่ไม่เหมือนกัน โดยโปรแกรมจะให้เลือกข้อมูลว่าต้องการแบบไหนหากมี editor tool หากไม่มี ก็ลบเองเพิ่มเอง

จะทำให้ branch master มีไฟล์ของ branch yoho

การ pull 
คือ การเพิ่มไฟล์ในอีกที่มายังอีกที่ เช่น
    directory git 102 มีการ push ไฟล์ไปยัง origin master 
    จากนั้นกลับมา ที่ directory git 101 จะไม่มีีไฟล์ที่เพิ่งเพิ่มเข้าไป เราจึงทำการ pull โดยการ 

        git pull origin master

    จะทำให้ git 101 มีไฟล์ที่เพิ่มเข้ามาจาก git 102    







