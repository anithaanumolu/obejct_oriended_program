#include<iostream>
using namespace std;
 
class e_bill
{
     private:
         int c_no;
         char c_name[20];
         int units;
         double bill;
     public:
        void get()
        {
                 cout<<"Enter Details of Customer Below :: \n" <<endl;
                 cout<<"Enter Customer No. :: ";
                 cin>>c_no;
                 cout<<"\nEnter Customer Name :: ";
                 cin>>c_name;
                 cout<<"\nEnter No. of Units used :: ";
                 cin>>units;
         }
 
        void put()
         {
                cout<<"\nEntered Details of Customer are :: " <<endl;
                cout<<"\nCustomer No. is : "<<c_no;
                cout<<"\n\nCustomer Name is : "<<c_name;
                cout<<"\n\nNumber of Units Consumed : "<<units;
                cout<<"\n\nBill of Customer : "<<bill;
         }
 
        void calc_bill()
        {
                if(units<=100)
                       bill=units*1.20;
               else if(units<=300)
                       bill=100*1.20+(units-100)*2;
               else
                       bill=100*1.20+200*2+(units-300)*3;
         }
};
 
int main()
{
    e_bill b1;
    b1.get();
    b1.calc_bill();
    b1.put();
 
    cout<<"\n";
 
    return 0;
}
