#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    int count = 0;
    float sum = 0, sump2 = 0;
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        sump2 += pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt(sump2/count-pow((sum/count),2));
}




//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
