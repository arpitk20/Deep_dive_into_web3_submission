#include<bits\stdc++.h>
using namespace std;
class borrower
{
    private:
    public:
    int amount;
    int time;
    void name()
    {
        string name_lender;
        cout<<"Please enter your name: \n";
        getline(cin,name_lender);
    }
    int IsBorrower()
    {
        return 1;
    }
    void amount_need(int amount)
    {
       cout<<"You requested "<<amount<<"rupees\n";
    }
    int time_days(int time)
    {
       cout<<"You requested a loan for "<<time<<" days.\n";
       return time;
    }
    int extraDays()
    {
        cout<<"Kindly enter the number of days by which loan was default.If payment was on time kindly enter 0";
        int days;
        cin>>days;
        return days;
    }
};
class lender: public borrower
{
    private:
    string unique_id;
    public:
    string name_lender;
    int total_amount;
    int extra_time_lent;
    void set_unique_id(string id)
    {
        unique_id=id;
    }
    void nameLender(string name)
    {
        name_lender=name;
    }
    int time()
    {
        return extra_time_lent;
    }
};

int main()
{ 
lender l1;
borrower b1;
borrower b2;
borrower b3;
borrower b4;
cout<<"The number of borrowers are"<<b1.IsBorrower()+b2.IsBorrower()+b3.IsBorrower()+b4.IsBorrower();
b1.name();
b2.name();
b3.name();
b4.name();
b1.amount_need(150);
b2.amount_need(250);
b3.amount_need(350);
b4.amount_need(450);
b1.time_days(10);
b2.time_days(20);
b3.time_days(30);
b4.time_days(40);
l1.set_unique_id("arpitk20");
l1.nameLender("Arpit Kumar");
//Now we will calculate the total borrowed days
int TotalDays_b1=b1.time_days(10)+b1.extraDays();
return 0;
}