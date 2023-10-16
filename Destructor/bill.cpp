#include<iostream>
using namespace std;

class dmartbill
{
    public:
       
        int serios_no;
        char pro_name[20];
        int rate, qty, amt, billamt;
        float dis, gst, netbill;

    dmartbill()
    {
        
        cout << "Enter Serios no : ";
        cin >> serios_no;

        cout << "Enter Product Name : ";
        cin >> pro_name;

        cout << "Enter Rate : ";
        cin >> rate;

        cout << "Enter Quantaty : ";
        cin >> qty;

        cout << "\n                     \n";
        
        cout << "Serios_no" << "\t" << "pro_name" << "\t" << "Rate" << "\t" << "Quantaty" << "\t" << "Amount" << "\t" << "Discount" << "\t" << "BillAmt" << "\t" << "Gst" << "\t" << "NetBill" << endl ;

    }

    void datashow()
    {
        
        amt = rate * qty;
        dis = amt * 5 / 100;
        billamt = amt - dis;
        gst = billamt * 18 / 100;
        netbill = billamt + gst;

        cout << serios_no << "\t" << "\t" << pro_name << "\t" << "\t" << rate <<"Rs." << "\t" << qty << "\t" << "\t" << amt << "\t" << dis << "%" <<"\t" << "\t" << billamt << "Rs." << "\t" << gst << "%" << "\t" << netbill << "Rs.";

    }


};

int main()
{
    
    dmartbill d1;
    
    d1.datashow();

    return 0;

}