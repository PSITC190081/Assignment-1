#include <iostream>

using namespace std;

int main()
{

    string name,id,item,Printer, Phone, Table;
    int quantity;
    int const printer = 1000;
    int const phone = 800;
    int const table = 200;
    double VAT = 0.12;

    cout << "\n------WELCOME TO INF SUPERMARKET------\n"<<endl;

    cout<<"Please Enter Your Name "<<endl;
    cin>> name;
    cout<<"HELLO "<<name<<", THESE ARE THE ITEMS BEEN SOLD HERE: "<<endl;
    cout<<" 1. Printer \n 2. Phone \n 3. Table"<<endl;

    cout << "Please enter your unique ID" << endl;
    cin >> id;
    char repeat= 'y';

    while (repeat=='y'|| repeat=='Y'){


    cout << "Select an item to buy" <<endl;
    cin >> item;
    cout << "How many " << item<<"s do you want to buy:" << endl;
    cin >> quantity;

    int tableQty , printerQty,phoneQty;
    tableQty = table*quantity;
    printerQty = printer* quantity;
    phoneQty = phone*quantity;

    //Calculating the VAT amount for each item.
    double printerVatAmount, phoneVatAmount,tableVatAmount;
    printerVatAmount = VAT*printerQty;
    phoneVatAmount = VAT*phoneQty;
    tableVatAmount = VAT*tableQty;

    //Calculating the Total Cost for each item.
    int printerTotalCost, phoneTotalCost, tableTotalCost;
    printerTotalCost = printerQty + printerVatAmount;
    phoneTotalCost = phoneQty + phoneVatAmount;
    tableTotalCost = tableQty + tableVatAmount;

    double amountToPay;
    float printerBalance,phoneBalance,tableBalance;


    if( item=="Printer"){
        cout << "Total amount = $" <<printerTotalCost<< endl;
        cout << "Please enter the amount to pay" <<endl;
        cin >> amountToPay;
         printerBalance = amountToPay - printerTotalCost;
        if(amountToPay>printerTotalCost){
            cout << "Your balance is $" << printerBalance << endl;
        }
        else{
            cout << "Your payment amount is insufficient to complete this transaction! Please top up." <<endl;
        }

        }

            else if(item=="Phone"){
        cout << "Total amount = $" <<phoneTotalCost<< endl;
        cout << "Please enter the amount to pay" <<endl;
        cin >> amountToPay;
        phoneBalance = amountToPay - phoneTotalCost;
        if(amountToPay>phoneTotalCost){
            cout << "Your balance is $" << phoneBalance << endl;
        }
        else{
            cout << "Your payment amount is insufficient to complete this transaction! Please top up." <<endl;
        }
            }
            else{
        cout << "Total amount = $" <<tableTotalCost<< endl;
        cout << "Please enter the amount to pay" <<endl;
        cin >> amountToPay;
         tableBalance = amountToPay - tableTotalCost;
        if(amountToPay>tableTotalCost){
            cout << "Your balance is $" << tableBalance << endl;
        }
        else{
            cout << "Your payment amount is insufficient to complete this transaction! Please top up." <<endl;
        }
    }


    //Receipt for customer
    cout << "THIS IS YOUR RECEIPT:" <<endl;
    cout << "---------------------" <<endl;
    cout <<"Name of Customer: "<< name << endl;
    cout <<"Unique ID: "<< id << endl;
    cout <<"Item Bought: "<< item << endl;
    cout <<"Quantity Bought: "<< quantity << endl;

    if(item=="Printer"){
            cout <<"VAT Amount: "<<printerVatAmount <<endl;
            cout <<"Total Cost: "<<printerQty <<endl;
            cout <<"Total Amount Paid: "<<amountToPay<<endl;
            cout <<"Balance/Change: "<<printerBalance<<endl;
    }

        else if(item=="Phone"){
            cout <<"VAT Amount: "<<phoneVatAmount <<endl;
            cout <<"Total Cost: "<<phoneQty <<endl;
            cout <<"Total Amount Paid: "<<amountToPay<<endl;
            cout <<"Balance/Change: "<<phoneBalance<<endl;
        }

        else {
            cout <<"VAT Amount: "<<tableVatAmount <<endl;
            cout <<"Total Cost: "<<tableQty <<endl;
            cout <<"Total Amount Paid: "<<amountToPay<<endl;
            cout <<"Balance/Change: "<<tableBalance<<endl;
        }
        cout<<"DO YOU WANT TO BUY ANYTHING  ELSE?"<<endl;
        cout<< "ENTER 'Y' TO CONTINUE AND 'N' TO QUIT"<<endl;
        cin>>repeat;//change control variable

    }

    cout <<" Thank You for transacting with us :Message "<< endl;


    return 0;
}
