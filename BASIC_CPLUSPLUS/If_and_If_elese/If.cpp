#include<iostream>                                            //เรียกใช้ iosteram
using namespace std;                                          //บอก compiler ให้ใช้ namespace std เพื่อไม่ต้องพิมพ์ std ซ้ำๆ

int main (){                                                  //ฟังก์ชันหลักที่ทำงานเมื่อรัน
    int A = 0;                                                //ประกาศตัวแปรจำนวนเต็มชื่อA กำหนดค่าเริ่มต้นเป็น 0
    cout<<"Please enter a number to A: "<< endl;              //แสดงข้อความให้ผู้ใช้กรอกตัวเอง
    cin >> A;                                                 //รับค่าผู้ใช้ป้อนจากแป้นพิมพ์มาเก็บไว้ในตัวแปร A

    if(A<5){                                                  //ตรวจสอบว่าถ้า A<5 ให้แสดงข้อความ Condition met
        cout<<"Condition met"<<endl;
    }
    
    return 0;                                                 //จบโปรแกรม
}