#include<iostream>
using namespace std;

/// @brief 
/// @return 
int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << "\n";
	char grade;
	int i = 1;

	do{
		cout << "Student [" << i << "]: ";
		++i;
		cin >> grade;
		if( grade == 'A' ){
			count[0] = count[0]+1;
		}
		else if( grade == 'B' ){
			count[1] = count[1]+1;
		}
		else if( grade == 'C' ){
			count[2] = count[2]+1;
		}
		else if( grade == 'D' ){
			count[3] = count[3]+1;
		}
		else if( grade == 'F' ){
			count[4] = count[4]+1;
		}
		else if ( grade == '0' )break;
		else{ 
			cout << "Wrong input. Please input again.\n";
			--i;
		} 
		
	}while(true);
	
	
	cout << "In total " << i-2 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	return 0;
}
