// hello.cpp

#include <iostream>                     //เรียกใช้ไลบรารี iostream
#include "function.h"
using namespace std;                    //บอกคอมไพเลอร์ว่าให้ใช้ namespace std เพื่อที่เวลาเขียนโค้ดจะได้ไม่ต้องเขียน std ซ้ำๆก่อนเรียกใช้ฟังก์ชัน

void print_hello()                      
{
   cout << "Hello World" << endl;       //print คำว่า Hello World แล้วเริ่มบรรทัดถัดไป
}