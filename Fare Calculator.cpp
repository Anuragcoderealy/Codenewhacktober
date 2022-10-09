#include <iostream>
#include <string>

using namespace std;

//Name: Harsh Chaudhary 
//Student ID: 101428605

int main() {
	int inspectioncharge = 75;
	string vehiclenumber, Customer_name, work;
	float hours, partcost, Total, labcharge;
	bool workdone;



	//customer details
	cout << "Customer Name: ";
	getline(cin, Customer_name);
	cout << "Vehicle Number: ";
	getline(cin, vehiclenumber);

	cout << "workdone on the vehicle(0 or 1):";
	cin >> workdone;
	cout << "Time labour worked(in hrs):";
	cin >> hours;
	cout << "Cost of the part:$";
	cin >> partcost;

	labcharge = 75 * hours;
	Total = labcharge + partcost;

	system("CLS");

	if (workdone == 0)
	{
		//Company's Info
		cout << "*                       XYZ Repair Shop                      *" << endl;
		cout << endl;
		cout << "Contact No: +1 4**-2**-2***" << endl;
		cout << "Email id: xyz_car_repairs@gmail.com" << endl;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;

		// Date & Time
		cout << "Date: " << __DATE__ << endl;
		cout << "Time: " << __TIME__ << endl;

		//customer details
		cout << "Customer Name: ";
		cout << Customer_name << endl;
		cout << "Vehicle Number: ";
		cout << vehiclenumber << endl;
		cout << endl;

		//Receipt
		cout << "    ----Reciept----" << endl;
		cout << endl;

		cout << "Inspection charge: $" << inspectioncharge << endl;
		cout << "Cost of parts    : $ 0" << endl;
		cout << "------------------------" << endl;
		cout << "Total cost       : $" << inspectioncharge << endl;
		cout << "------------------------" << endl;





	}

	//When total price is less than $120
	else if (Total < 120)
	{
		//company's info
		cout << "*                       XYZ Repair Shop                      *" << endl;
		cout << endl;
		cout << "Contact No: +1 4**-2**-2***" << endl;
		cout << "Email id: xyz_car_repairs@gmail.com" << endl;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;

		// Date & Time
		cout << "Date: " << __DATE__ << endl;
		cout << "Time: " << __TIME__ << endl;

		//customer details
		cout << "Customer Name: ";
		cout << Customer_name << endl;
		cout << "Vehicle Number: ";
		cout << vehiclenumber << endl;
		cout << endl;

		//Receipt
		cout << "    ----Reciept----" << endl;
		cout << endl;
		cout << "Cost of parts(not incl): $";
		cout << partcost << endl;
		cout << "Minimum charges applied: $120 " << endl;

		cout << "-----------------------------" << endl;
		cout << "Total repair cost: $";
		cout << "120" << endl;
		cout << "-----------------------------" << endl;



	}

	//when Total charge is more than $120
	else
	{
		//company's info
		cout << "*                       XYZ Repair Shop                      *" << endl;
		cout << endl;
		cout << "Contact No: +1 4**-2**-2***" << endl;
		cout << "Email id: xyz_car_repairs@gmail.com" << endl;
		cout << endl;
		cout << "--------------------------------------------------------------" << endl;

		// Date & Time
		cout << "Date: " << __DATE__ << endl;
		cout << "Time: " << __TIME__ << endl;

		//customer details
		cout << "Customer Name: ";
		cout << Customer_name << endl;
		cout << "Vehicle Number: ";
		cout << vehiclenumber << endl;
		cout << endl;

		//Receipt
		cout << "    ----Reciept----" << endl;
		cout << endl;
		cout << "Cost of parts    : $";
		cout << partcost << endl;
		cout << "Labour charge    : $";
		cout << labcharge << endl;


		cout << "-----------------------------" << endl;
		cout << "Total repair cost: $";
		cout << Total << endl;
		cout << "-----------------------------" << endl;

	}







	return 0;
}