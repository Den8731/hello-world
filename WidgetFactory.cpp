// WidgetFactory.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
/*Defining the class declaration or blueprint to be referenced later on within the program by the instantiated*
 *objects.  */                                                                                                
class Widget {
private:
	double hours;
	int widgets;
	int orders;
    int days;
//Anything can access these member functions.
public:
	void setDays(double);
	void setWidgetQuantity(int);
	double getWidgetQuantity();
};

void Widget::setWidgetQuantity(int w) {
     
	widgets = w;
}

double Widget::getWidgetQuantity() {

	return (widgets * 10) / 16;
}


void Widget:: setDays(double numDays) {
	 
	numDays = days;

}



int main()
{
	Widget orderDetails;
		
   
	double widgetQty, days, hours;
	cout << "Enter the quantity of widgets placed for this order.\n";
	cin >> widgetQty;
	cout << "Completion of production on the product is expected to be reached within" << endl;	
	//Calling member functions of the class Widget.
	orderDetails.setDays(widgetQty);
    orderDetails.setWidgetQuantity(widgetQty);
	cout << (orderDetails.getWidgetQuantity()) << " days "  << endl;
	
	//To keep the GUI command window open.
	system("pause");
   
	return 0;
}

