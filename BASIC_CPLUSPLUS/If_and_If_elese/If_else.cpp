#include<iostream>                                      //เรียกใช้ไลบรารี iostream
using namespace std;                                    //บอกคอมไพเลอร์ว่าให้ใช้ namespace std เพื่อที่เวลาเขียนโค้ดจะได้ไม่ต้องเขียน std ซ้ำๆก่อนเรียกใช้ฟังก์ชัน

int main() {                                            //ฟังก์ชันหลักที่สั่งให้โปรแกรมเริ่มทำงาน
    int A = 0;                                          //สร้างตัวแปร A ขึ้นมาเพื่อเก็บข้อมูลชนิด int หรือจำนวนเต็ม โดยที่ค่าเริ่มต้นเท่ากับ0
    cout << "Please enter a number for A: " << endl;    //printคำว่า Please enter a number for A: แล้วเริ่มบรรทัดถัดไป
    cin >> A; // A=6                                    //inputค่าจากผู้ใช้แล้วนำไปเก็บไว้ในตัวแปร A
    if (A == 8) {                                       //ถ้า A มีค่าเท่ากับ 8 ให้ทำตามคำสั่งที่อยู่ภายใต้ if แต่ถ้าหากไม่เข้าเงื่อนไขให้เช็คเงื่อนไขถัดไป
        cout << "A is 8" << endl;                       //printคำว่า A is 8 แล้วเริ่มบรรทัดถัดไป
    } else if (A > 8) {                                 //ถ้า A มากกว่า 8 ให้ทำคำสั่งที่อยู่ภายใต้ else if แต่ถ้าหากไม้เข้าเงื่อนไขให้ทำเงื่อนไขถัดไป
        cout << "A is greater than 8" << endl;          //printคำว่า A is greater than 8 แล้วเริ่มบรรทัดถัดไป
    } else {                                            //ถ้าไม่เข้าเงื่อนไขใดๆเลยให้ทำตามคำสั่งภายใต้ else
        cout << "A is less than 8" << endl;             //printคำว่า A is less than 8 แล้วเริ่มบรรทัดใหม่
    }

    return 0;                                           //จบการทำงานสของโปรแกรม
}