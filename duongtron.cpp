#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int circle_radius;
   float PI_VALUE=3.14, circle_area, circle_circumf;
 
   //Yêu cầu người dùng nhập vào bán kính
   cout<<"Nhập vào bán kính R: ";
   cin>>circle_radius;
 
   //tính diện tích
   circle_area = PI_VALUE * circle_radius * circle_radius;
   cout<<"Diện tích hình tròn là: "<<circle_area;
 
   //tính chu vi
   circle_circumf = 2 * PI_VALUE * circle_radius;
   cout<<"\nChu vi hình tròn là: "<<circle_circumf;
    
    cout<<"\n--------------------------------\n";
    cout<<"Chương trình này được đăng tại Freetuts.net";
}