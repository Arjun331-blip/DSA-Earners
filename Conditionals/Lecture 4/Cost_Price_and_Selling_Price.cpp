#include <iostream>
using namespace std;

int main(){
    int costPrice, sellingPrice;
    cout << "Enter a cost price of object: ";
    cin >> costPrice;
    cout << "enter a Selling price of object: ";
    cin >> sellingPrice;
    int profit = sellingPrice - costPrice;
    int loss = costPrice - sellingPrice;
    if(sellingPrice > costPrice)
        cout << "owner make profit Rs. "<< profit;
    else if(costPrice > sellingPrice)
        cout << "owner has loss Rs. " << loss;
    else cout << "the owner make no profit and no loss.";
}