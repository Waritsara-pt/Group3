#include <iostream>                                //เรียกใช้ไลบรารี iostream
using namespace std;                               //บอกคอมไพเลอร์ว่าให้ใช้ namespace std เพื่อที่เวลาเขียนโค้ดจะได้ไม่ต้องเขียน std ซ้ำๆก่อนเรียกใช้ฟังก์ชัน

int main() {                                       //ฟังก์ชันหลักที่สั่งให้โปรแกรมเริ่มทำงาน
  
  	// while loop to print numbers from 1 to 5  
    int i = 1;                                      //สร้างตัวแปร i ขึ้นมาเพื่อเก็บข้อมูลชนิด int หรือจำนวนเต็ม โดยที่ค่าเริ่มต้นเท่ากับ 1
    while (i <= 5) {                                //ใช้ while loop เพื่อพิมพ์ Hi => i = แล้วเริ่มบรรทัดถัดไป จำนวน 5 ครั้ง
        cout << "Hi  => i = " << i << endl;
        i++;                                        //คือการเพิ่มค่าให้ตัวแปร i ก็คือ i+1
    }

    return 0;                                       //จบการทำงานสของโปรแกรม
}