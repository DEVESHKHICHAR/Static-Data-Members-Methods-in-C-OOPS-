#include <iostream>
using namespace std;
class employee{
    int Id;
    static int count;
    public:
      void getdata(){
        cout<<"enter the Id of the employee:"<<endl;
        cin>>Id;
        count++;
      }
      void setdata(){
        cout<<"the Id of the employee "<<count<<" is "<<Id<<endl;
      }
      static void getcount(){
        cout<<"the value of the count is: "<<count<<endl;
      }
}; 
int employee :: count;
int main() {
    employee devesh,prabal,Aman;
    devesh.getdata();
    devesh.setdata();
    employee :: getcount();
    prabal.getdata();
    prabal.setdata();
    employee :: getcount();
    Aman.getdata();
    Aman.setdata();
    employee :: getcount();    
    return 0;
}
