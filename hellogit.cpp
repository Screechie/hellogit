#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> myVector = { 10, 15, 20, 25, 30};
	
	cout<<"Printing my vector.....\n";
	//Using for loop to print a vector
	for(auto i=0u; i < myVector.size(); i++){
		cout<<myVector[i];

	}

	return 0;

}


