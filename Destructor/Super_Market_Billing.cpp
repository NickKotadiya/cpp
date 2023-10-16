#include <iostream>
using namespace std;

class bill
{
protected:
    string name,number;
    int a;
public:
    void coustmor()
    {
        cout << "--------WELCOME TO THE BB CLUB--------\n"
             << "\n";
        cout << "Enter a Name of coustmor :";
        cin >> name;
        moille_num:
        cout << "-----------------------" << endl;
        cout << "Enter a Number a coustmor :";
        cin >> number;
        a=number.size();
        if(a==10)
        {
            cout<<" Valid 10-digit mobile number."<<endl;
        }
        else
        {
            cout<<"Invalid mobile number. It should be 10 digits."<<endl;
            goto moille_num;
        }
        cout << "-----------------------" << endl;
    }
    void showinformation()
    {
        cout <<"\t----------**BILL**----------\n";
        cout << "\n\t Contact Name       : " << name << "\n";
        cout << "\n\t Contact Number     : " << number << endl;
        cout << "--------------------------------------" << endl;
    }
};
class Show_bill : public bill
{
protected:
    int gst, dis, netbill, billamt = 0;
    int bill = 0, qty;

    string siteam[5];

public:
    int siteam1()
    {
        cout << "\nEnter a Qunatity :";
        cin >> qty;
        cout << "-------------------------------------------\n";
        cout <<"QUNATITY OF PIZZA :"<<qty<<"\n";
        cout << "-------------------------------------------\n";
        siteam[0] = "Pizza = 300";
        return bill = bill + qty * 300;
    }
    int siteam2()
    {
        cout << "\nEnter a Qunatity :";
        cin >> qty;
        cout << "-------------------------------------------\n";
        cout <<"QUNATITY OF BURGER :"<<qty<<"\n";
        cout << "-------------------------------------------\n";
        siteam[1] = "Burger = 150";
        return bill = bill + qty * 150;
    }
    int siteam3()
    {
        cout << "\n Enter a Qunatity :";
        cin >> qty;
        cout << "-------------------------------------------\n";
        cout <<"QUNATITY OF HOT DOG :"<<qty<<"\n";
        cout << "-------------------------------------------\n";
        siteam[2] = "Hot dog = 100";
        return bill = bill + qty * 100;
    }
    int siteam4()
    {
        cout << "\nEnter a Qunatity :";
        cin >> qty;
        cout << "-------------------------------------------\n";
        cout <<"QUNATITY OF KULLAD PIZZA :"<<qty<<"\n";
        cout << "-------------------------------------------\n";
        siteam[3] = "Kullad Pizza = 200";
        return bill = bill + qty * 200;
    }
    int siteam5()
    {
        cout << "\nEnter a Qunatity :";
        cin >> qty;
        cout << "-------------------------------------------\n";
        cout <<"QUNATITY OF PERI PERI FRIES :"<<qty<<"\n";
        cout << "-------------------------------------------\n";
        siteam[4] = "Peri_Peri_Fries = 50";
        return bill = bill + qty * 50;
    }
    int Show_Bill_Amt()
    {

        return billamt = billamt + bill;
    }
    int Show_disc()
    {
        if (billamt > 500)
        {
            return dis = (billamt * 50) / 100;
        }

        else
        {
            return dis = 0;
        }
    }
    int Show_GST()
    {
        return gst = (billamt * 18) / 100;
    }
    int Show_Net_bill()
    {
        return netbill = billamt + gst - dis;
    }
    void Show_Net_Bill()
    {
        Show_bill_Items();
        cout << "\n----------------------------------------------------" << endl;
        cout << "\n TOTAL ORDER PRICE  : " << Show_Bill_Amt();
        cout << "\n----------------------------------------------------" << endl;
        cout << "\n GST                : " << Show_GST();
        cout << "\n----------------------------------------------------" << endl;
        cout << "\n DISCOUNT           : " << Show_disc();
        cout << "\n----------------------------------------------------" << endl;
        cout << "\n TOTAL PAY BIL      : " << Show_Net_bill();
        cout << "\n----------------------------------------------------";
        cout << "\n\n*****THANK FOR YOUR VISIT*****" << endl;
    }
    void Show_bill_Items()
    {

        for (int i = 0; i < 5; i++)
        {
            if (!siteam[i].empty())
            {
                cout << "\n\t " << i + 1 << ":" << siteam[i] << endl;
            }
        }
    }
};

int main()
{
    Show_bill a;

    a.coustmor();

    cout << "\n\t\t **** MENU ***** \n";
    cout << "-----------------------------------------------\n";
    cout << "\tIteam"
         << "\t\t\t  Rate"
         << "\n"
         << "-------------------------------------------\n";
    cout << "1."
         << "Pizza"
         << "\t\t\t\t  300/-"
         << "\n";
    cout << "2."
         << "Burger"
         << "\t\t\t  150/-"
         << "\n";
    cout << "3."
         << "Hotdog"
         << "\t\t\t  100/-"
         << "\n";
    cout << "4."
         << "Kullad Pizza"
         << "\t\t\t  200/-"
         << "\n";
    cout << "5."
         << "Peri Peri Fries"
         << "\t\t  50/-"
         << "\n";

    int siteam = 0;

    do
    {
        cout << "-----Select Iteam-----"
             << "\n";
        cin >> siteam;

        switch (siteam)
        {
        case 1:
            a.siteam1();
            break;

        case 2:
            a.siteam2();
            break;

        case 3:
            a.siteam3();
            break;

        case 4:
            a.siteam4();
            break;

        case 5:
            a.siteam5();
            break;

        case 0:
            break;

        default:
            cout << "YOU ENTER WORNG ITEM";
        }

    } while (siteam != 0);
    a.showinformation();
    a.Show_Net_Bill();
}