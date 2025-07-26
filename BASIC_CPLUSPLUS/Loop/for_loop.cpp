#include <iostream>                                //เรียกใช้ iostream
using namespace std;                               //บอก compiler ให้ใช้ namespace std เพื่อไม่ต้องพิมพ์ std ซ้ำๆ

int main() {                                       //ฟังก์ชันหลักที่ทำงานเมื่อรัน

  	// for loop to print "Hi" 5 times             
    for (int i = 0; i < 5; i++) {                  //ใช้for loop เพื่อพิมพ์ hi 5 ครั้ง
      	cout << "Hi => i = " << i << endl;         //แสดง hi ครั้งที่ i+1 และขึ้นบรรทัดใหม่
    }
  
    return 0;                                      //จบโปรแกรม
}