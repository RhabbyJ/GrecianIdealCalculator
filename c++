#include <iostream>
using namespace std;

double flexedArm;
double flexedCalf;
double nonDominantWrist;
double shoulder;
double waist;
double chest;
double wrist;
double upperLeg;
double knee;


void inputs () {

	cout << "Enter Flexed Arm: ";
	cin >> flexedArm;
	cout << "Enter Flexed Calf: ";
	cin >> flexedCalf;
	cout << "Enter Non Dominant Wrist: ";
	cin >> nonDominantWrist;
	cout << "Enter Shoulder: ";
	cin >> shoulder;
	cout << "Enter Waist: ";
	cin >> waist;
	cout << "Enter Chest: ";
	cin >> chest;
	cout << "Enter Wrist: ";
	cin >> wrist;
	cout << "Enter Upper Leg: ";
	cin >> upperLeg;
	cout << "Enter Knee: ";
	cin >> knee;

	
}

void calculateGrecianIdeal() {

	double flexedArmRatio = nonDominantWrist * 2.5;
	cout << "Your flexed arm should be: " << flexedArmRatio << " inches." << endl;
	double flexedCalfRatio = flexedArmRatio;
	cout << "Your flexed calf should be: " << flexedCalfRatio << " inches." << endl;
	double shoulderRatio = 1.618 * waist;
	cout << "Your shoulders should be: " << shoulderRatio << " inches." << endl;
	double chestRatio = 6.5 * nonDominantWrist;
	cout << "Your chest should be " << chestRatio << " inches." << endl;
	double upperLegRatio = 1.75 * knee;
	cout << "Your upper leg should be " << upperLegRatio << " inches." << endl;

	//difference calculator
	double flexedArmRatioDifference = fabs(flexedArmRatio - flexedArm);
	double flexedCalfRatioDifference = fabs(flexedCalfRatio - flexedCalf);
	double shoulderRatioDifference = fabs(shoulderRatio - shoulder);
	double chestRatioDifference = fabs(chestRatio - chest);
	double upperLegRatioDifference = fabs(upperLegRatio - upperLeg);

	if (flexedArmRatioDifference >= 0) {
		cout << "Your arm needs to be " << flexedArmRatioDifference << " inches larger." << endl;
	}
	else {
		cout << "Your arm needs to be " << flexedArmRatioDifference << " inches smaller." << endl;
	}

	if (flexedCalfRatioDifference >= 0) {
		cout << "Your calf needs to be " << flexedCalfRatioDifference << " inches larger." << endl;
	}
	else {
		cout << "Your calf needs to be " << flexedCalfRatioDifference << " inches smaller." << endl;
	}
	
	if (shoulderRatioDifference >= 0) {
		cout << "Your shoulder needs to be " << shoulderRatioDifference << " inches larger." << endl;
	}
	else {
		cout << "Your shoulder needs to be " << shoulderRatioDifference << " inches smaller." << endl;
	}

	if (chestRatioDifference >= 0) {
		cout << "Your chest needs to be " << chestRatioDifference << " inches larger." << endl;
	}
	else {
		cout << "Your chest needs to be " << chestRatioDifference << " inches smaller." << endl;
	}

	if (upperLegRatio >= 0) {
		cout << "Your upper leg needs to be " << upperLegRatioDifference << " inches larger." << endl;
	}
	else {
		cout << "Your upper leg needs to be " << upperLegRatioDifference << " inches smaller." << endl;
	}
}




int main() {

	inputs();

	calculateGrecianIdeal();

	return 0;
}
