#include<iostream>
#include<string>
using namespace std;

class invoice{
  
public:
    string part,description_part;
    int quantity,price;
    double VAT,Discount;
    
public:

    
    invoice(string P1,string D,int Q,int P,double v1,double d1){
        
        part=P1;
        description_part=D;
        quantity=Q;
        price=P;
        VAT=v1;
        Discount=d1;
        
        cout<<"|Part no|\t"<<"|Parts Description|\t"<<"|Quantity of item|\t"<<"|Price|\t"<<"|VAT|\t"<<"|Discount|\t"<<endl;
    }
    public:
    void getparts ()
    {
        cout<<"\t"<<part<< "\t\t\t" <<description_part<< "\t\t\t" <<quantity<<"\t\t\t\t"<< price<<"\t\t"<<VAT<<"\t\t\t"<<Discount<<"\t"<<endl<<endl;
    }
    void setpart(string a){
        
        part = a;
    }
    };

int main()
{
    //string P2,D2;
    //int Q2,P3;
   //cout<<"Enter the Part no:";cin>>P2;
    //cout<<"Enter Description of Parts:";cin>>D2;
    //cout<<"Enter Quantity:";cin>>Q2;
    //cout<<"Enter Price;";cin>>P3;
    //cout<<"VAT 0.20%";cin>>V1;
    //cout<<"Enter Discout";cin>>D3;
    //string x,y,z;
    //cout<<"Enter the Part no:";cin>>x;
    //cout<<"Enter the Description of Part:";cin>>y;
    //cout<<"Enter the quantity";cin>>z;
    //invoice a(x,y,3,4);
    invoice a("Bulb","Light",5,550,0.2,0);

    a.getparts();
    return 0;
}
