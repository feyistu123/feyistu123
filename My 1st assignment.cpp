#include <iostream>
using namespace std;
#include <string>

int main(){
cout <<"This is product sales and inventory analysis of the store to calculate total sales and updates inventory based on user input. " <<endl;
cout <<"As cpp is a compiled language, don't forget to compile the program before running it." <<endl;

string ProductName;
int ProductCategory;
int InitialInventory;
float ProductPricePerUnit;
int ItemsSold;

int NewInventory;
float TotalSales;
string InventoryStatus;

//direct initialization
string ProductNameD ="Mobile phone";
int ProductCategoryD = 1;
int InitialInventoryD = 40;
float ProductPricePerUnitD = 15000.00;
int ItemsSoldD = 25;
//assignment after declaration
string productName;
int productCategory;
int initialInventory;
float productPricePerUnit;
int itemsSold;
productName="Note book";
productCategory = 4;
initialInventory = 80;
productPricePerUnit= 100.00;
itemsSold=50;
//list initialization
string ProductNameL{"Dress"};
int ProductCategoryL{3};
int InitialInventoryL{65};
float ProductPricePerUnitL{300.50};
int ItemsSoldL{32};

auto TotalSalesHelper=TotalSales;
decltype(InitialInventory) InitialInventoryHelper=30;

#define TaxRatePreprocessor 0.09
const float TaxRateConst = 0.09;

cout <<"Enter product name (a single word): ";
cin >>ProductName;
cout <<"Enter product category 1-5: ";
cin >>ProductCategory;
cout <<"Enter initial inventory quantity: ";
cin >>InitialInventory;
cout <<"Enter product price per unit: ";
cin >>ProductPricePerUnit;
cout <<"Enter number of items sold: ";
cin >> ItemsSold;
cout <<"\n";
NewInventory= InitialInventory;
NewInventory -= ItemsSold;
TotalSales= ItemsSold * ProductPricePerUnit;
InventoryStatus=(NewInventory<10)? "Low Inventory" : "Sufficient Inventory";

if(ProductCategory>= 1 && ProductCategory<= 5){
    switch (ProductCategory){
        case 1:
            cout << "Category 1: Electronics\n";
            break;
        case 2:
            cout << "Category 2: Groceries\n";
            break;
        case 3:
            cout << "Category 3: Clothing\n";
            break;
        case 4:
            cout << "Category 4: Stationery\n";
            break;
        case 5:
            cout << "Category 5: Miscellaneous\n";
            break;}
    }

else
    cout << "Invalid product category. Please enter a number between 1 and 5.\n";

cout <<"\nReceipt printing:\n";
for (int i=1; i<=ItemsSold; i++){
    cout << "Item " << i << ": $" << ProductPricePerUnit << "\n";
    }
cout <<"\n";
cout <<"Tax rate from preprocessor constant: " <<TaxRatePreprocessor* 100 <<"%\n";
cout <<"Tax rate from const variable: " <<TaxRateConst* 100 <<"%\n";

cout <<"\nProduct Details:\n";
cout <<"Product name: " <<ProductName <<endl;
cout <<"Product category: " <<ProductCategory <<endl;
cout <<"Initial inventory: " <<InitialInventory <<endl;
cout <<"Product price per unit:"  <<ProductPricePerUnit <<endl;
cout <<"Items sold: " <<ItemsSold <<endl;
cout <<"New inventory: " <<NewInventory <<endl;
cout <<"Total sales: " <<TotalSales <<endl;
cout <<"Inventory status: " <<InventoryStatus <<endl;
cout <<"\nHelper Variable Values:\n";
cout <<"Total sales helper (using 'auto'): $" << TotalSalesHelper << "\n";
cout <<"Initial inventory helper (using 'decltype'): " << InitialInventoryHelper << "\n";
return 0;
}
