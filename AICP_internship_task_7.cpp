//created by Afia Mushtaq
//Superior University Lahore
//AICP_internship task 7

#include <iostream>
using namespace std;
//creating and initializing variables
    string charity_1;
	string charity_2;
	string charity_3;
    double total_1 =0;
	double total_2 =0;
	double total_3 =0;
	double grand_total;
	double shopping_bill;
	double donation;
    int choice;
// Function declaration
void setup_donation(string& charity_1,string& charity_2,string& charity_3,double& total_1,double& total_2,double& total_3);
void record_and_total(string charity_1,string charity_2,string charity_3,double& total_1,double& total_2,double& total_3);
void show_totals(string charity_1,double total_1,string charity_2,double total_2,string charity_3,double total_3);

int main() {
    

    // TASK 1 – Set up the donation system
    setup_donation(charity_1, charity_2, charity_3, total_1, total_2, total_3);

    // TASK 2 – Record and total each donation
    record_and_total(charity_1, charity_2, charity_3, total_1, total_2, total_3);

    //TASK 3 – Show the totals so far
    show_totals(charity_1, total_1, charity_2, total_2, charity_3, total_3);

    return 0;
}
//the names of three charities to be input and stored
//he charity names to be displayed with a number (1, 2 or 3) beside each name

//Task_1
void setup_donation(string& charity_1, string& charity_2, string& charity_3, double& total_1, double& total_2, double& total_3) {
    cout << "Enter charities names(3):" << endl;
    cout << "Charity 1: \n";
    cin >> charity_1;
    cout << "Charity 2: \n";
    cin >> charity_2;
    cout << "Charity 3: \n";
    cin >> charity_3;
 // three totals to be set to zero ready to total each charity donation

    total_1 =0;
    total_2 =0;
	 total_3 =0 ;
}
//Task_2
void record_and_total(string charity_1, string charity_2, string charity_3, double& total_1, double& total_2, double& total_3) {
   
do {
    // choice of 1, 2 or 3 to be entered to choose the charity, all other entries rejected
    cout << "\nEnter the charity choice (1, 2, or 3): \n ";
    cin >> choice;

    if (choice >= 1 && choice <= 3) {
        cout << "Enter the value of the customer shopping bill: ";
        cin >> shopping_bill;

        // 1% of their shopping bill will be donated to the chosen charity.
        donation = shopping_bill * 0.01;

        // the donation to be calculated
        switch (choice) {
            case 1:
            	//add the donation to the appropriate total

                total_1 += donation;
                cout << "Donation to " << charity_1 << ": " << donation << endl;
                break;
            case 2:
                total_2 += donation;
                cout << "Donation to " << charity_2 << ": " << donation << endl;
                break;
            case 3:
                total_3 += donation;
                cout << "Donation to " << charity_3 << ": " << donation << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    }
    //input a charity choice of 1, 2 or 3
} while (choice == 1 || choice == 2 || choice == 3);}
//Task_3/
void show_totals(string charity_1, double total_1, string charity_2, double total_2, string charity_3, double total_3) {
    cout << "\nCharity Totals:" << endl;

    // Display the charities’ names and the totals in descending order of totals
    if (total_1 >= total_2 && total_1 >= total_3) {
        cout << charity_1 << ": " << total_1 << endl;
        if (total_2 >= total_3) {
            cout << charity_2 << ":" << total_2 << endl;
            cout << charity_3 << ":" << total_3 << endl;
        } else {
            cout << charity_3 << ": " << total_3 << endl;
            cout << charity_2 << ": " << total_2 << endl;
        }
    } else if (total_2 >= total_1 && total_2 >= total_3) {
        cout << charity_2 << ":" << total_2 << endl;
        if (total_1 >= total_3) {
            cout << charity_1 << ":" << total_1 << endl;
            cout << charity_3 << ":" << total_3 << endl;
        } else {
            cout << charity_3 << ":" << total_3 << endl;
            cout << charity_1 << ":" << total_1 << endl;
        }
    } else {
        cout << charity_3 << ": " << total_3 << endl;
        if (total_1 >= total_2) {
            cout << charity_1 << ":" << total_1 << endl;
            cout << charity_2 << ":" << total_2 << endl;
        } else {
            cout << charity_2 << ":" << total_2 << endl;
            cout << charity_1 << ":" << total_1 << endl;
        }
    }

    //Calculate a grand total of all three totals.
//Output ‘GRAND TOTAL DONATED TO CHARITY’ and the amount of the grand total.

    grand_total = total_1 + total_2 + total_3;
    cout << "\nGRAND TOTAL DONATED TO CHARITY:" <<grand_total<< endl;
}

