#include<iostream>
using namespace std;
class Bank{

private:
    int a,b,c;
public:

    void Input_Amount(){
    cout<<"Enter the Deposite Amount:";
    cin>>a;
    }
    void Output_Amount(){
        cout<<"Enter the Withdraw Account:";
        cin>>b;
    }
   void condition(){
    if(b>a)
    {
        cout<<"====>Error"<<endl<<"===>Error" <<endl<<"==>Error"<<endl<<"=>Error"<<endl<<endl;
        cout<<"Withdrawal amount exceeded %Account% Balance$"<<endl<<endl;
        cout<<"You Enter the Correct Amount!"<<endl<<endl;
        cout<<"Your Remaining Amount is:"<<a<<endl<<endl<<endl;
    }
    else
        c=a-b;
        cout<<"\nYour Remaining Amount is "<<c<<endl<<endl;
        cout<<"Thanks for using Our Bank"<<endl<<endl;
        }
};
int main()
{
    cout<<"Welcome the Student Bank!"<<endl<<endl;//Chaudary Bank Limited
    Bank a;
    a.Input_Amount();
    a.Output_Amount();
    a.condition();

    return 0;
}
