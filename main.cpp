
#include <iostream>
using namespace std;
int main()
{
    int choice;
    int temperature = 0;
int light = 0;

bool fan = false;
bool heater = false;
bool lights = false;

while (true) {
    cout << "\n--- SMART HOME SYSTEM ---\n";
    cout << "1. Enter sensor data\n";
    cout << "2. Show system status\n";
    cout << "3. Exit\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 3) break;
}
if(choice==1) {
    cout << "Enter temperature: ";
cin >> temperature;

cout << "Enter light level: ";
cin >> light;

if (temperature > 30) {
    fan = true;
    heater = false;
} 
else if (temperature < 18) {
    heater = true;
    fan = false;
} 
else {
    fan = false;
    heater = false;
}

if (light < 300) {
    lights = true;
} else {
    lights = false;
}

}
 
 if(choice==2)
 {
 cout << "\n--- SYSTEM STATUS ---\n";

cout << "Fan: " << (fan ? "ON" : "OFF") << endl;
cout << "Heater: " << (heater ? "ON" : "OFF") << endl;
cout << "Lights: " << (lights ? "ON" : "OFF") << endl;    
     
 }
 
 
 
    return 0;
}