/*#include <iostream>
#include <string.h>
using namespace std;

class customer
{
protected:
    string name, number;

public:
    void getinformation()
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~ WELCOM TO LAPINOZ PIZZA ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
        cout << "CUSTOMER NAME : ";
        cin >> name;
        cout << "CUSTOMER CONTACT NUMBER : ";
        cin >> number;
    }

    void showinformation()
    {
        cout << "\n\t Name               : " << name << endl;
        cout << "\n\t Contact Number     : " << number << endl;
    }
};
class Show_bill : public customer
{

protected:
    int GST, discount, Net_bill, bill_amt = 0;
    int Bill = 0, quantity;

    string item[5];

public:
    int item1()
    {
        cout << "\n \tEnter Qunatity :";
        cin >> quantity;
        item[0] = " MARGHERITA PIZZA  = 135 ";
        return Bill = Bill + quantity * 135;
    }

    int item2()
    {
        cout << "\n \tEnter Qunatity : ";
        cin >> quantity;
        item[1] = " GARDEN DELIGHT PIZZA = 185 ";
        return Bill = Bill + quantity * 185;
    }

    int item3()
    {
        cout << "\n \tEnter Qunatity : ";
        cin >> quantity;
        item[2] = "FARM VILLA PIZZA   = 235";
        return Bill = Bill + quantity * 235;
    }

    int item4()
    {
        cout << "\n \tEnter Qunatity : ";
        cin >> quantity;
        item[3] = "CHEEZY-7 PIZZA = 255";
        return Bill = Bill + quantity * 255;
    }

    int item5()
    {
        cout << "\n \tEnter Qunatity : ";
        cin >> quantity;
        item[4] = "INDIAN STYLE PIZZA = 275";
        return Bill = Bill + quantity * 275;
    }

    int Show_Bill_Amt()
    {

        return bill_amt = bill_amt + Bill;
    }

    int Show_disc()
    {
        if (bill_amt > 500)
        {
            return discount = (bill_amt * 50) / 100;
        }

        else
        {
            return discount = 0;
        }
    }

    int Show_GST()
    {
        return GST = (bill_amt * 18) / 100;
    }

    int Show_Net_bill()
    {
        return Net_bill = bill_amt + GST - discount;
    }

    void Show_Net_Bill()
    {
        Show_bill_Items();
        cout << "\n\t TOTAL ORDER PRICE  : " << Show_Bill_Amt() << endl;
        cout << "\n\t GST                : " << Show_GST() << endl;
        cout << "\n\t DISCOUNT           : " << Show_disc() << endl;
        cout << "\n\t TOTAL PAY BIL      : " << Show_Net_bill() << endl;
        cout << "\n\n\tTHANK FOR YOUR VISIT"<<endl;
        cout << "\tHAVE A NICE DAY" << endl;
        cout << "\tRATE MY RESTAURANTS !"<<endl;
    }
    void Show_bill_Items()
    {

        for (int i = 0; i < 5; i++)
        {
            if (!item[i].empty())
            {
                cout << "\n\t " << i + 1 << ":" << item[i] << endl;
            }
        }
    }
};
int main()
{

    Show_bill a;

    a.getinformation();

    cout << "\n\t\t\t\t\t\t **** PIZZA MENU ***** \n";

    cout << "\n\t\t\t |---------------------------------------------------------|";
    cout << " \n \t\t\t |[1] MARGHERITA PIZZA                        : RS. 135 /- |";
    cout << " \n \t\t\t |[2] GARDEN DELIGHT PIZZA                    : RS. 185 /- |";
    cout << " \n \t\t\t |[3] FARM VILLA PIZZA                        : RS. 235 /- |";
    cout << " \n \t\t\t |[4] CHEEZY-7 PIZZA                          : RS. 255 /- |";
    cout << " \n \t\t\t |[5] INDIAN STYLE PIZZA                      : RS. 275 /- |\n";
    cout << "\t\t\t |---------------------------------------------------------|";
    cout << " \n \t\t\t YOUR ORDER IS COMPLATE . \n";

    int Pizza;

    do
    {
        cout << "\n Select Pizza Item : ";
        cin >> Pizza;
        switch (Pizza)
        {
        case 1:
            a.item1();
            break;
        case 2:
            a.item2();
            break;
        case 3:
            a.item3();
            break;
        case 4:
            a.item4();
            break;
        case 5:
            a.item5();
            break;

        case 0:
            break;

        default :
            cout << "YOu ENTER WORNG PIZZA WITH ITEM";
        }

    } while (Pizza != 0);
    a.showinformation();
    a.Show_Net_Bill();
}*/
//  restaurant -> name
//  show menu
//  items
//  customer -> name
//  customer -> number
//  discount up 5000 bills 10%
//  bill gst :: sgst 2.5%,cgst :: 2.5%
#include<iostream>
#include<string.h>
using namespace std;
class Restaurant
{
   protected:
   string name, contact;
   public:
   void get_info()
     {
          cout<<"\n\t\t **********__AXAR RESTRURENT__**********\n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"Enter your Contact Number : ";
          cin>>contact;
          int a;
        
     }
   void show_info()
     {
          cout<<"\n\t Name : "<<name<<endl;
          cout<<"\n\t Contact Number : "<<contact<<endl;
     }

};
class Show_bill : public Restaurant
{
      protected :   
      double  GST  ,  disc , Net_bill,bill_amt =0 ;
      int   Bill =0 , quty;
      string items[5];
      public :
      int item1()
      {
         cout<<"\n \tEnter  : ";cin>>quty;
         items[0] = "GRREN BHAJI";
         return Bill = Bill + quty*450;
      }
      int item2()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
         items[1] = "GRREN GOTALO";
         return Bill = Bill + quty*550;
      }
      int item3()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[2] = "MASALA DHOSA";
         return Bill = Bill + quty*400;
      }
      int item4()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[3] = "BOMBAY BHEL";
         return Bill = Bill + quty*500;
      }
      int item5()
      {
         cout<<"\n \tEnter  : "; cin>>quty;
          items[4] = "AXAR SPECIAL";
         return Bill = Bill + quty*800;
      }
      double Show_Bill_Amt()
      { 

         return bill_amt = bill_amt + Bill;
      }
      double Show_disc()
      {
         if (bill_amt >  5000 )
        {
            return disc = ( bill_amt * 10 ) / 100; 
        }
        else 
        {
            return disc = 0;
        }
      }
      double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }

      double Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST - disc ;
      }
      void Show_Net_Bill()
      {
            cout<<"\n\t Total Order price  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t Discount           : "<<Show_disc() <<endl;
            cout<<"\n\t Net Bill iS        : "<<Show_Net_bill()<<endl; 
              cout<<"\n\t Items Bought     : "<<endl;
        for (int i = 0; i < 5; i++)
        {
            if (!items[i].empty())
                cout<<"\n\t\t "<<i + 1<<". "<<items[i]<<endl;
        }
      }

};
int main ()
{
        Show_bill J ;
        J.get_info();

        cout<<"\n\t\t\t ::::::::::_Menu_:::::::::: \n";
        cout<<" \n \t\t\t [1] GRREN BHAJI  : RS. 450 /- "; 
        cout<<" \n \t\t\t [2] GRREN GOTALO : RS. 550 /- "; 
        cout<<" \n \t\t\t [3] MALASA DHOSA : RS. 400 /- "; 
        cout<<" \n \t\t\t [4] BOMBAY BHEL  : RS. 500 /- "; 
        cout<<" \n \t\t\t [5] AXAR SPECIAL : RS. 800 /- \n";
        cout<<" \n \t\t\t [6] CANCEL ORDER  ";
        cout<<" \n \t\t\t  Confirm Your Order    [0]  \n";
        cout<<" \n \t\t\t -> NOTIS<- _____ don't be shy ask forgiveness _____";

        int i;
        do
        {
         cout<<"\n Enter your choice : ";
         cin>>i;
        switch (i)
        {
        case 1: 
             J.item1();
                  cout<<"\n \t\t\t [1] GRRN BHAJI  : RS.450 \n";
            break;
        case 2: 
             J.item2();
                  cout<<"\n \t\t\t [2]GRREN GOTALO : RS.550 \n";
            break;
        case 3: 
             J.item3();
                  cout<<"\n \t\t\t [3]MASALA DHOSA  : RS.400 \n";
            break;
        case 4: 
             J.item4();
                  cout<<"\n \t\t\t [4]BOMBAY BHEL  : RS.500\n";
            break;
        case 5: 
            J.item5();
                 cout<<"\n \t\t\t [5]AXAR SPECIAL  : RS.800 \n";
            break;
            case 0: 
            break;
        case 6:
        cout<<"\n \t\t\t [6] CANCEL ORDER \n";
            return 0;
            default :
           cout<<"\n \t\t\t [6] CANCEL ORDER \n";
            break;

        }

} while (i!=0);
            J.show_info();
            J.Show_Net_Bill();
}