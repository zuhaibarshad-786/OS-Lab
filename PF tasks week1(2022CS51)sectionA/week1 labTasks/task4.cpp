#include <iostream>
using namespace std;
main()
{
     string gender;
     int bodyweight;
     int wristMeasurement;
     int wristMeasurementFullest;
     int wristMeasurementNavel;
     int hipMeasurement;
     int forearnMeasurement;
     float bodyFat;
     float bodyPer;
     float a1, a2, a3, a4, a5, b;
     cout << "Enter gender to measure fat:" << endl;
     cin >> gender;
     if (gender == "male" || gender == "Male")
     {
          cout << "Enter bodyWeight:" << endl;
          cin >> bodyweight;
          cout << "Enter wrist Measurement:" << endl;
          cin >> wristMeasurement;
          a1 = (bodyweight * 1.082) + 94.42;
          a2 = wristMeasurement * 4.15;
          b = a1 - a2;
          bodyFat = bodyweight - b;
          bodyPer = (bodyFat * 100) / bodyweight;
          cout << "Body Fat is:"
               << " " << bodyFat << endl;
          cout << "Body Fat percentage is :"
               << " " << bodyPer << endl;
     }
     else if (gender == "female" || gender == "Female")
     {
          cout << "Enter body weight:" << endl;
          cin >> bodyweight;
          cout << "Enter wrist Measurement (at fullest point):" << endl;
          cin >> wristMeasurementFullest;
          cout << "Enter  wrist Measurement (at navel point):" << endl;
          cin >> wristMeasurementNavel;
          cout << "Enter hip weight (at fullest point):" << endl;
          cin >> hipMeasurement;
          cout << "Enter  Forearn weight(at fullest point):" << endl;
          cin >> forearnMeasurement;

          a1 = (bodyweight * 0.732) + 8.987;
          a2 = wristMeasurementFullest / 3.140;
          a3 = wristMeasurementNavel * 0.157;
          a4 = hipMeasurement * 0.249;
          a5 = forearnMeasurement * 0.434;
          b = a1 + a2 - a3 - a4 + a5;
          bodyFat = bodyweight - b;
          bodyPer = (bodyFat * 100) / bodyweight;
          cout << "Body Fat is:"
               << " " << bodyFat << endl;
          cout << "Body Fat percentage is :"
               << " " << bodyPer << endl;
     }
}