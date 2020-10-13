#ifndef BILL_TYPE_H
#define BILL_TYPE_H

#include <iostream>
#include <string>



class billType {
	std::string  iD;
	double pharmacyCharges;
	double roomRent;
	double doctorFee;


	billType(std::string id = " ", double phrCharges = 0.0, double rmRent = 0.0, double docFee = 0.0);

	void printBill() const;




};


#endif // !BILL_TYPE_H


